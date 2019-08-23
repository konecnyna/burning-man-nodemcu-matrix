#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>


void scrollText(String textToDisplay, int color) {
  int x = matrix->width();
  int pixelsInText = textToDisplay.length() * 7;
  textMatrix->setTextSize(1);
  textMatrix->setRotation(2);
  textMatrix->setTextColor(color);
  textMatrix->setCursor(x, 0);
  textMatrix->print(textToDisplay);
  textMatrix->show();

  while (x > (matrix->width() - pixelsInText)) {
    textMatrix->fillScreen(matrix->Color(0, 0, 0));
    textMatrix->setCursor(--x, 0);
    textMatrix->print(textToDisplay);
    textMatrix->show();
    delay(50);
  }
}


void clearTop() {
  for (int row = 0; row < 8; row++) {
    for (int column = 0; column < 8; column++) {
      textMatrix->drawPixel(row, column, strip.Color(0, 0, 0));
    }
  }
}

void scrollTextNoClear(String textToDisplay, MatrixImage img, int color) {
  int x = matrix->width();

  // Account for 6 pixel wide characters plus a space
  int pixelsInText = textToDisplay.length() * mh;
  textMatrix->setTextSize(1);
  textMatrix->setRotation(3);
  textMatrix->setTextColor(color);
  textMatrix->setCursor(x, 0);
  textMatrix->print(textToDisplay);
  textMatrix->show();

  displayMatrix(img);
  while (x > (matrix->width() - pixelsInText)) {
    //textMatrix->fillScreen(matrix->Color(0, 0, 0));
    //clearTop();
    textMatrix->setCursor(--x, 0);
    textMatrix->print(textToDisplay);
    textMatrix->show();
    delay(150);
  }
}
