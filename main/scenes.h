// Classes
#include "./models/Colors.h"
#include "Text.h"
#include "Image.h"
#include "util.h"
#include "shit.h"

// Images
#include "./images/EggplantImage.h"
#include "./images/Heart.h"
#include "./images/Test.h"

void cleanup()
{
  matrix->clear();
  strip.clear();
}

void startScenes(Adafruit_NeoMatrix *matrix)
{
  cleanup();

  scrollText(matrix, "FUCK YOUR BURN =)", green());
  scrollText(matrix, "WAKING DREAMS 2022", purple());
  scrollText(matrix, "METAMORPHOSES 2019", orange());
  scrollText(matrix, "I-ROBOT 2018", white());

  // delay(5 * 1000);
  // panImageUp(matrix, heart, 10);
  drawImage(matrix, heart);
  delay(5 * 1000);
  cleanup();

  drawImage(matrix, eggplant);
  delay(5 * 1000);
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
  theaterChaseRainbow(50);
  cleanup();

  loopSmiles();
  cleanup();

  whiteSquares();
  cleanup();

  // makeFireAnimation();
  // cleanup();

  colorWipeBottomUp(matrix, matrix->Color(226, 136, 34), 25);
  delay(5 * 1000);
}
