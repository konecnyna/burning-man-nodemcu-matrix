// Classes
#include "./models/Colors.h"
#include "Text.h"
#include "Image.h"
#include "util.h"
#include "shit.h"

// Images
#include "./images/EggplantImage.h"
#include "./images/Heart.h"

void cleanup()
{
  matrix->clear();
  strip.clear();
}

void startScenes(Adafruit_NeoMatrix *matrix)
{
  // cleanup();

  // drawImage(matrix, fire2);
  // delay(1000);
  // cleanup();

  // pingpongImage(eggplant_animate, 10, decay);
  // pingpongImage(eggplant_animate, 15, noDecay);
  // cleanup();

  // scrollText(matrix, "FUCK YOUR BURN :)", green());
  //scrollText(matrix, "WAKING DREAMS '22", purple());

  // panImageUp(matrix, heart, 10);
  //  drawImage(matrix, heart);
  //  delay(1000);
  //  cleanup();

  // displayCheckers();
  // cleanup();

  // circles();
  // cleanup();

  // squares();
  // cleanup();

  // rainbow(5, 7);
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

  //colorWipeBottomUp(matrix, matrix->Color(226, 136, 34), 25);
  //delay(5 * 1000);
  // matrix->fillScreen(purple());
  // matrix->show();
  // delay(3 * 1000);
  // cleanup();

  // matrix->fillScreen(red());
  // matrix->show();
  // delay(3 * 1000);
  // cleanup();

//  for (int i = 0; i < 3; i++) {
//    for (int j = 0; j < 254; j++) {
//      if (i == 0) {
//        matrix->fillScreen(matrix->Color(j, 0, 0));  
//        Serial.print("R: ");
//        
//      } else if (i == 1) {
//        matrix->fillScreen(matrix->Color(0, j, 0));  
//        Serial.print("G: ");
//      } else {
//        matrix->fillScreen(matrix->Color(0, 0, j));  
//        Serial.print("B: ");
//      }
//      
//      Serial.print(j);
//      Serial.println();
//      matrix->show();
//      delay(100);
//    }
//    
//  }

  matrix->fillScreen(matrix->Color(255, 0, 0));  
  delay(5 * 1000);
  cleanup();

  // matrix->fillScreen(green());
  // matrix->show();
  // delay(3 * 1000);
  // cleanup();
}
