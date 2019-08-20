#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#ifndef PSTR
 #define PSTR // Make Arduino Due happy
#endif


#include "util.h"
#include "smileytongue24.h"
#include "smiley.h"
#include "text.h"
#include "colors.h"
#include "images.h";
#include "animations.h";


#define PIN D8

// Max is 255, 32 is a conservative value to not overload
// a USB power supply (500mA) for 12x12 pixels.
#define BRIGHTNESS 32

// Define matrix width and height.
#define mw 8
#define mh 8
// https://github.com/adafruit/Adafruit_NeoMatrix/blob/master/examples/matrixtest/matrixtest.pde
Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(mw, mh, PIN,
  NEO_MATRIX_TOP     + NEO_MATRIX_RIGHT +
  NEO_MATRIX_COLUMNS + NEO_MATRIX_PROGRESSIVE,
  NEO_GRB            + NEO_KHZ800);

void setup() {
  Serial.begin(115200);
  matrix.begin();
  matrix.setTextWrap(false);
  matrix.setBrightness(BRIGHTNESS);
  matrix.clear();
}

void loop() {
  makeBurningManAnimation(&matrix);
  makeFireAnimation(&matrix);
}
