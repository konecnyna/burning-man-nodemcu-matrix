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



void displayFrame(Adafruit_NeoMatrix &matrix, uint32_t frame[11][11], int yOffset) {
  for (int x = 0; x < 11; x++) {
    for (int y = 0; y < 11; y++) {
      int yPos = yOffset + y;
      if (yPos >= 0 && yPos < matrix.height()) {
        matrix.drawPixel(x, yPos, frame[x][y]);
      }
    }
  }
  matrix.show();
}

void playPacManAnimation(Adafruit_NeoMatrix &matrix, int delayMs) {
  for (int i = 0; i <= matrix.height(); i++) {
    // Move Pac-Man and dots across the screen from top to bottom
    matrix.fillScreen(matrix.Color(0, 0, 0));  // Clear the screen
    displayFrame(matrix, pacman_open, i);
    delay(delayMs);
    matrix.fillScreen(matrix.Color(0, 0, 0));  // Clear the screen
    displayFrame(matrix, pacman_closed, i);
    delay(delayMs);
  }
}