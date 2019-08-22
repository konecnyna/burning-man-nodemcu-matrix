
typedef struct  {
  RGB colors[10];
  boolean clearScreen;
  int image[16][8];
  int delayTime;
} MatrixImage;


int blank[16][8] = {
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};



//  int logo[8][8] = {
//    {0, 0, 0, 2, 2, 2, 2, 2},
//    {0, 0, 0, 1, 1, 2, 2, 2},
//    {0, 0, 0, 1, 1, 1, 2, 2},
//    {0, 0, 1, 1, 1, 1, 1, 2},
//    {1, 1, 1, 1, 1, 1, 1, 2},
//    {1, 1, 1, 1, 1, 1, 1, 0},
//    {1, 1, 1, 1, 1, 1, 0, 0},
//    {1, 1, 1, 1, 1, 0, 0, 0}
//  };



//
//void drawLogo(Adafruit_NeoMatrix * matrix) {
//  // This 8x8 array represents the LED matrix pixels.
//  // A value of 1 means we’ll fade the pixel to white
//  int logo[8][8] = {
//    {0, 0, 0, 2, 2, 2, 2, 2},
//    {0, 0, 0, 1, 1, 2, 2, 2},
//    {0, 0, 0, 1, 1, 1, 2, 2},
//    {0, 0, 1, 1, 1, 1, 1, 2},
//    {1, 1, 1, 1, 1, 1, 1, 2},
//    {1, 1, 1, 1, 1, 1, 1, 0},
//    {1, 1, 1, 1, 1, 1, 0, 0},
//    {1, 1, 1, 1, 1, 0, 0, 0}
//  };
//
//  int colors[] = {
//    matrix->Color(0, 0, 0),
//    matrix->Color(255, 0, 255),
//    matrix->Color(0, 255, 0)
//  };
//
//  displayMatrixImage(matrix, logo, colors, true);
//  delay(10000);
//}
//
//
//
//
//void drawBM(Adafruit_NeoMatrix * matrix) {
//  // This 8x8 array represents the LED matrix pixels.
//  // A value of 1 means we’ll fade the pixel to white
//  int logo[8][8] = {
//    {0, 1, 0, 0, 0, 0, 1, 0},
//    {0, 0, 1, 0, 0, 1, 0, 0},
//    {0, 0, 0, 1, 1, 0, 0, 0},
//    {0, 0, 0, 1, 1, 0, 0, 0},
//    {0, 0, 0, 1, 1, 0, 0, 0},
//    {0, 0, 0, 1, 1, 0, 0, 0},
//    {0, 0, 1, 0, 0, 1, 0, 0},
//    {0, 1, 0, 0, 0, 0, 1, 0}
//  };
//
//  int colors[] = {
//    matrix->Color(0, 0, 0),
//    matrix->Color(255, 255, 255)
//  };
//  displayMatrixImage(matrix, logo, colors, true);
//}
//
///*************************************************************/
///** Begin FIRE **/
///*************************************************************/
int fire_1_image[16][8] = {
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 1, 0, 0, 0, 1, 0},
  {0, 1, 1, 1, 0, 1, 1, 1},
  {1, 1, 1, 1, 1, 1, 1, 1},
  {1, 1, 1, 1, 1, 1, 1, 1}
};


MatrixImage fire1 = {
  { { 0, 0, 0}, { 226, 40, 34} },
  false,
  { {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {1, 0, 0, 0, 1, 0, 0, 0},
    {1, 1, 0, 1, 1, 1, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1}
  },
  250
};

MatrixImage fire2 = {
  { { 0, 0, 0}, { 226, 88, 34} },
  false,
  { {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 1, 1, 0, 0},
    {1, 0, 0, 1, 1, 1, 1, 0},
    {1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1}
  },
  250
};

MatrixImage fire3 = {
  { { 0, 0, 0}, {226, 136, 34} },
  false,
  {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0}
  },
  250
};

MatrixImage fireImages[3] = {
  fire1,
  fire2,
  fire3
};
///*************************************************************/
///** END FIRE **/
///*************************************************************/


///*************************************************************/
///** Begin BM **/
///*************************************************************/
int bm_image[16][8] = {
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 1, 0, 0, 0, 0, 1, 0},
  {0, 0, 1, 0, 0, 1, 0, 0},
  {0, 0, 0, 1, 1, 0, 0, 0},
  {0, 0, 0, 1, 1, 0, 0, 0},
  {0, 0, 0, 1, 1, 0, 0, 0},
  {0, 0, 0, 1, 1, 0, 0, 0},
  {0, 0, 1, 0, 0, 1, 0, 0},
  {0, 1, 0, 0, 0, 0, 1, 0},
  {0, 2, 2, 2, 2, 2, 2, 0},
  {0, 2, 2, 2, 2, 2, 2, 0},
  {0, 4, 3, 0, 3, 3, 3, 0},
  {0, 4, 3, 0, 3, 0, 3, 0},
  {0, 0, 3, 0, 3, 3, 3, 0},
  {0, 0, 3, 0, 0, 0, 3, 0},
  {0, 0, 3, 0, 0, 0, 3, 0}
};
//
///*************************************************************/
///** END BM **/
///*************************************************************/



///*************************************************************/
///** START FireWorks **/
///*************************************************************/
int fire_work_image_1[16][8] = {
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0}
};

