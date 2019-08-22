
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


void print_array(const int *A, size_t width, size_t height) {
  Serial.println("-------------------------------");
  for (size_t i = 0; i < height; ++i) {
    for (size_t j = 0; j < width; ++j) {
      Serial.print(A[i * width + j]);
    }
    Serial.println("");
  }
  Serial.println("-------------------------------");
}



int getLEDpos(int row, int column) { // for a serpentine raster int pos;
  int width = mw;
  int test = width * row + column;
  Serial.println(test);
  return test;
}

void displayMatrix(MatrixImage matrixImage) {
  for (int row = 0; row < mh; row++) {
    for (int column = 0; column < mw; column++) {
      int colorIndex = matrixImage.image[row][column];

      //      if (!matrixImage.clearScreen && colorIndex == 0) {
      //        continue;
      //      }

      RGB color = matrixImage.colors[colorIndex];
      int pixel = getLEDpos(row, column);
      //strip.setPixelColor(pixel, strip.Color(color.r, color.g, color.b));
      matrix->drawPixel(row, column, matrix->Color(0, 0, 255));
      if (colorIndex == 1 || colorIndex == 2) {
        strip.setPixelColor(pixel, strip.Color(0, 128, 128));
//        matrix->drawPixel(row, column, matrix->Color(255, 0, 255));
      }

      
    }
  }
  strip.show();
//  matrix->show();
  delay(matrixImage.delayTime);
}
