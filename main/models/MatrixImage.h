#include "rgb.h"

typedef struct  {
  RGB colors[10];
  boolean clearScreen;
  int image[16][8];
  int delayTime;
} MatrixImage;