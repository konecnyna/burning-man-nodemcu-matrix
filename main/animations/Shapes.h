void drawBoxes(uint16_t colors[])
{
  matrix->clear();
  matrix->drawRect(0, 0, matrixWidth, matrixHeight, colors[0]);
  matrix->drawRect(1, 1, matrixWidth - 2, matrixHeight - 2, colors[1]);
  matrix->fillRect(2, 2, matrixWidth - 4, matrixHeight - 4, colors[2]);
  matrix->fillRect(3, 3, matrixWidth - 6, matrixHeight - 6, colors[3]);
  matrix->fillRect(4, 4, matrixWidth - 8, matrixHeight - 8, colors[4]);
  matrix->fillRect(5, 5, matrixWidth - 10, matrixHeight - 10, colors[5]);
  matrix->show();
}

void displayRainbowBoxes(int loops, int delayMs)
{
  for (int loop = 0; loop < loops; loop++)
  {

    uint16_t colors[] = {red, orange, green, blue, indego, violet};
    int length = 6;
    // Copy a[] to b[] two times
    for (int i = 0; i < length; i++)
    {
      int j, temp;
      // Stores the last element of the array
      temp = colors[length - 1];
      for (j = length - 1; j > 0; j--)
      {
        // Shift element of array by one
        colors[j] = colors[j - 1];
      }
      // Last element of the array will be added to the start of the array.
      colors[0] = temp;

      drawBoxes(colors);      
      delay(delayMs);
    }    
  }
}




void fadeBoxes(int delayMs) {
  uint16_t colors[] = {red, orange, green, blue, indego, violet};

  for (int loop = 0; loop < 6; loop++)
  {
    uint16_t color = colors[loop];
    matrix->fill(color);
    matrix->show(); 
    delay(delayMs);
    
    for (int i =0; i < BRIGHTNESS; i++) {
      matrix->setBrightness(BRIGHTNESS - i + 1);
      matrix->fill(color);
      matrix->show(); 
      delay(delayMs); 
    }
  }

  matrix->setBrightness(BRIGHTNESS);
}
