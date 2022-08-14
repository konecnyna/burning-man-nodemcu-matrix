
#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>

#define PIN D8
#define BRIGHTNESS 5
#define mw 44
#define mh 11


Adafruit_NeoMatrix *matrix = new Adafruit_NeoMatrix(mw, mh, PIN,
    NEO_MATRIX_TOP     + NEO_MATRIX_LEFT +
    NEO_MATRIX_ROWS + NEO_MATRIX_ZIGZAG,
    NEO_GRB            + NEO_KHZ800);


Adafruit_NeoMatrix *textMatrix = new Adafruit_NeoMatrix(mw, mh, PIN,
    NEO_MATRIX_TOP     + NEO_MATRIX_LEFT +
    NEO_MATRIX_COLUMNS + NEO_MATRIX_ZIGZAG,
    NEO_GRB            + NEO_KHZ800);


Adafruit_NeoPixel strip = Adafruit_NeoPixel(128, PIN, NEO_GRB + NEO_KHZ800);

#include "animations.h"
void setup() {
  Serial.begin(115200);
//  matrix->begin();
//  matrix->setTextWrap(false);
//  matrix->setBrightness(BRIGHTNESS);
//  matrix->clear();

  textMatrix->begin();
  textMatrix->setTextWrap(false);
  textMatrix->setBrightness(BRIGHTNESS);
  textMatrix->clear();
  
  strip.begin(); // Initialize NeoPixel strip object (REQUIRED)
  strip.show();  // Initialize all pixels to 'off'
  strip.setBrightness(BRIGHTNESS);

  //Flips em!
//  initImages();

  
}


void loop() {
  strip.clear();
  startBm2019();
}
