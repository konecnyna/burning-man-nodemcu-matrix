#include "Text.h"
#include "Image.h"

void startScenes(Adafruit_NeoMatrix *matrix) {
  drawImage(matrix);
  // pingpongImage(eggplant_animate, 10, decay);
  // pingpongImage(eggplant_animate, 15, noDecay);
  // cleanup();
  
  scrollText(matrix, "FUCK YOUR BURN", matrix->Color(255, 0, 255));
//  display_resolution();


  // displayMatrix(bm);
  // cleanup();

  // panImage(heart);
  // cleanup();

  // displayCheckers();
  // cleanup();

  // circles();
  // cleanup();

  // squares();
  // cleanup();

  // rainbow(5, 7);
  // cleanup();

  // theaterChase(strip.Color(255, 0, 255), 250);
  // cleanup();

  // loopSmiles();
  // cleanup();

  // whiteSquares();
  // cleanup();

  // makeFireAnimation();
  // cleanup();

  // scrollText("BURNING MAN '19", textMatrix->Color(0, 0, 255));
  //delay(5 * 1000);
  //  colorWipeBottomUp(matrix, matrix->Color(226, 136, 34), 25);
  //  delay(5 * 1000);
}