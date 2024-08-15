#ifndef TEXT_UTILS_H
#define TEXT_UTILS_H

#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>

int getTextWidth(Adafruit_GFX &matrix, const char* text) {
  int16_t x1, y1;
  uint16_t w, h;
  matrix.getTextBounds(text, 0, 0, &x1, &y1, &w, &h);
  return w;
}

void scrollCenteredText(Adafruit_NeoMatrix &matrix, const char* text, int &x, int &pass, const uint16_t* colors, int textWidth) {
  matrix.fillScreen(0);
  
  int y = 2;
  
  matrix.setCursor(x, y);
  matrix.print(text);

  if (--x < -textWidth) {
    x = matrix.width();
    if (++pass >= 3) pass = 0;
    matrix.setTextColor(colors[pass]);
  }

  matrix.show();
  delay(100);
}



void displayText(Adafruit_NeoMatrix &matrix, const char* text, const uint16_t* colors, unsigned long displayDuration) {
  int16_t x1, y1;
  uint16_t w, h;
  matrix.getTextBounds(text, 0, 0, &x1, &y1, &w, &h);
  
  int x = (matrix.width() - w) / 2;
  int y = (matrix.height() - h) / 2;

  matrix.fillScreen(0);
  matrix.setCursor(x, y);
  matrix.setTextColor(colors[1]);
  matrix.print(text);
  matrix.show();

  delay(displayDuration);
}

void fadeText(Adafruit_NeoMatrix &matrix, const char* text, int &x, int &pass, const uint16_t* colors, int textWidth) {
  for (int brightness = 0; brightness < 100; brightness++) {
    matrix.setBrightness(brightness);
    displayText(matrix, text, colors, 50);
  }

  delay(1000);

  for (int dim = 100; dim >= 0; dim--) {
    matrix.setBrightness(dim);
    displayText(matrix, text, colors, 50);
  }

  delay(1000);
}

#endif // TEXT_UTILS_H
