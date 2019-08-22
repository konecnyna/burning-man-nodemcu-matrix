
#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>

#define PIN D8
#define BRIGHTNESS 5
#define mw 8
#define mh 16

//
//Adafruit_NeoMatrix *matrix = new Adafruit_NeoMatrix(mw, mh, 1, 2, PIN,
//    NEO_MATRIX_TOP     + NEO_MATRIX_LEFT +
//    NEO_MATRIX_ROWS + NEO_MATRIX_ZIGZAG,
//    NEO_GRB            + NEO_KHZ800);



Adafruit_NeoMatrix *matrix = new Adafruit_NeoMatrix(8, 8, 2, 1, PIN,
    NEO_TILE_TOP     + NEO_TILE_LEFT +
    NEO_TILE_COLUMNS + NEO_TILE_PROGRESSIVE,
    NEO_GRB            + NEO_KHZ800);

Adafruit_NeoPixel strip = Adafruit_NeoPixel(128, PIN, NEO_GRB + NEO_KHZ800);


#include "images.h"
#include "util.h"
#include "animations.h"
#include "shit.h"
#include "text.h"


void setup() {
  Serial.begin(115200);
  matrix->begin();
  matrix->setTextWrap(false);
  matrix->setBrightness(BRIGHTNESS);
  matrix->clear();
  //matrix->setRemapFunction(myRemapFn);
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
  //    display_bitmap(3, bmpcolor[0]);
  //

    makeFireAnimation();
  //    colorWipe(matrix, matrix->Color(255, 0, 255), 25);
  //scrollText("BM 19", matrix->Color(255, 0, 0));
  //delay(5 * 1000);
  //  colorWipeBottomUp(matrix, matrix->Color(226, 136, 34), 25);
  //  delay(5 * 1000);
}

uint16_t myRemapFn(uint16_t x, uint16_t y) {

  return mw * y + x;
}
