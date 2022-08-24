
void drawImage(Adafruit_NeoMatrix *matrix, MatrixImage image)
{
  int numberOfLines = matrix->width();
  int numberColumns = matrix->height();
  int row, column;

  for (row = 0; row < numberOfLines; row++)
  {
    for (column = 0; column < numberColumns; column++)
    {
      const RGB pixelColor = image.colors[image.pixels[row][column]];
      const uint16_t matrixColor = matrix->Color(pixelColor.r, pixelColor.g, pixelColor.b);
      matrix->drawPixel(row, column, matrixColor);
    }
  }

  matrix->show();
}