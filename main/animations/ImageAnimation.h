// This is broken!
void panImageUp(Adafruit_NeoMatrix *matrix, MatrixImage image, int loops)
{
  int i;
  for (i = loops; i >= 0; i--)
  {
    drawImage(image);
    shiftLoopArray(image.pixels);
    delay(10);
  }
}

void pingpongImage(MatrixImage img, int loops, int shiftSize, int delayMs)
{
  while (loops-- > 0)
  {
    for (int i = shiftSize; i >= 0; i--)
    {
      drawImage(img);
      shiftUpArray(img.pixels);
      delay(delayMs);
    }

    for (int i = shiftSize; i >= 0; i--)
    {
      drawImage(img);
      shiftDownArray(img.pixels);
      delay(delayMs);
    }
  }
}

void pingpongImage(int matrix[44][11], RGB colors[], int loops, int shiftSize, int (*decayFn)(int))
{

  int copy[44][11];
  copyMatrix(copy, matrix, 44, 11);

  while (loops-- > 0)
  {
    for (int i = shiftSize; i >= 0; i--)
    {
      drawImage(colors, copy);
      shiftUpArray(copy);
      delay((*decayFn)(loops));
    }

    for (int i = shiftSize; i >= 0; i--)
    {
      drawImage(colors, copy);
      shiftDownArray(copy);
      delay((*decayFn)(loops));
    }
  }
}

int baseAnimSpeed = 5;
int decay(int loops)
{
  return baseAnimSpeed + (baseAnimSpeed * loops);
}

int noDecay(int loops)
{
  return baseAnimSpeed;
}

void panImage(MatrixImage mtrx)
{
  for (int i = 100; i >= 0; i--)
  {
    drawImage(mtrx);
    shiftLoopArray(mtrx.pixels);
    delay(matrixWidth * 5);
  }
}
