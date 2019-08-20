
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

void displayMatrixImage(Adafruit_NeoMatrix * matrix, int image[][8], int colors[]) {
  for (int row = 0; row < 8; row++) {
    for (int column = 0; column < 8; column++) {
      int current = image[row][column];
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

  displayMatrixImage(matrix, logo, colors);
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
  displayMatrixImage(matrix, logo, colors);
}



void drawFire(Adafruit_NeoMatrix * matrix) {
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
    matrix->Color( 226, 88, 34)
  };
  
  displayMatrixImage(matrix, fire_1, colors);
}
