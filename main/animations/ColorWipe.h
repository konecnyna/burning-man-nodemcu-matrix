// Fill the dots one after the other with a color
void colorWipe(Adafruit_NeoMatrix * matrix, uint32_t c, uint8_t wait) {
  for (int row = 0; row < matrix->width(); row++) {
    for (int column = 0; column < matrix->height(); column++) {
      matrix->drawPixel(row, column, c);
      matrix->show();
      delay(wait);
    }
  }
}

// Fill the dots one after the other with a color
void colorWipeBottomUp(Adafruit_NeoMatrix * matrix, uint32_t c, uint8_t wait) {
  for (int row = matrix->width(); row >= 0; row--) {
    for (int column = 0; column < matrix->height(); column++) {
      matrix->drawPixel(row, column, c);
      matrix->show();
      delay(wait);
    }
  }
}