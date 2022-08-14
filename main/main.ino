
#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#include "shared/animations.h"

#define PIN D8
#define BRIGHTNESS 5
#define mw 44
#define mh 11

uint8_t matrixType = NEO_MATRIX_TOP + NEO_MATRIX_LEFT + NEO_MATRIX_ROWS + NEO_MATRIX_ZIGZAG;
Adafruit_NeoMatrix *matrix = new Adafruit_NeoMatrix(mw, mh, PIN, matrixType, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip = Adafruit_NeoPixel(mw * mh, PIN, NEO_GRB + NEO_KHZ800);


void setup() {
  Serial.begin(115200);
  matrix->begin();
  matrix->setTextWrap(false);
  matrix->setBrightness(BRIGHTNESS);
  matrix->clear();
}


void loop() {
  matrix->clear();
  start(matrix);
}
