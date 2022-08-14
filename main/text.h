#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>

int CENTER_TEXT_CURSOR_OFFSET = 2;

void scrollText(String textToDisplay, int color) {
//  textMatrix->clear();
//  textMatrix->setTextWrap(false);  // we don't wrap text so it scrolls nicely
//  textMatrix->setTextSize(1);
//  textMatrix->setRotation(0);
//  
  int screenWidth = matrix->width();
  int scrollLength = textToDisplay.length() + (screenWidth * 1.5);
  


  matrix->clear();
  matrix->setTextWrap(false);
  matrix->setTextSize(1);
  matrix->setRotation(0);
  matrix->setTextColor(color);

  

  for (int8_t index = scrollLength; index > scrollLength * -1 ; index--) {
    Serial.println(index);
    Serial.println(scrollLength);
    matrix->clear();
    matrix->setCursor(index, CENTER_TEXT_CURSOR_OFFSET);
    matrix->print(textToDisplay);
    matrix->show();
    delay(50);
  }

  
  matrix->setCursor(0, 0);
  matrix->show();
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
