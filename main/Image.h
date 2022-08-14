
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