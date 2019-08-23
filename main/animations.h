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
  for (int repeat = 0; repeat < 20; repeat++) {
    for (int i = 0; i < 3; i++) {
      displayMatrix(fireImages[i]);
    }
    for (int i = 2; i >= 0; i--) {
      displayMatrix(fireImages[i]);
    }
  }
}

void displayEggplant() {
  for (int i = 60; i >= 0; i--) {
    displayMatrix(eggplant_animate);
    shiftUpArray(eggplant_animate.image);
    delay(16 * 3);
  }
}

void startBm2019() {
  static uint8_t pixmap_count = ((mw + 7) / 8) * ((mh + 7) / 8);

    scrollText("FUCK YOUR BURN", textMatrix->Color(255, 0, 255));
    
    displayMatrix(bm);
    cleanup();

    displayEggplant();
    cleanup();
  
    displayCheckers();
    cleanup();
  
    circles();
    cleanup();
  
    squares();
    cleanup();
  
    rainbow(10);
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
