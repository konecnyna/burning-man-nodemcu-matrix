// const test = [
//   [0, 1, 2, 3, 4, 5, 6, 7],
//   [15, 14, 13, 12, 11, 10, 9, 8],
//   [16, 17, 18, 19, 20, 21, 22, 23],
//   [24, 0, 0, 0, 0, 0, 0, 0],
//   [0, 0, 0, 0, 0, 0, 0, 0],
//   [0, 0, 0, 0, 0, 0, 0, 0],
//   [0, 0, 0, 0, 0, 0, 0, 0],
//   [0, 0, 0, 0, 0, 0, 0, 127],  
// ];

const test = [
  [0,0,0],
  [2,2,2],
  [0,0,0],
  [1,1,1]
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


const shiftMatrix = (shifts) => {
  while(shifts-- > 0) {
    let rowCopy;    
    for (row = 0; row < test.length; row++) {
      for (col = 0; col < test[row].length; col++) {      
        if (row == 0) {
          continue;
        }
        rowCopy = test[row - 1][col]
        // copy.
        test[row - 1][col] = test[row][col];
        //shft in zeros.
        test[row][col] = rowCopy;
      }
    }
  }
  console.log(test);
}


const testA = [
  [1, 1, 0, 0, 0],
  [1, 0, 0, 0, 0],
  [0, 0, 0, 0, 1]
];

const testAResult = [
  [1, 1, 0, 0, 0, 0, 0, 0],
  [1, 1, 0, 0, 0, 0, 0, 0],
  [1, 1, 0, 0, 0, 0, 0, 0],
  [1, 1, 0, 0, 0, 0, 0, 0],
  [1, 1, 0, 0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0, 1, 1, 1]
];
const mirrorMatrix = (test) => {  
    let rowCopy;    
    for (row = 0; row < test.length; row++) {
      for (col = 0; col < test[row].length / 2; col++) {            
        const mirrorIndex = test[row].length - 1 - col;                
        rowCopy = test[row][mirrorIndex];
        // copy.
        test[row][mirrorIndex] = test[row][col];
        //shft in zeros.
        test[row][col] = rowCopy;
      }
      console.log(test[row]);    
    }
    
}

mirrorMatrix(testAResult)