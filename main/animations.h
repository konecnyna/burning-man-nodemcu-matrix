#include "shit.h"
#include "color.h"
#include "util.h"
#include "images.h"
#include "text.h"


void cleanup() {
  strip.clear();
  matrix->clear();
}

void makeFireAnimation() {
  for (int repeat = 0; repeat < 60; repeat++) {
    for (int i = 0; i < 3; i++) {
      displayMatrix(fireImages[i]);
    }
    for (int i = 2; i >= 0; i--) {
      displayMatrix(fireImages[i]);
    }
  }
}

void panImage(MatrixImage mtrx) {
  for (int i = 100; i >= 0; i--) {
    displayMatrix(mtrx);
    shiftUpArray(mtrx.image);
    delay(16 * 5);
  }
}

void startBm2019() {
  rainbow(5, 5);
  scrollText("FUCK YOUR BURN", textMatrix->Color(255, 0, 255));

  panImage(eggplant_animate);
  cleanup();

  displayMatrix(bm);
  cleanup();

  panImage(heart);
  cleanup();

  displayCheckers();
  cleanup();

  circles();
  cleanup();


  squares();
  cleanup();

  rainbow(5, 7);
  cleanup();

  theaterChase(strip.Color(255, 0, 255), 250);
  cleanup();


  loopSmiles();
  cleanup();

  whiteSquares();
  cleanup();

  makeFireAnimation();
  cleanup();


  scrollText("BURNING MAN '19", textMatrix->Color(0, 0, 255));
  //delay(5 * 1000);
  //  colorWipeBottomUp(matrix, matrix->Color(226, 136, 34), 25);
  //  delay(5 * 1000);
}
