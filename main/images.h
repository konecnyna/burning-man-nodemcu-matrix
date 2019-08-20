
int blank[8][8] = {
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};

void displayMatrixImage(Adafruit_NeoMatrix * matrix, int image[][8], int colors[], boolean clearScreen) {
  for (int row = 0; row < matrix->width(); row++) {
    for (int column = 0; column < matrix->height(); column++) {
      int current = image[row][column];

      // Ignore blanks
      if (!clearScreen && current == 0) {
        continue;
      } 
      
      matrix->drawPixel(row, column, colors[current]);
      matrix->show();       
    }
  }
}

void drawLogo(Adafruit_NeoMatrix * matrix) {
  // This 8x8 array represents the LED matrix pixels.
  // A value of 1 means we’ll fade the pixel to white
  int logo[8][8] = {
    {0, 0, 0, 2, 2, 2, 2, 2},
    {0, 0, 0, 1, 1, 2, 2, 2},
    {0, 0, 0, 1, 1, 1, 2, 2},
    {0, 0, 1, 1, 1, 1, 1, 2},
    {1, 1, 1, 1, 1, 1, 1, 2},
    {1, 1, 1, 1, 1, 1, 1, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 0, 0, 0}
  };

  int colors[] = {
    matrix->Color(0, 0, 0),
    matrix->Color(255, 0, 255),
    matrix->Color(0, 255, 0)
  };

  displayMatrixImage(matrix, logo, colors, true);
  delay(10000);
}




void drawBM(Adafruit_NeoMatrix * matrix) {
  // This 8x8 array represents the LED matrix pixels.
  // A value of 1 means we’ll fade the pixel to white
  int logo[8][8] = {
    {0, 1, 0, 0, 0, 0, 1, 0},
    {0, 0, 1, 0, 0, 1, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 1, 0, 0, 1, 0, 0},
    {0, 1, 0, 0, 0, 0, 1, 0}
  };

  int colors[] = {
    matrix->Color(0, 0, 0),
    matrix->Color(255, 255, 255)
  };
  displayMatrixImage(matrix, logo, colors, true);
}



void drawFire1(Adafruit_NeoMatrix * matrix) {
  // This 8x8 array represents the LED matrix pixels.
  // A value of 1 means we’ll fade the pixel to white
  int fire_1[8][8] = {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 1, 0},
    {0, 1, 1, 1, 0, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1}
  };


  int colors[] = {
    matrix->Color(0, 0, 0),
    matrix->Color(226, 136, 34)
  };

  displayMatrixImage(matrix, fire_1, colors, true);
}

void drawFire2(Adafruit_NeoMatrix * matrix) {
  int fire_2[8][8] = {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {1, 0, 0, 0, 1, 0, 0, 0},
    {1, 1, 0, 1, 1, 1, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1}
  };


  int colors[] = {
    matrix->Color(0, 0, 0),
    matrix->Color(226, 56, 34)
  };

  displayMatrixImage(matrix, fire_2, colors, true);
}


void drawFire3(Adafruit_NeoMatrix * matrix) {
  int fire_3[8][8] = {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 1},
    {0, 0, 1, 1, 1, 0, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1}
  };

  int colors[] = {
    matrix->Color(0, 0, 0),
    matrix->Color(226, 88, 34)
  };

  displayMatrixImage(matrix, fire_3, colors, true);
}
