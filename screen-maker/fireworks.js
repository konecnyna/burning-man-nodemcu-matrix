const fireworkMatrix = [];

for (let rows = 0; rows < 5; rows++) {
  const row = []
  for (let cols = 0; cols < 5; cols++) {
    row.push(0);
  }
  fireworkMatrix.push(row);
}


// int getLEDpos(int row, int col) {
//   int MATRIX_WIDTH = 44;

//   int pos;
//   if (row & 0x01) {
//     // Odd rows run backwards
//     int reverseX = (MATRIX_WIDTH - 1) - col;
//     pos = (row * MATRIX_WIDTH) + reverseX;
//   } else {
//     // Even rows run forwards
//     pos = (row * MATRIX_WIDTH) + col;
//   }
//   return pos;
// }

function matrixToStripPixel(row, column) {
  const matrixWidth = 44;
  
  const pixel = (row * column) + row
  const pixel2 = (row * column) + column
  console.log(`total: ${pixel}`)
  console.log(`total: ${pixel2}`)
  return pixel + pixel2
}
 // top left = 44
  // bottom left = 0;
  // top right = 484 - 1 || row=0, col = 11
  // bottom right = 484 - 44


let error = false
matrixToStripPixel(0,0) === 43 || console.error(`ERROR: TOP LEFT IS WRONG expected 43 got ${matrixToStripPixel(0,0)}`) && (error = true);
matrixToStripPixel(43,0) === 0 || console.error(`ERROR: Bottom LEFT IS WRONG 0 got ${matrixToStripPixel(44,0)}`)&& (error = true);
matrixToStripPixel(0,10) === 484-1 || console.error(`ERROR: TOP RIGHT IS WRONG expected 483 got ${matrixToStripPixel(0,11)}`)&& (error = true);

console.log("DONE")
