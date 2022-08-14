
void drawImage(Adafruit_NeoMatrix *matrix, MatrixImage image)
{

  for (int row = 0; row < matrix->width(); row++)
  {
    for (int column = 0; column < matrix->height(); column++)
    {
      const RGB pixelColor = image.colors[image.pixels[row][column]];
      const uint16_t matrixColor = matrix->Color(pixelColor.r, pixelColor.g, pixelColor.b);
      matrix->drawPixel(row, column, matrixColor);
    }
  }

  matrix->show();
}

void shiftLoopArray(int matrix[44][11]) {
  int rowCopy;
  
  for (int row = 0; row < 44; row++) {
    for (int col = 0; col < 11; col++) {
      if (row == 0) {
        continue;
      }
      rowCopy = matrix[row - 1][col];
      matrix[row - 1][col] = matrix[row][col];
      matrix[row][col] = rowCopy;
    }
  } 
}


void panImageUp(Adafruit_NeoMatrix *matrix, MatrixImage image, int loops) {
  int i = matrix->width() * loops;
  for (i; i >= 0; i--) {
    drawImage(matrix, image);
    shiftLoopArray(image.pixels);
    delay(image.delayTime);
  }
}

