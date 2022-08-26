void shiftUpArray(int matrix[44][11])
{
  int numberOfLines = 44;
  int numberColumns = 11;
  int row, column;

  for (row = 0; row < numberOfLines; row++)
  {
    for (column = 0; column < numberColumns; column++)
    {
      if (row == numberOfLines - 1)
      {
        matrix[row][column] = 0;
      }
      else
      {
        matrix[row][column] = matrix[row + 1][column];
      }
    }
  }
}

void shiftDownArray(int matrix[44][11])
{
  for (int row = 44 - 1; row >= 0; row--)
  {
    for (int col = 0; col < 11; col++)
    {
      if (row == 0)
      {
        matrix[row][col] = 0;
      }
      else
      {
        matrix[row][col] = matrix[row - 1][col];
      }
    }
  }
}

void shiftLoopArray(int matrix[44][11])
{
  int rowCopy;
  for (int row = 0; row < 44; row++)
  {
    for (int col = 0; col < 11; col++)
    {
      if (row == 0)
      {
        continue;
      }
      rowCopy = matrix[row - 1][col];
      matrix[row - 1][col] = matrix[row][col];
      matrix[row][col] = rowCopy;
    }
  }
}

void shiftMatrixLeft(int matrix[24][11])
{
  int colCopy;
  int width = 11;
  int height = 44;
  for (int i = 0; i < height-1; i++) {
    for (int j = 0; j < width; j++) {
      int colIndex = j - 1;
      if (colIndex < 0) {
        colIndex = width - 1;
      }

      //arr[j][i]++;
      matrix[colIndex][i] = j;
    }
  }
}

void shiftArrayUpByN(int matrix[44][11], int n) {
  for (int i = 0; i < n; i++) {
    shiftUpArray(matrix);
  }
}

void shiftArrayDownByN(int matrix[44][11], int n) {
  for (int i = 0; i < n; i++) {
    shiftDownArray(matrix);
  }
}


void copyMatrix(void *destMatrix, void *srcMatrix, int rowCount, int columnCount)
{
  memcpy(destMatrix, srcMatrix, rowCount * columnCount * sizeof(int));
}

void mirrorMatrix(int matrix[44][11], int height, int width) {
  int rowCopy;
  for (int row = 0; row < height; row++) {
    for (int col = 0; col < width / 2; col++) {
      int mirrorIndex = width - 1 - col;
      rowCopy = matrix[row][mirrorIndex];
      matrix[row][mirrorIndex] = matrix[row][col];
      matrix[row][col] = rowCopy;
    }
  }
}
