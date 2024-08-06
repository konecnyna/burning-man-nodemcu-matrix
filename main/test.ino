#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#include <FastLED.h>

#define PIN 6

Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(11, 44, PIN,
  NEO_MATRIX_TOP + NEO_MATRIX_LEFT +
  NEO_MATRIX_ROWS + NEO_MATRIX_ZIGZAG,
  NEO_GRB + NEO_KHZ800);

void setup() {
  matrix.begin();
  matrix.setBrightness(40);
}

void loop() {
  static int t = 0;
  for(int x = 0; x < matrix.width(); x++) {
    for(int y = 0; y < matrix.height(); y++) {
      uint16_t hue = sin8(t + x * 10 + y * 10) + cos8(t + y * 10) + sin8(t + x * 10);
      matrix.drawPixel(x, y, matrix.ColorHSV(hue * 256, 255, 255));
    }
  }
  matrix.show();
  delay(30);
  t++;
}
