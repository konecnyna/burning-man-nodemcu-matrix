#include "shit.h"
#include "color.h"
#include "images.h"
#include "util.h"
#include "text.h"


void cleanup() {
  strip.clear();
  matrix->clear();
}

void makeFireAnimation() {
  for (int repeat = 0; repeat < 20; repeat++) {
    for (int i = 0; i < 3; i++) {
      displayMatrix(fireImages[i]);
    }
    for (int i = 2; i >= 0; i--) {
      displayMatrix(fireImages[i]);
    }
  }
}

void startBm2019() {
  static uint8_t pixmap_count = ((mw + 7) / 8) * ((mh + 7) / 8);


  //  displayMatrix(bm);
  //  cleanup();

  for (int i = 0; i < 3; i++) {
    displayMatrix(eggplant);    
    shiftUpArray(eggplant.image);
    print_array(*eggplant.image, 16,8);
  }
  //  displayMatrix(eggplant);
  //  cleanup();
  //
  //  displayCheckers();
  //  cleanup();
  //
  //  circles();
  //  cleanup();
  //
  //  squares();
  //  cleanup();
  //
  //  rainbow(10);
  //  cleanup();
  //
  //  theaterChase(strip.Color(255, 0, 255), 250);
  //  cleanup();
  //
  //
  //  loopSmiles();
  //  cleanup();
  //
  //  whiteSquares();
  //  cleanup();
  //
  //  makeFireAnimation();
  //  cleanup();
  //

  //  scrollText("BM 19", matrix->Color(255, 0, 0));
  //delay(5 * 1000);
  //  colorWipeBottomUp(matrix, matrix->Color(226, 136, 34), 25);
  //  delay(5 * 1000);
}
