typedef struct  {
  RGB colors[10];
  boolean clearScreen;
  int image[16][8];
  int delayTime;
} MatrixImage;

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



RGB colors[] = {
  {0, 0, 0},
  {255, 0, 255},
  {0, 255, 0}
};


// for a serpentine raster int pos;
int getLEDpos(int row, int col) {
  int MATRIX_WIDTH = mw;

  int pos;
  if (row & 0x01) {
    // Odd rows run backwards
    int reverseX = (MATRIX_WIDTH - 1) - col;
    pos = (row * MATRIX_WIDTH) + reverseX;
  } else {
    // Even rows run forwards
    pos = (row * MATRIX_WIDTH) + col;
  }
  return pos;
}



void displayMatrix(MatrixImage matrixImage) {
  for (int row = 0; row < mh; row++) {
    for (int column = 0; column < mw; column++) {
      int colorIndex = matrixImage.image[row][column];

      if (matrixImage.clearScreen && colorIndex == 0) {
        Serial.println("Skipping pixel draw!");
        continue;
      }

      RGB color = matrixImage.colors[colorIndex];
      int pixel = getLEDpos(row, column);
      strip.setPixelColor(pixel, strip.Color(color.r, color.g, color.b));
    }

  }
  strip.show();
  delay(matrixImage.delayTime);
}

void drawMatrix(MatrixImage matrixImage) {
  for (int row = 0; row < mh; row++) {
    for (int column = 0; column < mw; column++) {
      int colorIndex = matrixImage.image[row][column];
      RGB color = matrixImage.colors[colorIndex];
      int pixel = getLEDpos(row, column);
      strip.setPixelColor(pixel, strip.Color(color.r, color.g, color.b));
    }
  }  
}


// Rainbow cycle along whole strip. Pass delay time (in ms) between frames.
void rainbow(int wait, int loops) {  
  while(loops-- > 0){
  for (long firstPixelHue = 0; firstPixelHue < 3 * 65536; firstPixelHue += 256) {
    for (int i = 0; i < strip.numPixels(); i++) { // For each pixel in strip...
      int pixelHue = firstPixelHue + (i * 65536L / strip.numPixels());
      strip.setPixelColor(i, strip.gamma32(strip.ColorHSV(pixelHue)));
    }
    strip.show(); // Update strip with new contents
    delay(wait);  // Pause for a moment
  }  
  }
  
}

void theaterChase(uint32_t color, int wait) {
  for (int a = 0; a < 10; a++) { // Repeat 10 times...
    for (int b = 0; b < 3; b++) { //  'b' counts from 0 to 2...
      strip.clear();         //   Set all pixels in RAM to 0 (off)
      // 'c' counts up from 'b' to end of strip in steps of 3...
      for (int c = b; c < strip.numPixels(); c += 3) {
        strip.setPixelColor(c, color); // Set pixel 'c' to value 'color'
      }
      strip.show(); // Update strip with new contents
      delay(wait);  // Pause for a moment
    }
  }
}

void theaterChaseRainbow(int wait) {
  int firstPixelHue = 0;     // First pixel starts at red (hue 0)
  for (int a = 0; a < 30; a++) { // Repeat 30 times...
    for (int b = 0; b < 3; b++) { //  'b' counts from 0 to 2...
      strip.clear();         //   Set all pixels in RAM to 0 (off)
      for (int c = b; c < strip.numPixels(); c += 3) {
        int      hue   = firstPixelHue + c * 65536L / strip.numPixels();
        uint32_t color = strip.gamma32(strip.ColorHSV(hue)); // hue -> RGB
        strip.setPixelColor(c, color); // Set pixel 'c' to value 'color'
      }
      strip.show();                // Update strip with new contents
      delay(wait);                 // Pause for a moment
      firstPixelHue += 65536 / 90; // One cycle of color wheel over 90 frames
    }
  }
}



void shiftUpArray(int matrix[16][8]) {
  int rowCopy;
  for (int row = 0; row < 16; row++) {
    for (int col = 0; col < 8; col++) {
      if (row == 16 - 1) {
        matrix[row][col] = 0;
      } else {
        matrix[row][col] = matrix[row + 1][col];
      }
    }
  }
}

void shiftDownArray(int matrix[16][8]) {
  int rowCopy;
  for (int row = 16-1; row >= 0; row--) {
    for (int col = 0; col < 8; col++) {
      if (row == 0) {
        matrix[row][col] = 0;
      } else {
        matrix[row][col] = matrix[row - 1][col];
      }
    }
  }
}

void shiftLoopArray(int matrix[16][8]) {
  int rowCopy;
  for (int row = 0; row < 16; row++) {
    for (int col = 0; col < 8; col++) {
      if (row == 0) {
        continue;
      }
      rowCopy = matrix[row - 1][col];
      matrix[row - 1][col] = matrix[row][col];
      matrix[row][col] = rowCopy;
    }
  } 
}


uint16_t myRemapFn(uint16_t row, uint16_t col) {
  int MATRIX_WIDTH = mw;

  int pos;
  if (row & 0x01) {
    // Odd rows run backwards
    int reverseX = (MATRIX_WIDTH - 1) - col;
    pos = (row * MATRIX_WIDTH) + reverseX;
  } else {
    // Even rows run forwards
    pos = (row * MATRIX_WIDTH) + col;
  }
  return pos;  
}

void mirrorMatrix(int matrix[][8], int height, int width) {
  int rowCopy;
  for (int row = 0; row < height; row++) {
    for (int col = 0; col < width / 2; col++) {
      int mirrorIndex = width - 1 - col;
      rowCopy = matrix[row][mirrorIndex];
      matrix[row][mirrorIndex] = matrix[row][col];
      matrix[row][col] = rowCopy;
    }
  }
}
