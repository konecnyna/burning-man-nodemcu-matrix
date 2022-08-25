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
  int rowCopy;
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
