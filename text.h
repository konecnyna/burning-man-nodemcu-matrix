#include "colors.h"


void scrollText(Adafruit_NeoMatrix matrix, String textToDisplay) {
  int x = matrix.width();
  // Account for 6 pixel wide characters plus a space
  int pixelsInText = textToDisplay.length() * 7;
  matrix.setTextSize(1);  
  matrix.setTextColor(matrix.Color(255, 0, 255));
  matrix.setCursor(x, 0);
  matrix.print(textToDisplay);
  matrix.show();

  while(x > (matrix.width() - pixelsInText)) {
    matrix.fillScreen(matrix.Color(0, 0, 0));
    matrix.setCursor(--x, 0);
    matrix.print(textToDisplay);
    matrix.show();
    delay(150);
  }
}
