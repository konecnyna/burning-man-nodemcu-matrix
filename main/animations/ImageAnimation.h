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

//, int (*decayFn)(int)
void pingpongImage(MatrixImage source, int loops, int shiftSize)
{

  MatrixImage copy = source;
  while (loops-- > 0)
  {
    for (int i = shiftSize; i >= 0; i--)
    {
      drawImage(copy);
      // shiftUpArray(copy.pixels);
      delay(50);
    }

    // for (int i = shiftSize; i >= 0; i--)
    // {
    //   drawImage(matrix, copy);
    //   // shiftDownArray(copy.pixels);
    //   delay(50);
    // }
  }
}

int decay(int loops)
{
  return matrixWidth + (matrixWidth * loops);
}

int noDecay(int loops)
{
  return loops;
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
