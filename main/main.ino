
#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>

#define PIN D8
#define BRIGHTNESS 5
#define mw 8
#define mh 16

//Adafruit_NeoMatrix *matrix = new Adafruit_NeoMatrix(8, 8, 1, 2, PIN,
//    NEO_TILE_TOP     + NEO_TILE_LEFT +
//    NEO_TILE_COLUMNS + NEO_TILE_PROGRESSIVE,
//    NEO_GRB            + NEO_KHZ800);


Adafruit_NeoMatrix *matrix = new Adafruit_NeoMatrix(mw, mh, PIN,
    NEO_MATRIX_TOP     + NEO_MATRIX_LEFT +
    NEO_MATRIX_ROWS + NEO_MATRIX_ZIGZAG,
    NEO_GRB            + NEO_KHZ800);


Adafruit_NeoPixel strip = Adafruit_NeoPixel(128, PIN, NEO_GRB + NEO_KHZ800);

#include "animations.h"
void setup() {
  Serial.begin(115200);
  matrix->begin();
  matrix->setTextWrap(false);
  matrix->setBrightness(BRIGHTNESS);
  matrix->clear();
  
  strip.begin(); // Initialize NeoPixel strip object (REQUIRED)
  strip.show();  // Initialize all pixels to 'off'
  strip.setBrightness(BRIGHTNESS);

  
}


void loop() {
  strip.clear();
  startBm2019();
}
