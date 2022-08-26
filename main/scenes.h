// These imports are dependant on each other.
//  Models
#include "./models/rgb.h"
#include "./models/MatrixImage.h"
#include "./models/Colors.h"
// Utils
#include "./utils/MatrixUtil.h"

// Classes
#include "./utils/Image.h"

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
#include "./images/Equalizer.h"

void cleanup()
{
  matrix->clear();
  strip.clear();
}

void startScenes(Adafruit_NeoMatrix *matrix)
{
  cleanup();

  // animateEqualizer();
  animatePenis();

  scrollText(matrix, "FUCK YOUR BURN =)", green, 25);
  scrollText(matrix, "WAKING DREAMS 2022", purple, 25);
  scrollText(matrix, "METAMORPHOSES 2019", orange, 25);
  scrollText(matrix, "I-ROBOT 2018", white, 25);

  displayRainbowBoxes(10, 250);
  playFireworksAnim();

  animateHeart();
  cleanup();

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
  cleanup();

  animateEggplant();
  cleanup();

  delay(15 * 1000);
}