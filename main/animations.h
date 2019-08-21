void makeBurningManAnimation(Adafruit_NeoMatrix * matrix) {
  drawBM(matrix);
  delay(5000);
  colorWipeBottomUp(matrix, matrix->Color( 226, 88, 34), 50);
  delay(5000);
  colorWipe(matrix, matrix->Color( 0, 0, 0), 10);
  delay(5000);
}


void makeFireAnimation(Adafruit_NeoMatrix * matrix) {
  int length = sizeof(fireImages);
  for (int repeat = 0; repeat < 20; repeat++) {
    for (int i = 0; i < length; i++) {
      displayMatrixImage(matrix, fireImages[i]);
    }
  }
}
