#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#include "textutils.h"

#define PIN 15 // GPIO15 for D8

Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(44, 11, PIN,
  NEO_MATRIX_TOP + NEO_MATRIX_LEFT +
  NEO_MATRIX_ROWS + NEO_MATRIX_ZIGZAG,
  NEO_GRB + NEO_KHZ800);

const uint16_t colors[] = {
  matrix.Color(255, 0, 0), matrix.Color(0, 255, 0), matrix.Color(0, 0, 255) };

const char* text = "hello";
int textWidth;
int x;
int pass = 0;

void setup() {
  matrix.begin();
  matrix.setTextWrap(false);
  matrix.setBrightness(40);
  matrix.setTextColor(colors[0]);

  textWidth = getTextWidth(matrix, text);
  x = matrix.width();
}

void loop() {
  //scrollCenteredText(matrix, text, x, pass, colors);
  fadeText(matrix, text, x, pass, colors, textWidth);
}
