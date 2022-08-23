#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>

int CENTER_TEXT_CURSOR_OFFSET = 2;

void initScrollTextTopToBottom(Adafruit_NeoMatrix *matrix, int color)
{
  matrix->clear();
  matrix->setTextWrap(false);
  matrix->setTextSize(1);
  matrix->setTextColor(color);
  matrix->setRotation(0);
}

void displayText(Adafruit_NeoMatrix *matrix, int index, String textToDisplay, int color)
{
  matrix->clear();
  matrix->setCursor(index, CENTER_TEXT_CURSOR_OFFSET);
  matrix->print(textToDisplay);
  matrix->setTextColor(color);
  matrix->show();
}

void scrollText(Adafruit_NeoMatrix *matrix, String textToDisplay, int color, int speed)
{
  int screenWidth = matrix->width();
  int charWidth = 5;
  int scrollLength = textToDisplay.length() * charWidth + 15;

  initScrollTextTopToBottom(matrix, color);
  for (int8_t index = scrollLength; index > scrollLength * -1; index--)
  {
    displayText(matrix, index, textToDisplay, color);
    delay(speed);
  }

  matrix->clear();
}