void makeBurningManAnimation(Adafruit_NeoMatrix * matrix) {
  drawBM(matrix);
  delay(5000);
  colorWipeBottomUp(matrix, matrix->Color( 226, 88, 34), 50);
  delay(5000);    
  colorWipe(matrix, matrix->Color( 0, 0, 0), 10);
  delay(5000);
}


void makeFireAnimation(Adafruit_NeoMatrix * matrix) {
  for (int i = 0; i < 20; i++) {
    drawFire1(matrix);
    delay(50);
    drawFire3(matrix);
    delay(50);
    drawFire2(matrix);
    delay(50);    
  }
}
