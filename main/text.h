#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>

int CENTER_TEXT_CURSOR_OFFSET = 2;

void initScrollTextTopToBottom(Adafruit_NeoMatrix *matrix, int color) {
  matrix->clear();
  matrix->setTextWrap(false);
  matrix->setTextSize(1);
  matrix->setTextColor(color);
  matrix->setRotation(0);
}

void displayText(Adafruit_NeoMatrix *matrix, int index, String textToDisplay, int color) {
  matrix->clear();   
  matrix->setCursor(index, CENTER_TEXT_CURSOR_OFFSET);
  matrix->print(textToDisplay);
  matrix->setTextColor(color);
  matrix->show();
}


void scrollText(Adafruit_NeoMatrix *matrix, String textToDisplay, int color) {
  int screenWidth = matrix->width();
  int scrollLength = textToDisplay.length() + (screenWidth * 1.5);
  
  initScrollTextTopToBottom(matrix, color);
  for (int8_t index = scrollLength; index > scrollLength * -1 ; index--) {
    displayText(matrix, index, textToDisplay, color); 
    delay(50);
  }  

  matrix->clear();
}


// void clearTop() {
//   for (int row = 0; row < 8; row++) {
//     for (int column = 0; column < 8; column++) {
//       matrix->drawPixel(row, column, strip.Color(0, 0, 0));
//     }
//   }
// }

// void scrollTextNoClear(String textToDisplay, MatrixImage img, int color) {
//   int x = matrix->width();

//   // Account for 6 pixel wide characters plus a space
//   int pixelsInText = textToDisplay.length() * mh;
//   matrix->setTextSize(1);
//   matrix->setRotation(3);
//   matrix->setTextColor(color);
//   matrix->setCursor(x, 0);
//   matrix->print(textToDisplay);
//   matrix->show();

//   displayMatrix(img);
//   while (x > (matrix->width() - pixelsInText)) {
//     matrix->setCursor(--x, 0);
//     matrix->print(textToDisplay);
//     matrix->show();
//     delay(150);
//   }
// }