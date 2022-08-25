// Fill the dots one after the other with a color
void colorWipe(Adafruit_NeoMatrix *matrix, uint32_t c, uint8_t wait)
{
  for (int row = 0; row < matrix->width(); row++)
  {
    for (int column = 0; column < matrix->height(); column++)
    {
      matrix->drawPixel(row, column, c);
      matrix->show();
      delay(wait);
    }
  }
}

// Fill the dots one after the other with a color
void colorWipeBottomUp(uint32_t c, uint8_t wait)
{
  for (int row = matrix->width(); row >= 0; row--)
  {
    for (int column = 0; column < matrix->height(); column++)
    {
      matrix->drawPixel(row, column, c);
    }
    matrix->show();
    delay(wait);
  }
}

void colorWipeBottomDown(uint32_t c, uint8_t wait)
{
  for (int row = 0; row < matrix->width(); row++)
  {
    for (int column = 0; column < matrix->height(); column++)
    {
      matrix->drawPixel(row, column, c);
    }
    matrix->show();
    delay(wait);
  }
}

void colorWipeBottomUpRainbow(Adafruit_NeoMatrix *matrix, uint8_t wait)
{
  int firstPixelHue = 0;
  int numberOfFrames = matrix->width();
  for (int row = matrix->width(); row >= 0; row--)
  {
    int hue = firstPixelHue + row * 256 * 65536L / (44 * 11);
    uint32_t color = matrix->gamma32(matrix->ColorHSV(hue));

    for (int column = 0; column < matrix->height(); column++)
    {
      matrix->drawPixel(row, column, color);
    }

    matrix->show();
    delay(wait);
    firstPixelHue += 65536 / (44 * 11);
  }
}