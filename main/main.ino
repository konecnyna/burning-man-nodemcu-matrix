// Adafruit_NeoMatrix example for single NeoPixel Shield.
// By Marc MERLIN <marc_soft@merlins.org>
// Contains code (c) Adafruit, license BSD

#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#include "util.h"

// Choose your prefered pixmap
//#include "heart24.h"
//#include "yellowsmiley24.h"
//#include "bluesmiley24.h"
#include "smileytongue24.h"

#define PIN D8

// Max is 255, 32 is a conservative value to not overload
// a USB power supply (500mA) for 12x12 pixels.
#define BRIGHTNESS 5

// Define matrix width and height.
#define mw 8
#define mh 16


Adafruit_NeoMatrix *matrix = new Adafruit_NeoMatrix(mw, mh, PIN,
    NEO_MATRIX_TOP     + NEO_MATRIX_LEFT +
    NEO_MATRIX_ROWS + NEO_MATRIX_ZIGZAG,
    NEO_GRB            + NEO_KHZ800);


#include "shit.h"


void setup() {
  Serial.begin(115200);
  matrix->begin();
  matrix->setTextWrap(false);
  matrix->setBrightness(BRIGHTNESS);
  matrix->clear();
}

void loop() {
  uint16_t bmpcolor[] = { LED_GREEN_HIGH, LED_BLUE_HIGH, LED_RED_HIGH };
  static uint8_t pixmap_count = ((mw + 7) / 8) * ((mh + 7) / 8);

  //  Serial.print("Screen pixmap capacity: ");
  //  Serial.println(pixmap_count);
  //  displayCheckers();
  //  display_boxes();
  //  display_circles();
  //  loopSmiles(bmpcolor)
  //  display_four_white();
  //  delay(3000);

  //display_rgbBitmap(1);
  display_bitmap(3, bmpcolor[0]);
 

  int test[3][3] = {
    { 1, 2, 3 },
    { 4, 5, 6 },
    { 7, 8, 9 },
  };

  print_array(*test, 3, 3);
  delay(30*1000);
  //  display_scrollText();
  //
  //  // pan a big pixmap
  //display_panOrBounceBitmap(8);
  // bounce around a small one
  //  display_panOrBounceBitmap(8);
}
