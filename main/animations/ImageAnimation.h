// This is broken!
void panImageUp(Adafruit_NeoMatrix *matrix, MatrixImage image, int loops)
{
  int i = matrix->width() * loops;
  for (i; i >= 0; i--)
  {
    drawImage(matrix, image);
    shiftLoopArray(image.pixels);
    delay(10);
  }
}

void pingpongImage(MatrixImage img, int loops, int (*decayFn)(int))
{
  while (loops-- > 0)
  {
    for (int i = 8; i >= 0; i--)
    {
      drawImage(matrix, img);
      shiftUpArray(img.pixels);
      delay((*decayFn)(loops));
    }

    for (int i = 8; i >= 0; i--)
    {
      drawImage(matrix, img);
      shiftDownArray(img.pixels);
      delay((*decayFn)(loops));
    }
  }
}

int decay(int loops)
{
  return 16 + (16 * loops);
}

int noDecay(int loops)
{
  return 16;
}

void panImage(MatrixImage mtrx)
{
  for (int i = 100; i >= 0; i--)
  {
    drawImage(matrix, mtrx);
    shiftLoopArray(mtrx.pixels);
    delay(16 * 5);
  }
}
