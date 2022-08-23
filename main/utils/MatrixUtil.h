
void print_array(const int *A, size_t width, size_t height) {
  Serial.println("-------------------------------");
  for (size_t i = 0; i < height; ++i) {
    for (size_t j = 0; j < width; ++j) {
      Serial.print(A[i * width + j]);
    }
    Serial.println("");
  }
  Serial.println("-------------------------------");
}



RGB colors[] = {
  {0, 0, 0},
  {255, 0, 255},
  {0, 255, 0}
};





void shiftUpArray(int matrix[16][8]) {
  int rowCopy;
  for (int row = 0; row < 16; row++) {
    for (int col = 0; col < 8; col++) {
      if (row == 16 - 1) {
        matrix[row][col] = 0;
      } else {
        matrix[row][col] = matrix[row + 1][col];
      }
    }
  }
}

void shiftDownArray(int matrix[16][8]) {
  int rowCopy;
  for (int row = 16-1; row >= 0; row--) {
    for (int col = 0; col < 8; col++) {
      if (row == 0) {
        matrix[row][col] = 0;
      } else {
        matrix[row][col] = matrix[row - 1][col];
      }
    }
  }
}

void shiftLoopArray(int matrix[16][8]) {
  int rowCopy;
  for (int row = 0; row < 16; row++) {
    for (int col = 0; col < 8; col++) {
      if (row == 0) {
        continue;
      }
      rowCopy = matrix[row - 1][col];
      matrix[row - 1][col] = matrix[row][col];
      matrix[row][col] = rowCopy;
    }
  } 
}



void mirrorMatrix(int matrix[][8], int height, int width) {
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
