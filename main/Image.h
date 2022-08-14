#include "./models/MatrixImage.h"

void drawImage(Adafruit_NeoMatrix *matrix)
{
  for (int row = 0; row < matrix->width(); row++)
  {
    for (int column = 0; column < matrix->height(); column++)
    {
      RGB color = RGB{255, 0, 0};
      matrix->drawPixel(row, column, matrix->Color(color.r, color.g, color.b));
      matrix->show();
      delay(10);
    }
  }
}