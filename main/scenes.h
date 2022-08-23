// These imports are dependant on each other.
//  Models
#include "./models/rgb.h"
#include "./models/MatrixImage.h"
#include "./models/Colors.h"
// Classes
#include "./utils/Image.h"
#include "./utils/MatrixUtil.h"
#include "shit.h"
// Animations
#include "./animations/Text.h"
#include "./animations/ColorWipe.h"
#include "./animations/Rainbow.h"
#include "./animations/ImageAnimation.h"
// Images
#include "./images/EggplantImage.h"
#include "./images/Heart.h"
#include "./images/Test.h"
#include "./images/Penis.h"

void cleanup()
{
  matrix->clear();
  strip.clear();
}

void startScenes(Adafruit_NeoMatrix *matrix)
{
  // cleanup();

  // scrollText(matrix, "FUCK YOUR BURN =)", green(), 25);
  // scrollText(matrix, "WAKING DREAMS 2022", purple(), 25);
  // scrollText(matrix, "METAMORPHOSES 2019", orange(), 25);
  // scrollText(matrix, "I-ROBOT 2018", white(), 25);

  // // // delay(5 * 1000);
  // // // panImageUp(matrix, heart, 10);
  //drawImage(matrix, penis);
  
  pingPongHeart();
  //animatePenis();
  //delay(5 * 1000);
  // cleanup();

  // drawImage(matrix, eggplant);
  // delay(5 * 1000);
  // cleanup();

  // circles();
  // cleanup();

  // squares();
  // cleanup();

  // rainbow(5, 2);
  // cleanup();

  // theaterChase(strip.Color(255, 0, 255), 250);
  // theaterChaseRainbow(50);
  // cleanup();

  // loopSmiles();
  // cleanup();

  // whiteSquares();
  // cleanup();

  // makeFireAnimation();
  // cleanup();

  // colorWipeBottomUp(matrix, matrix->Color(226, 136, 34), 25);
  // delay(5 * 1000);
}
