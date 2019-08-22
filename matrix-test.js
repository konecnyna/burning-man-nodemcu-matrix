const test = [
  [0, 1, 2, 3, 4, 5, 6, 7],
  [15, 14, 13, 12, 11, 10, 9, 8],
  [16, 17, 18, 19, 20, 21, 22, 23],
  [24, 0, 0, 0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0, 0, 0, 127],
  
]

const getLEDpos = (row, col) => {
  const MATRIX_WIDTH = 8;

  
  if(row & 0x01) {
    // Odd rows run backwards
    // Even rows run forwards
    pos = (row * MATRIX_WIDTH) + col;
  } else {
    let reverseX = (MATRIX_WIDTH - 1) - col;
    pos = (row * MATRIX_WIDTH) + reverseX;
    
  }
  return pos;  
}


const testPos = (row, column) => {
  const expect = test[row][column];
  const actual = getLEDpos(row, column);
  console.log(expect == actual)
  console.log(`EXPECTED: ${expect}`);
  console.log(`Actual: ${actual}`);
}


testPos(1,0);
testPos(1,7);



