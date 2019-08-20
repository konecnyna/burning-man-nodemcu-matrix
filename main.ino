#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
//
//struct RGB {
//  byte r;
//  byte g;
//  byte b;
//};

// Choose your prefered pixmap
//#include "heart24.h"
//#include "yellowsmiley24.h"
//#include "bluesmiley24.h"
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

Adafruit_NeoMatrix *matrix = new Adafruit_NeoMatrix(mw, mh, PIN,
    NEO_MATRIX_TOP     + NEO_MATRIX_LEFT +
    NEO_MATRIX_ROWS    + NEO_MATRIX_ZIGZAG,
    NEO_GRB            + NEO_KHZ800);

void setup() {
  Serial.begin(115200);
  matrix->begin();
  matrix->setTextWrap(false);
  matrix->setBrightness(BRIGHTNESS);
  matrix->clear();
}

void loop() {
  makeBurningManAnimation(matrix);
  //  scrollText(*matrix, "BOOBSSSS");
}
