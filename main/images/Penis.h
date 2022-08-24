MatrixImage penis = {
    {{0, 0, 0},
     {255, 0, 0},
     {255, 184, 31}, {255, 255, 255}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0},
     {0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0},
     {0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0},
     {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
     {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
     {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
     {0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0},
     {0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0},
     {0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0},
     {0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0},
     {0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0},
     {0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0},
     {2, 2, 2, 0, 0, 0, 0, 0, 2, 2, 2},
     {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
     {2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2},
     {2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2},
     {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2}}};



void ejaculate() {
  int theTipRow = 27;
  
  MatrixImage copyPenis;
  
  int whiteColorIndex = 3;
  int blankColorIndex = 0;
  int frameDelay = 10*1000;

  copyPenis = penis;

  drawImage(matrix, copyPenis);
  delay(25);


  int loops = theTipRow + 1;
  // Frame 1;
  for (int i = 0; i < loops; i ++) {
    copyPenis.pixels[theTipRow - i][5] = whiteColorIndex;
    drawImage(matrix, copyPenis);
    delay(frameDelay);
  }

  for (int i = 0; i < 25; i ++) {
    for (int j = 0; j < matrixHeight; j++) {
      copyPenis.pixels[i][j] = whiteColorIndex;    
    }
    if (i < 7) {
      copyPenis.pixels[theTipRow - i][5] = blankColorIndex;
    }    
    drawImage(matrix, copyPenis);
    delay(frameDelay);
  }
  
  // // Frame 2;
  // copyPenis->pixels[theTipRow - 1][6] = whiteColorIndex;
  // copyPenis->pixels[theTipRow - 1][6] = whiteColorIndex;
  // drawImage(matrix, copyPenis);
  // delay(25);
  // // Frame 3;
  // copyPenis->pixels[theTipRow - 2][4] = whiteColorIndex;
  // copyPenis->pixels[theTipRow - 2][5] = whiteColorIndex;
  // copyPenis->pixels[theTipRow - 2][6] = whiteColorIndex;
  // copyPenis->pixels[theTipRow - 2][7] = whiteColorIndex;
  // drawImage(matrix, copyPenis);
  // delay(25);
}

void animatePenis()
{
  int shiftSize = 26;
  pingpongImage(penis, 10, shiftSize, 5);
  ejaculate();
}