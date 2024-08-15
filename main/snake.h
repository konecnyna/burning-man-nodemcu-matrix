#include <Adafruit_NeoMatrix.h>
#include <Adafruit_GFX.h>
#include <Adafruit_NeoPixel.h>

#define PIN 15

Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(11, 44, PIN,
  NEO_MATRIX_TOP + NEO_MATRIX_LEFT +
  NEO_MATRIX_COLUMNS + NEO_MATRIX_ZIGZAG,
  NEO_GRB + NEO_KHZ800);

// Define colors
uint16_t pink = matrix.Color(0, 0, 0);
uint16_t red = matrix.Color(255, 0, 0);
uint16_t green = matrix.Color(0, 128, 0);
uint16_t white = matrix.Color(255, 255, 255);
uint16_t black = matrix.Color(0, 0, 0);

// Define the pixel data
const uint16_t pixelBitmap[44][11] = {
  { pink, pink, pink, pink, pink, red, red, red, pink, pink, pink },
  { pink, pink, pink, pink, red, pink, pink, red, pink, pink, pink },
  { pink, pink, pink, pink, red, pink, pink, red, pink, pink, pink },
  { pink, pink, pink, pink, red, pink, pink, pink, pink, pink, pink },
  { pink, pink, pink, pink, green, green, pink, pink, pink, pink, pink },
  { pink, pink, pink, green, green, green, green, pink, pink, pink, pink },
  { pink, pink, green, black, green, green, black, green, pink, pink, pink },
  { pink, pink, green, white, green, green, white, green, pink, pink, pink },
  { pink, pink, green, green, green, green, green, green, pink, pink, pink },
  { pink, pink, green, green, green, green, green, green, pink, pink, pink },
  { pink, pink, pink, green, green, green, green, pink, pink, pink, pink },
  { pink, pink, pink, pink, green, green, pink, pink, pink, pink, pink },
  { pink, pink, pink, pink, green, green, pink, pink, pink, pink, pink },
  { pink, pink, pink, pink, green, green, pink, pink, pink, pink, pink },
  { pink, pink, pink, pink, green, green, green, pink, pink, pink, pink },
  { pink, pink, pink, pink, pink, green, green, green, pink, pink, pink },
  { pink, pink, pink, pink, pink, pink, green, green, green, pink, pink },
  { pink, pink, pink, pink, pink, pink, pink, green, green, pink, pink },
  { pink, pink, pink, pink, pink, pink, pink, pink, green, green, pink },
  { pink, pink, pink, pink, pink, pink, pink, pink, green, green, green },
  { pink, pink, pink, pink, pink, pink, pink, pink, green, green, green },
  { pink, pink, pink, pink, green, green, green, green, green, green, pink },
  { pink, pink, pink, green, green, green, green, green, green, pink, pink },
  { pink, pink, green, green, green, green, green, green, pink, pink, pink },
  { pink, green, green, green, pink, pink, pink, pink, pink, pink, pink },
  { green, green, green, pink, pink, pink, pink, pink, pink, pink, pink },
  { green, green, pink, pink, pink, pink, pink, pink, pink, pink, pink },
  { green, green, pink, pink, pink, pink, pink, pink, pink, pink, pink },
  { pink, green, green, pink, pink, pink, pink, pink, pink, pink, pink },
  { pink, green, green, green, pink, pink, pink, pink, pink, pink, pink },
  { pink, pink, green, green, green, pink, pink, pink, pink, pink, pink },
  { pink, pink, pink, green, green, green, pink, pink, pink, pink, pink },
  { pink, pink, pink, pink, green, green, green, pink, pink, pink, pink },
  { pink, pink, pink, pink, pink, green, green, pink, pink, pink, pink },
  { pink, pink, pink, pink, pink, pink, green, green, pink, pink, pink },
  { pink, pink, pink, pink, pink, pink, pink, green, green, pink, pink },
  { pink, pink, pink, pink, pink, pink, pink, green, green, pink, pink },
  { pink, pink, pink, pink, pink, pink, pink, pink, green, green, pink },
  { pink, pink, pink, pink, pink, pink, pink, pink, pink, green, green },
  { pink, pink, pink, pink, pink, pink, pink, pink, pink, green, green },
  { pink, pink, pink, pink, pink, pink, pink, pink, pink, pink, green },
  { pink, pink, pink, pink, pink, pink, pink, pink, pink, pink, green },
  { pink, pink, pink, pink, pink, pink, pink, pink, pink, green, green },
  { pink, pink, pink, pink, pink, pink, pink, green, green, green, black },
};

void setup() {
  matrix.begin();
  matrix.setBrightness(40);
}

void loop() {
  matrix.fillScreen(0);
  for (int y = 0; y < 44; y++) {
    for (int x = 0; x < 11; x++) {
      matrix.drawPixel(x, y, pixelBitmap[y][x]);
    }
  }
  matrix.show();
  delay(10000);
}
