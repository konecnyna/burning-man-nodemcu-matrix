#include <Adafruit_NeoMatrix.h>
#include <Adafruit_GFX.h>
#include <Adafruit_NeoPixel.h>

#define PIN 15

Adafruit_NeoMatrix newMatrix = Adafruit_NeoMatrix(11, 44, PIN,
  NEO_MATRIX_TOP + NEO_MATRIX_LEFT +
  NEO_MATRIX_COLUMNS + NEO_MATRIX_ZIGZAG,
  NEO_GRB + NEO_KHZ800);

// Define colors
uint16_t newBlue = newMatrix.Color(0, 0, 255);
uint16_t newRed = newMatrix.Color(255, 0, 0);
uint16_t newGreen = newMatrix.Color(0, 128, 0);
uint16_t newWhite = newMatrix.Color(255, 255, 255);
uint16_t newBlack = newMatrix.Color(0, 0, 0);

// Define the pixel data
const uint16_t snake[44][11] = {
  { newBlue, newBlue, newBlue, newBlue, newBlue, newRed, newRed, newRed, newBlue, newBlue, newBlue },
  { newBlue, newBlue, newBlue, newBlue, newRed, newBlue, newBlue, newRed, newBlue, newBlue, newBlue },
  { newBlue, newBlue, newBlue, newBlue, newRed, newBlue, newBlue, newRed, newBlue, newBlue, newBlue },
  { newBlue, newBlue, newBlue, newBlue, newRed, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue },
  { newBlue, newBlue, newBlue, newBlue, newGreen, newGreen, newBlue, newBlue, newBlue, newBlue, newBlue },
  { newBlue, newBlue, newBlue, newGreen, newGreen, newGreen, newGreen, newBlue, newBlue, newBlue, newBlue },
  { newBlue, newBlue, newGreen, newBlack, newGreen, newGreen, newBlack, newGreen, newBlue, newBlue, newBlue },
  { newBlue, newBlue, newGreen, newWhite, newGreen, newGreen, newWhite, newGreen, newBlue, newBlue, newBlue },
  { newBlue, newBlue, newGreen, newGreen, newGreen, newGreen, newGreen, newGreen, newBlue, newBlue, newBlue },
  { newBlue, newBlue, newGreen, newGreen, newGreen, newGreen, newGreen, newGreen, newBlue, newBlue, newBlue },
  { newBlue, newBlue, newBlue, newGreen, newGreen, newGreen, newGreen, newBlue, newBlue, newBlue, newBlue },
  { newBlue, newBlue, newBlue, newBlue, newGreen, newGreen, newBlue, newBlue, newBlue, newBlue, newBlue },
  { newBlue, newBlue, newBlue, newBlue, newGreen, newGreen, newBlue, newBlue, newBlue, newBlue, newBlue },
  { newBlue, newBlue, newBlue, newBlue, newGreen, newGreen, newBlue, newBlue, newBlue, newBlue, newBlue },
  { newBlue, newBlue, newBlue, newBlue, newGreen, newGreen, newGreen, newBlue, newBlue, newBlue, newBlue },
  { newBlue, newBlue, newBlue, newBlue, newBlue, newGreen, newGreen, newGreen, newBlue, newBlue, newBlue },
  { newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newGreen, newGreen, newGreen, newBlue, newBlue },
  { newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newGreen, newGreen, newBlue, newBlue },
  { newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newGreen, newGreen, newBlue },
  { newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newGreen, newGreen, newGreen },
  { newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newGreen, newGreen, newGreen },
  { newBlue, newBlue, newBlue, newBlue, newGreen, newGreen, newGreen, newGreen, newGreen, newGreen, newBlue },
  { newBlue, newBlue, newBlue, newGreen, newGreen, newGreen, newGreen, newGreen, newGreen, newBlue, newBlue },
  { newBlue, newBlue, newGreen, newGreen, newGreen, newGreen, newGreen, newGreen, newBlue, newBlue, newBlue },
  { newBlue, newGreen, newGreen, newGreen, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue },
  { newGreen, newGreen, newGreen, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue },
  { newGreen, newGreen, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue },
  { newGreen, newGreen, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue },
  { newBlue, newGreen, newGreen, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue },
  { newBlue, newGreen, newGreen, newGreen, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue },
  { newBlue, newBlue, newGreen, newGreen, newGreen, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue },
  { newBlue, newBlue, newBlue, newGreen, newGreen, newGreen, newBlue, newBlue, newBlue, newBlue, newBlue },
  { newBlue, newBlue, newBlue, newBlue, newGreen, newGreen, newGreen, newBlue, newBlue, newBlue, newBlue },
  { newBlue, newBlue, newBlue, newBlue, newBlue, newGreen, newGreen, newBlue, newBlue, newBlue, newBlue },
  { newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newGreen, newGreen, newBlue, newBlue, newBlue },
  { newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newGreen, newGreen, newBlue, newBlue },
  { newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newGreen, newGreen, newBlue, newBlue },
  { newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newGreen, newGreen, newBlue },
  { newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newGreen, newGreen },
  { newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newGreen, newGreen },
  { newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newGreen },
  { newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newGreen },
  { newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newGreen, newGreen },
  { newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newGreen, newGreen, newGreen, newBlack },
};


void drawPattern(const uint16_t pattern[44][11]) {
  for (int y = 0; y < 44; y++) {
    for (int x = 0; x < 11; x++) {
      newMatrix.drawPixel(x, y, pattern[y][x]);
    }
  }
  newMatrix.show();
  delay(10000);
}

void newMainSetup() {
  newMatrix.begin();
  newMatrix.setBrightness(40);
}

void newMainloop() {
  newMatrix.fillScreen(0);
  drawPattern(snake);
}
