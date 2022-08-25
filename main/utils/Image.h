
void drawImage(MatrixImage image)
{
  int numberOfLines = 44;
  int numberColumns = 11;
  int row, column;
  
  matrix->clear();
  for (row = 0; row < numberOfLines; row++)
  {
    for (column = 0; column < numberColumns; column++)
    {
      
      int colorIndex = image.pixels[row][column];
      if (colorIndex == 0)
      {
        continue;
      }
      RGB pixelColor = image.colors[colorIndex];
      
      uint16_t matrixColor = matrix->Color(pixelColor.r, pixelColor.g, pixelColor.b);
      matrix->drawPixel(row, column, matrixColor);
    }
  }

  matrix->show();
}


void drawImage(RGB colors[], int pixels[44][11])
{
  int numberOfLines = 44;
  int numberColumns = 11;
  int row, column;
  
  matrix->clear();
  for (row = 0; row < numberOfLines; row++)
  {
    for (column = 0; column < numberColumns; column++)
    {
      
      int colorIndex = pixels[row][column];
      if (colorIndex == 0)
      {
        continue;
      }
      RGB pixelColor = colors[colorIndex];
      
      uint16_t matrixColor = matrix->Color(pixelColor.r, pixelColor.g, pixelColor.b);
      matrix->drawPixel(row, column, matrixColor);
    }
  }

  matrix->show();
}
