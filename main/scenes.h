// These imports are dependant on each other.
//  Models
#include "./models/rgb.h"
#include "./models/MatrixImage.h"
#include "./models/Colors.h"
// Classes
#include "./utils/Image.h"
#include "./utils/MatrixUtil.h"
// #include "shit.h"

// Animations
#include "./animations/Text.h"
#include "./animations/ColorWipe.h"
#include "./animations/Rainbow.h"
#include "./animations/ImageAnimation.h"
#include "./animations/Shapes.h"

// Images
#include "./images/EggplantImage.h"
#include "./images/Heart.h"
#include "./images/Penis.h"
#include "./images/Fireworks.h"

void cleanup()
{
  matrix->clear();
  strip.clear();
}

void startScenes(Adafruit_NeoMatrix *matrix)
{
  cleanup();

  scrollText(matrix, "FUCK YOUR BURN =)", green, 25);
  scrollText(matrix, "WAKING DREAMS 2022", purple, 25);
  scrollText(matrix, "METAMORPHOSES 2019", orange, 25);
  scrollText(matrix, "I-ROBOT 2018", white, 25);

  displayRainbowBoxes(10, 250);
  playFireworksAnim();
  
  //colorWipeBottomUpRainbow(matrix, 5);

  // for (int i = 0; i < 3; i++)
  // {
  //   drawImage(penis);
  //   delay(1000);
  //   drawImage(eggplant);
  //   delay(1000);
  //   drawImage(heart);
  //   delay(1000);
  // }

  rainbow(15, 1);
  cleanup();

  theaterChase(purple, 50);
  cleanup();

  theaterChaseRainbow(50);
  cleanup();

  int colorWipeDelay = 50;
  colorWipeBottomUp(red, colorWipeDelay);
  colorWipeBottomDown(orange, colorWipeDelay);
  colorWipeBottomUp(yellow, colorWipeDelay);
  colorWipeBottomDown(green, colorWipeDelay);
  colorWipeBottomUp(blue, colorWipeDelay);
  colorWipeBottomDown(indego, colorWipeDelay);
  colorWipeBottomUp(violet, colorWipeDelay);
  
  delay(5 * 1000);
}