int fireworksMiniFrame1[7][7] = {
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
};

int fireworksMiniFrame2[7][7] = {
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0},
    {0, 0, 1, 2, 1, 0, 0},
    {0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
};

int fireworksMiniFrame3[7][7] = {
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0},
    {0, 0, 2, 2, 2, 0, 0},
    {0, 1, 2, 3, 2, 1, 0},
    {0, 0, 2, 2, 2, 0, 0},
    {0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
};

int fireworksMiniFrame4[7][7] = {
    {0, 0, 0, 1, 0, 0, 0},
    {0, 0, 2, 2, 2, 0, 0},
    {0, 2, 3, 3, 3, 2, 0},
    {1, 2, 3, 0, 3, 2, 1},
    {0, 2, 3, 3, 3, 2, 0},
    {0, 0, 2, 2, 2, 0, 0},
    {0, 0, 0, 1, 0, 0, 0},
};

int fireworksMiniFrame5[7][7] = {
    {0, 0, 0, 2, 0, 0, 0},
    {0, 0, 3, 3, 3, 0, 0},
    {0, 3, 0, 0, 0, 3, 0},
    {2, 3, 0, 0, 0, 3, 2},
    {0, 3, 0, 0, 0, 3, 0},
    {0, 0, 3, 3, 3, 0, 0},
    {0, 0, 0, 2, 0, 0, 0},
};

int fireworksMiniFrame6[7][7] = {
    {0, 0, 0, 3, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {3, 0, 0, 0, 0, 0, 3},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 3, 0, 0, 0},
};

int fireworksMiniFrame7[7][7] = {
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
};

void drawFrame(int x, int y, RGB colors[], int frame[7][7])
{
  int matrix[44][11] = {};

  for (int i = 0; i < 7; i++)
  {
    for (int j = 0; j < 7; j++)
    {
      matrix[i + y][j + x] = frame[i][j];
    }
  }

  drawImage(colors, matrix);
}

void playFireworks(int x, int y, int delayMs, RGB colors[])
{
  drawFrame(x, y, colors, fireworksMiniFrame1);
  delay(delayMs);
  drawFrame(x, y, colors, fireworksMiniFrame2);
  delay(delayMs);
  drawFrame(x, y, colors, fireworksMiniFrame3);
  delay(delayMs);
  drawFrame(x, y, colors, fireworksMiniFrame4);
  delay(delayMs);
  drawFrame(x, y, colors, fireworksMiniFrame5);
  delay(delayMs);
  drawFrame(x, y, colors, fireworksMiniFrame6);
  delay(delayMs);
  drawFrame(x, y, colors, fireworksMiniFrame7);
  delay(delayMs);
}

// y min = 0 y max = 37
// X min = 0 X max = 4
void playFireworksRed(int x, int y, int delayMs)
{
  RGB colors[] = {{0, 0, 0}, {255, 0, 0}, {200, 0, 0}, {255, 127, 0}, {255, 255, 0}};
  playFireworks(x, y, delayMs, colors);
}

void playFireworksBlue(int x, int y, int delayMs)
{
  RGB colors[] = {{0, 0, 0}, {0, 0, 255}, {0, 0, 255}, {49, 126, 204}, {0, 0, 100}};
  playFireworks(x, y, delayMs, colors);
}

void playFireworksGreen(int x, int y, int delayMs)
{
  RGB colors[] = {{0, 0, 0}, {0, 255, 0}, {0, 200, 0}, {144, 238, 144}, {0, 100, 0}};
  playFireworks(x, y, delayMs, colors);
}

int maxX = 4;
int maxY = 37;

int randomX()
{
  return rand() % (maxX + 1);
}

int randomY() {
  return rand() % (maxY + 1);
}

int randomTime() {
  return rand() % (maxY + 75) + 50;
}

void playFireworksAnim()
{
  playFireworksRed(randomX(), randomY(), randomTime());
  playFireworksBlue(randomX(), randomY(), randomTime());
  playFireworksGreen(randomX(), randomY(), randomTime());  
  playFireworksRed(randomX(), randomY(), randomTime());
  playFireworksGreen(randomX(), randomY(), randomTime());  
  playFireworksBlue(randomX(), randomY(), randomTime());
  playFireworksRed(randomX(), randomY(), randomTime());
  playFireworksGreen(randomX(), randomY(), randomTime());  
  playFireworksBlue(randomX(), randomY(), randomTime());
  playFireworksRed(randomX(), randomY(), randomTime());
}