struct HSV {
  byte r;
  byte g;
  byte b;
};
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



// for a serpentine raster int pos;
int getLEDpos(int row, int column) { 
  int width = mw;
  int test = width * row + column; 
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
        //strip.setPixelColor(pixel, strip.gamma32(strip.ColorHSV(hsvColor.h, hsvColor.s, hsvColor.v)));
        strip.setPixelColor(pixel, strip.Color(255, 0, 255));
//        matrix->drawPixel(row, column, matrix->Color(255, 0, 255));
      }
      
    }
  }
  strip.show();
//  matrix->show();
  delay(matrixImage.delayTime);
}


// Rainbow cycle along whole strip. Pass delay time (in ms) between frames.
void rainbow(int wait) {
  for (long firstPixelHue = 0; firstPixelHue < 3 * 65536; firstPixelHue += 256) {
    for (int i = 0; i < strip.numPixels(); i++) { // For each pixel in strip...
      int pixelHue = firstPixelHue + (i * 65536L / strip.numPixels());
      strip.setPixelColor(i, strip.gamma32(strip.ColorHSV(pixelHue)));
    }
    strip.show(); // Update strip with new contents
    delay(wait);  // Pause for a moment
  }
}

void theaterChase(uint32_t color, int wait) {
  for(int a=0; a<10; a++) {  // Repeat 10 times...
    for(int b=0; b<3; b++) { //  'b' counts from 0 to 2...
      strip.clear();         //   Set all pixels in RAM to 0 (off)
      // 'c' counts up from 'b' to end of strip in steps of 3...
      for(int c=b; c<strip.numPixels(); c += 3) {
        strip.setPixelColor(c, color); // Set pixel 'c' to value 'color'
      }
      strip.show(); // Update strip with new contents
      delay(wait);  // Pause for a moment
    }
  }
}

void theaterChaseRainbow(int wait) {
  int firstPixelHue = 0;     // First pixel starts at red (hue 0)
  for(int a=0; a<30; a++) {  // Repeat 30 times...
    for(int b=0; b<3; b++) { //  'b' counts from 0 to 2...
      strip.clear();         //   Set all pixels in RAM to 0 (off)
      for(int c=b; c<strip.numPixels(); c += 3) {
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
