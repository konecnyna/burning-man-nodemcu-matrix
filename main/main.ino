
#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>

// These imports are dependant on each other.
//  Models
#include "./models/rgb.h"
#include "./models/MatrixImage.h"
// Images
#include "./images/EggplantImage.h"
// Classes
#include "Text.h"
#include "Image.h"
#include "Scenes.h"



#define PIN D8
#define BRIGHTNESS 5

int matrixWidth = 44;
int matrixHeight = 11;

uint8_t matrixType = NEO_MATRIX_TOP + NEO_MATRIX_LEFT + NEO_MATRIX_ROWS + NEO_MATRIX_ZIGZAG;
Adafruit_NeoMatrix *matrix = new Adafruit_NeoMatrix(matrixWidth, matrixHeight, PIN, matrixType, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(115200);
  matrix->begin();
  matrix->setTextWrap(false);
  matrix->setBrightness(BRIGHTNESS);
  matrix->clear();
}

void loop() {
  startScenes(matrix);
}