int fire_work_image_2[16][8] = {
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};

int fire_work_image_3[16][8] = {
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};


int fire_work_image_4[16][8] = {
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};



int fire_work_image_5[16][8] = {
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};


int fire_work_image_6[16][8] = {
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};



int fire_work_image_7[16][8] = {
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};


int fire_work_image_8[16][8] = {
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 2, 0, 2, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 2, 0, 2, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};



int fire_work_image_9[16][8] = {
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 2, 0, 0, 0, 2, 0},
  {0, 0, 0, 2, 3, 2, 0, 0},
  {0, 0, 0, 3, 1, 3, 0, 0},
  {0, 0, 0, 2, 3, 2, 0, 0},
  {0, 0, 2, 0, 0, 0, 2, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};


int fire_work_image_10[16][8] = {
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 2, 0, 0, 0, 0, 0, 0},
  {0, 0, 2, 0, 3, 0, 2, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 3, 0, 0, 3, 0, 0},
  {0, 0, 0, 0, 0, 2, 0, 0},
  {0, 0, 2, 0, 3, 0, 2, 0},
  {0, 2, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};



int fire_work_image_11[16][8] = {
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 2, 0, 0, 0, 0, 0, 0},
  {0, 0, 2, 0, 0, 0, 2, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 2, 0, 0, 0, 2, 0},
  {0, 2, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};

int fire_work_image_12[16][8] = {
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0}
};
//
//MatrixImage fireworks[12] = {
//  fire_work_image_1,
//  fire_work_image_2,
//  fire_work_image_3,
//  fire_work_image_4,
//  fire_work_image_5,
//  fire_work_image_6,
//  fire_work_image_7,
//  fire_work_image_8,
//  fire_work_image_9,
//  fire_work_image_10,
//  fire_work_image_11,
//  fire_work_image_12
//};
///*************************************************************/
///** END FIREWORK **/
///*************************************************************/






MatrixImage eggplant = {
  { { 0, 0, 0}, { 255, 0, 255}, {0, 255, 0} },
  false,
  {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {2, 2, 2, 0, 0, 0, 0, 0},
    {2, 2, 1, 1, 0, 0, 0, 0},
    {2, 1, 1, 1, 1, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 0, 0},
    {0, 0, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 1, 1, 1, 1, 1},
    {0, 0, 0, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 1, 1, 1, 1}
  },
  15000
};


MatrixImage testbounds = {
  { { 0, 0, 0}, { 255, 255, 255}, {0, 255, 0} },
  false,
  {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 1, 1, 1},
    {1, 1, 1, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 1, 1, 1}
  },
  15000
};

//
//    {1, 2, 2, 2, 2, 2, 2, 1},
//    {1, 2, 2, 2, 2, 2, 2, 1},
//    {1, 0, 0, 0, 0, 0, 0, 1},
//    {1, 0, 0, 0, 0, 0, 0, 1},
//    {1, 0, 0, 0, 0, 0, 0, 1},
//    {1, 0, 0, 0, 0, 0, 0, 1},
//    {1, 0, 0, 0, 0, 0, 0, 1},
//    {1, 2, 2, 2, 2, 2, 2, 1},
//    {1, 2, 2, 2, 2, 2, 2, 1},
//    {1, 0, 0, 0, 0, 0, 0, 1},
//    {1, 0, 0, 0, 0, 0, 0, 1},
//    {1, 0, 0, 1, 1, 0, 0, 1},
//    {1, 0, 0, 1, 1, 0, 0, 1},
//    {1, 0, 0, 1, 1, 0, 0, 1},
//    {1, 2, 2, 2, 2, 2, 2, 1},
//    {1, 2, 2, 2, 2, 2, 2, 1}

MatrixImage bm = {
  { { 0, 0, 0}, { 255, 255, 255}, {0, 255, 0} },
  false,
  {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {2, 2, 2, 0, 0, 0, 0, 0},
    {2, 2, 1, 1, 0, 0, 0, 0},
    {2, 1, 1, 1, 1, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 0, 0},
    {0, 0, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 1, 1, 1, 1, 1},
    {0, 0, 0, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 1, 1, 1, 1}
  },
  15000
};


//int blank[16][8] = {
//  {0, 1, 0, 0, 0, 0, 0, 0},
//  {0, 0, 1, 0, 0, 0, 0, 0},
//  {0, 0, 0, 1, 0, 0, 0, 0},
//  {0, 0, 0, 1, 0, 0, 0, 0},
//  {0, 0, 0, 1, 0, 0, 0, 0},
//  {0, 0, 0, 1, 0, 0, 0, 0},
//  {0, 0, 0, 1, 0, 0, 0, 0},
//  {0, 0, 1, 0, 0, 0, 0, 0},
//  {0, 1, 0, 0, 0, 0, 0, 0},
//  {0, 2, 2, 2, 2, 2, 2, 0},
//  {0, 2, 2, 2, 2, 2, 2, 0},
//  {0, 0, 0, 0, 0, 0, 0, 0},
//  {0, 2, 1, 0, 1, 1, 1, 0},
//  {0, 0, 1, 0, 1, 0, 1, 0},
//  {0, 0, 1, 0, 1, 1, 1, 0},
//  {0, 0, 1, 0, 0, 0, 1, 0}
//};
