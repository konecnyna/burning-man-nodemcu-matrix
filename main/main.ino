
#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>

#define PIN D8
#define BRIGHTNESS 4

int matrixWidth = 44;
int matrixHeight = 11;

uint8_t matrixType = NEO_MATRIX_TOP + NEO_MATRIX_LEFT + NEO_MATRIX_ROWS + NEO_MATRIX_ZIGZAG;
Adafruit_NeoMatrix *matrix = new Adafruit_NeoMatrix(matrixWidth, matrixHeight, PIN, matrixType, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip = Adafruit_NeoPixel(matrixWidth * matrixHeight, PIN);

// Classes
#include "Scenes.h"

void setupMatrix() {
  matrix->begin();
  matrix->setTextWrap(false);
  matrix->setBrightness(BRIGHTNESS);
  matrix->setRotation(0);
  matrix->clear();
}

void setupStrip() {
  strip.begin();
  strip.show();
  strip.setBrightness(BRIGHTNESS);
}

void setup() {
  Serial.begin(115200);  
  setupMatrix();
  setupStrip();

  mirrorMatrix(semenPixels, 25, 11);
  mirrorMatrix(manPixels, 44, 11);
}

void loop() {
  Serial.println("Starting animations...");
  startScenes(matrix);
  Serial.println("Finished animations successfully!");
}