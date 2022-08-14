// #include "shit.h"
// #include "color.h"
// #include "util.h"
// #include "images.h"
#include "text.h"


// void cleanup() {
//   matrix->clear();
// }

// void makeFireAnimation() {
//   for (int repeat = 0; repeat < 60; repeat++) {
//     for (int i = 0; i < 3; i++) {
//       displayMatrix(fireImages[i]);
//     }
//     for (int i = 2; i >= 0; i--) {
//       displayMatrix(fireImages[i]);
//     }
//   }
// }

// void pingpongImage(MatrixImage img, int loops, int (*decayFn)(int)) {
//   while (loops-- > 0) {
//     for (int i = 8; i >= 0; i--) {
//       displayMatrix(img);
//       shiftUpArray(img.image);            
//       delay((*decayFn)(loops));
//     }

//     for (int i = 8; i >= 0; i--) {
//       displayMatrix(img);
//       shiftDownArray(img.image);
//       delay((*decayFn)(loops));
//     }
//   }
// }

// int decay(int loops) {
//   return 16 + (16 * loops);
// }

// int noDecay(int loops) {
//   return 16;
// }
 
// void panImage(MatrixImage mtrx) {
//   for (int i = 100; i >= 0; i--) {
//     displayMatrix(mtrx);
//     shiftLoopArray(mtrx.image);
//     delay(16 * 5);
//   }
// }

