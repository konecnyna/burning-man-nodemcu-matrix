#include <Adafruit_NeoMatrix.h>
#include <Adafruit_GFX.h>
#include <Adafruit_NeoPixel.h>

#define PIN 15  // GPIO14 (D5 on ESP8266)

#define MATRIX_WIDTH  11
#define MATRIX_HEIGHT 44

Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(MATRIX_WIDTH, MATRIX_HEIGHT, PIN,
  NEO_MATRIX_TOP     + NEO_MATRIX_LEFT +
  NEO_MATRIX_COLUMNS + NEO_MATRIX_ZIGZAG,
  NEO_GRB            + NEO_KHZ800);

// Colors
uint32_t yellow = matrix.Color(255, 255, 0);
uint32_t black = matrix.Color(0, 0, 0);
uint32_t white = matrix.Color(255, 255, 255);
uint32_t blue = matrix.Color(0, 0, 255);

// Pac-Man frames (11x11)
uint32_t pacman_open[11][11] = {
  {black, black, black, black, yellow, yellow, yellow, black, black, black, black},
  {black, black, black, yellow, yellow, yellow, yellow, yellow, black, black, black},
  {black, black, yellow, yellow, yellow, yellow, yellow, yellow, yellow, black, black},
  {black, yellow, yellow, yellow, yellow, blue, yellow, yellow, black, black, black},
  {yellow, yellow, yellow, yellow, yellow, yellow, yellow, black, black, black, black},
  {yellow, yellow, yellow, yellow, yellow, yellow, black, black, black, black, black},
  {yellow, yellow, yellow, yellow, yellow, yellow, yellow, black, black, black, black},
  {black, yellow, yellow, yellow, yellow, yellow, yellow, yellow, black, black, black},
  {black, black, yellow, yellow, yellow, yellow, yellow, yellow, yellow, black, black},
  {black, black, black, yellow, yellow, yellow, yellow, yellow, black, black, black},
  {black, black, black, black, yellow, yellow, yellow, black, black, black, black}
};

uint32_t pacman_closed[11][11] = {
  {black, black, black, black, yellow, yellow, yellow, black, black, black, black},
  {black, black, black, yellow, yellow, yellow, yellow, yellow, black, black, black},
  {black, black, yellow, yellow, yellow, yellow, yellow, yellow, yellow, black, black},
  {black, yellow, yellow, yellow, yellow, blue, yellow, yellow, yellow, yellow, black},
  {yellow, yellow, yellow, yellow, yellow, yellow, yellow, yellow, yellow, yellow, yellow},
  {yellow, yellow, yellow, yellow, yellow, yellow, yellow, black, black, black, black},
  {yellow, yellow, yellow, yellow, yellow, yellow, yellow, yellow, yellow, yellow, yellow},
  {black, yellow, yellow, yellow, yellow, yellow, yellow, yellow, yellow, yellow, black},
  {black, black, yellow, yellow, yellow, yellow, yellow, yellow, yellow, black, black},
  {black, black, black, yellow, yellow, yellow, yellow, yellow, black, black, black},
  {black, black, black, black, yellow, yellow, yellow, black, black, black, black}
};

// Dots (11x11)
uint32_t dot[11][11] = {
  {black, black, black, black, black, black, black, black, black, black, black},
  {black, black, black, black, black, black, black, black, black, black, black},
  {black, black, black, black, black, black, black, black, black, black, black},
  {black, black, black, black, black, black, black, black, black, black, black},
  {black, black, black, black, black, black, black, black, black, black, black},
  {black, black, black, black, black, white, black, black, black, black, black},
  {black, black, black, black, black, black, black, black, black, black, black},
  {black, black, black, black, black, black, black, black, black, black, black},
  {black, black, black, black, black, black, black, black, black, black, black},
  {black, black, black, black, black, black, black, black, black, black, black},
  {black, black, black, black, black, black, black, black, black, black, black}
};

void setup() {
  matrix.begin();
  matrix.setBrightness(40);  // Adjust brightness if needed
}

void displayFrame(uint32_t frame[11][11], uint32_t dotFrame[11][11], int yOffset) {
  for (int x = 0; x < 11; x++) {
    for (int y = 0; y < 11; y++) {
      int yPos = yOffset + y;
      if (yPos >= 0 && yPos < MATRIX_HEIGHT) {
        matrix.drawPixel(x, yPos, frame[x][y]);        
      }
    }
  }
  matrix.show();
}

void playPacManAnimation(int delayMs) {
  

  for (int i = 0; i <= MATRIX_HEIGHT; i++) {
    // Move Pac-Man and dots across the screen from top to bottom
    matrix.fillScreen(black);  // Clear the screen
    displayFrame(pacman_open, dot, i);
    delay(delayMs);
    matrix.fillScreen(black);  // Clear the screen
    displayFrame(pacman_closed, dot, i);
    delay(delayMs);
  }
}

void loop() {
  playPacManAnimation(200);  // Play Pac-Man animation with 200ms delay between frames
  delay(1000);  // Wait 1 second before repeating the animation
}