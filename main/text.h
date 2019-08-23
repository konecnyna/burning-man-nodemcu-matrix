#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>

void scrollText(String textToDisplay, int color) {
  int x = matrix->width();
  // Account for 6 pixel wide characters plus a space
  int pixelsInText = textToDisplay.length() * mh;
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
    delay(150);
  }
}
