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

void pingpongImage(MatrixImage img, int loops) {
  while (loops-- > 0) {
    for (int i = 8; i >= 0; i--) {
      displayMatrix(img);
      shiftUpArray(img.image);      
      delay(16 * 5);
    }
    
    for (int i = 8; i >= 0; i--) {
      displayMatrix(img);
      shiftDownArray(img.image);
      delay(16 * 5);
    }
  }
}
void panImage(MatrixImage mtrx) {
  for (int i = 100; i >= 0; i--) {
    displayMatrix(mtrx);
    shiftLoopArray(mtrx.image);
    delay(16 * 5);
  }
}

void startBm2019() {
  pingpongImage(heart, 15);

  //panImage(heart);
  cleanup();

  scrollText("FUCK YOUR BURN", textMatrix->Color(255, 0, 255));

  displayMatrix(bm);
  cleanup();

  panImage(eggplant_animate);
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
