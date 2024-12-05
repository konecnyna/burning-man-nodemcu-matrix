#include <Adafruit_NeoMatrix.h>
#include <Adafruit_GFX.h>
#include <Adafruit_NeoPixel.h>

#define PIN 15

Adafruit_NeoMatrix newMatrix = Adafruit_NeoMatrix(11, 44, PIN,
                                                  NEO_MATRIX_TOP + NEO_MATRIX_LEFT +
                                                      NEO_MATRIX_COLUMNS + NEO_MATRIX_ZIGZAG,
                                                  NEO_GRB + NEO_KHZ800);

// Define colors
uint16_t newPink = newMatrix.Color(255, 192, 203);  // Light Pink
uint16_t newWhite = newMatrix.Color(255, 255, 255); // White
uint16_t newRed = newMatrix.Color(255, 0, 0);       // Red
uint16_t newGreen = newMatrix.Color(0, 255, 0);     // Green
uint16_t newDarkGreen = newMatrix.Color(0, 128, 0); // Dark Green
uint16_t newBlue = newMatrix.Color(0, 0, 255);      // Blue
uint16_t newMagenta = newMatrix.Color(255, 0, 255); // Magenta
uint16_t newBlack = newMatrix.Color(0, 0, 0);       // Black
uint16_t newYellow = newMatrix.Color(255, 255, 0);  // Yellow
uint16_t newCyan = newMatrix.Color(0, 255, 255);    // Cyan
uint16_t newOrange = newMatrix.Color(255, 165, 0);  // Orange
uint16_t newOlive = newMatrix.Color(128, 128, 0);   // Olive

const uint16_t chen_alien[44][11] = {
    {newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan},
    {newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan},
    {newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan},
    {newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan},
    {newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan},
    {newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan},
    {newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan},
    {newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan},
    {newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan},
    {newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan},
    {newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan},
    {newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan},
    {newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan},
    {newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan},
    {newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan},
    {newCyan, newCyan, newCyan, newBlue, newBlue, newGreen, newBlue, newBlue, newCyan, newCyan, newCyan},
    {newCyan, newCyan, newBlue, newGreen, newBlue, newGreen, newBlue, newGreen, newBlue, newCyan, newCyan},
    {newCyan, newCyan, newBlue, newBlue, newGreen, newGreen, newGreen, newBlue, newBlue, newCyan, newCyan},
    {newCyan, newBlue, newBlue, newBlue, newBlue, newGreen, newBlue, newBlue, newBlue, newBlue, newCyan},
    {newCyan, newBlue, newBlue, newBlue, newGreen, newBlue, newGreen, newBlue, newBlue, newBlue, newCyan},
    {newBlue, newBlue, newBlue, newBlue, newBlue, newMagenta, newBlue, newBlue, newBlue, newBlue, newBlue},
    {newBlue, newBlue, newBlue, newBlue, newMagenta, newMagenta, newMagenta, newBlue, newBlue, newBlue, newBlue},
    {newBlue, newBlue, newBlue, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newBlue, newBlue, newBlue},
    {newBlue, newBlue, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newBlue, newBlue},
    {newBlue, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newBlue},
    {newBlue, newBlue, newMagenta, newBlue, newMagenta, newBlue, newBlue, newMagenta, newBlue, newMagenta, newBlue},
    {newCyan, newMagenta, newMagenta, newMagenta, newPink, newMagenta, newMagenta, newPink, newMagenta, newPink, newCyan},
    {newCyan, newMagenta, newPink, newMagenta, newMagenta, newPink, newPink, newMagenta, newMagenta, newMagenta, newCyan},
    {newCyan, newPink, newMagenta, newPink, newMagenta, newMagenta, newMagenta, newMagenta, newPink, newMagenta, newCyan},
    {newCyan, newMagenta, newPink, newMagenta, newPink, newMagenta, newPink, newPink, newMagenta, newMagenta, newCyan},
    {newCyan, newMagenta, newCyan, newPink, newMagenta, newCyan, newMagenta, newMagenta, newPink, newPink, newCyan},
    {newCyan, newPink, newCyan, newMagenta, newPink, newCyan, newCyan, newMagenta, newCyan, newMagenta, newCyan},
    {newCyan, newMagenta, newCyan, newMagenta, newMagenta, newCyan, newCyan, newPink, newCyan, newPink, newCyan},
    {newCyan, newMagenta, newCyan, newMagenta, newCyan, newCyan, newCyan, newMagenta, newCyan, newMagenta, newCyan},
    {newCyan, newCyan, newCyan, newPink, newCyan, newCyan, newCyan, newPink, newCyan, newCyan, newCyan},
    {newCyan, newCyan, newCyan, newMagenta, newCyan, newCyan, newCyan, newMagenta, newCyan, newCyan, newCyan},
    {newCyan, newCyan, newCyan, newMagenta, newCyan, newCyan, newCyan, newMagenta, newCyan, newCyan, newCyan},
    {newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan},
    {newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan},
    {newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan},
    {newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan},
    {newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan},
    {newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan},
    {newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan},
};

const uint16_t chen_mushroom[44][11] = {
    {newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newRed, newRed, newRed, newRed},
    {newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newRed, newRed, newRed, newRed},
    {newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newBlack, newRed, newRed, newRed},
    {newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newBlack, newBlack, newRed, newRed},
    {newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newBlack, newWhite, newWhite, newBlack, newRed},
    {newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newWhite, newWhite, newWhite, newBlack, newRed},
    {newOlive, newOlive, newOlive, newOlive, newOlive, newBlack, newWhite, newWhite, newBlack, newBlack, newRed},
    {newOlive, newOlive, newOlive, newOlive, newOlive, newBlack, newWhite, newBlack, newOlive, newOlive, newOlive},
    {newOlive, newOlive, newOlive, newOlive, newBlack, newWhite, newWhite, newBlack, newOlive, newOlive, newOlive},
    {newOlive, newOlive, newOlive, newOlive, newBlack, newWhite, newBlack, newOlive, newOlive, newOlive, newOlive},
    {newOlive, newOlive, newOlive, newOlive, newWhite, newWhite, newBlack, newOlive, newOlive, newOlive, newOlive},
    {newOlive, newOlive, newOlive, newOlive, newBlack, newBlack, newOlive, newOlive, newOlive, newOlive, newOlive},
    {newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive},
    {newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive},
    {newOlive, newOlive, newOlive, newOlive, newOlive, newYellow, newOlive, newOlive, newOlive, newOlive, newOlive},
    {newOlive, newOlive, newOlive, newOlive, newGreen, newYellow, newGreen, newOlive, newOlive, newOlive, newOlive},
    {newOlive, newOlive, newOlive, newOlive, newYellow, newYellow, newYellow, newOlive, newOlive, newOlive, newOlive},
    {newOlive, newOlive, newOlive, newOlive, newYellow, newYellow, newYellow, newOlive, newOlive, newOlive, newOlive},
    {newOlive, newOlive, newOlive, newOlive, newGreen, newYellow, newGreen, newOlive, newOlive, newOlive, newOlive},
    {newOlive, newOlive, newOlive, newOlive, newOlive, newYellow, newOlive, newOlive, newOlive, newOlive, newOlive},
    {newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive},
    {newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive},
    {newOlive, newOlive, newOlive, newOlive, newOlive, newGreen, newOlive, newOlive, newOlive, newOlive, newOlive},
    {newOlive, newOlive, newOlive, newOlive, newGreen, newYellow, newGreen, newOlive, newOlive, newOlive, newOlive},
    {newOlive, newOlive, newOlive, newOlive, newOlive, newGreen, newOlive, newOlive, newOlive, newOlive, newOlive},
    {newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive},
    {newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive},
    {newOlive, newOlive, newOlive, newOlive, newBlue, newBlue, newBlue, newBlue, newBlue, newOlive, newOlive},
    {newOlive, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newOlive},
    {newBlue, newBlue, newBlue, newBlue, newCyan, newGreen, newCyan, newCyan, newBlue, newBlue, newOlive},
    {newBlue, newOlive, newBlue, newCyan, newGreen, newYellow, newGreen, newCyan, newCyan, newBlue, newBlue},
    {newBlue, newOlive, newBlue, newCyan, newCyan, newGreen, newCyan, newCyan, newCyan, newCyan, newBlue},
    {newBlue, newBlue, newBlue, newCyan, newCyan, newCyan, newCyan, newCyan, newCyan, newBlue, newBlue},
    {newOlive, newBlue, newBlue, newBlue, newCyan, newCyan, newCyan, newCyan, newBlue, newBlue, newOlive},
    {newOlive, newOlive, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newOlive, newOlive},
    {newOlive, newOlive, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newOlive, newOlive},
    {newBlue, newBlack, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlack, newBlue},
    {newBlue, newBlue, newBlack, newBlue, newBlue, newBlue, newBlue, newBlue, newBlack, newBlack, newBlue},
    {newOlive, newBlue, newBlue, newBlack, newBlack, newBlack, newBlack, newBlack, newBlue, newBlue, newOlive},
    {newOlive, newOlive, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newBlue, newOlive, newOlive},
    {newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive},
    {newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive},
    {newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive},
    {newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive, newOlive},
};

const uint16_t chen_pacman[44][11] = {
    {newBlack, newBlack, newBlack, newBlack, newBlack, newYellow, newBlack, newBlack, newBlack, newBlack, newBlack},
    {newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack},
    {newBlack, newBlack, newBlack, newBlack, newBlack, newYellow, newBlack, newBlack, newBlack, newBlack, newBlack},
    {newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack},
    {newBlack, newOrange, newOrange, newBlack, newBlack, newYellow, newBlack, newBlack, newOrange, newOrange, newBlack},
    {newBlack, newOrange, newOrange, newBlack, newBlack, newBlack, newBlack, newBlack, newOrange, newOrange, newBlack},
    {newOrange, newOrange, newOrange, newBlack, newBlack, newBlack, newBlack, newBlack, newOrange, newOrange, newOrange},
    {newOrange, newOrange, newOrange, newOrange, newBlack, newBlack, newBlack, newOrange, newOrange, newOrange, newOrange},
    {newOrange, newOrange, newOrange, newOrange, newBlack, newBlack, newBlack, newOrange, newOrange, newOrange, newOrange},
    {newOrange, newOrange, newOrange, newOrange, newOrange, newBlack, newOrange, newOrange, newOrange, newOrange, newOrange},
    {newOrange, newOrange, newOrange, newOrange, newOrange, newOrange, newOrange, newOrange, newOrange, newOrange, newOrange},
    {newOrange, newOrange, newOrange, newOrange, newOrange, newOrange, newOrange, newOrange, newOrange, newOrange, newOrange},
    {newOrange, newOrange, newOrange, newOrange, newOrange, newOrange, newOrange, newOrange, newOrange, newOrange, newOrange},
    {newBlack, newOrange, newOrange, newOrange, newOrange, newOrange, newOrange, newOrange, newOrange, newOrange, newBlack},
    {newBlack, newOrange, newOrange, newOrange, newOrange, newOrange, newOrange, newOrange, newOrange, newOrange, newBlack},
    {newBlack, newBlack, newOrange, newOrange, newOrange, newOrange, newOrange, newOrange, newOrange, newBlack, newBlack},
    {newBlack, newBlack, newOrange, newOrange, newOrange, newOrange, newOrange, newOrange, newBlack, newBlack, newBlack},
    {newBlack, newBlack, newBlack, newOrange, newOrange, newOrange, newOrange, newOrange, newBlack, newBlack, newBlack},
    {newBlack, newBlack, newBlack, newBlack, newOrange, newOrange, newOrange, newBlack, newBlack, newBlack, newBlack},
    {newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack},
    {newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack},
    {newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack},
    {newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack},
    {newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack},
    {newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newBlack, newBlack, newBlack, newBlack, newBlack},
    {newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newBlack, newBlack, newBlack},
    {newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newBlack, newBlack},
    {newBlack, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newBlack, newBlack},
    {newBlack, newBlack, newMagenta, newMagenta, newWhite, newBlack, newWhite, newMagenta, newMagenta, newMagenta, newBlack},
    {newBlack, newBlack, newMagenta, newMagenta, newWhite, newBlack, newWhite, newMagenta, newMagenta, newMagenta, newBlack},
    {newMagenta, newMagenta, newMagenta, newMagenta, newWhite, newWhite, newWhite, newMagenta, newMagenta, newMagenta, newMagenta},
    {newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta},
    {newBlack, newBlack, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta},
    {newBlack, newBlack, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta},
    {newBlack, newBlack, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta},
    {newBlack, newBlack, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta},
    {newMagenta, newMagenta, newMagenta, newMagenta, newWhite, newBlack, newWhite, newMagenta, newMagenta, newMagenta, newMagenta},
    {newMagenta, newMagenta, newMagenta, newMagenta, newWhite, newBlack, newWhite, newMagenta, newMagenta, newMagenta, newMagenta},
    {newBlack, newBlack, newMagenta, newMagenta, newWhite, newWhite, newWhite, newMagenta, newMagenta, newMagenta, newBlack},
    {newBlack, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newBlack},
    {newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newBlack, newBlack},
    {newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newBlack, newBlack, newBlack},
    {newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newMagenta, newBlack, newBlack, newBlack, newBlack, newBlack},
    {newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack, newBlack},
};

const uint16_t chen_snake[44][11] = {
    {newPink, newPink, newPink, newPink, newPink, newRed, newRed, newRed, newPink, newPink, newPink},
    {newPink, newPink, newPink, newPink, newRed, newPink, newPink, newRed, newPink, newPink, newPink},
    {newPink, newPink, newPink, newPink, newRed, newPink, newPink, newRed, newPink, newPink, newPink},
    {newPink, newPink, newPink, newPink, newRed, newPink, newPink, newPink, newPink, newPink, newPink},
    {newPink, newPink, newPink, newPink, newDarkGreen, newDarkGreen, newPink, newPink, newPink, newPink, newPink},
    {newPink, newPink, newPink, newDarkGreen, newDarkGreen, newDarkGreen, newDarkGreen, newPink, newPink, newPink, newPink},
    {newPink, newPink, newDarkGreen, newBlack, newDarkGreen, newDarkGreen, newBlack, newDarkGreen, newPink, newPink, newPink},
    {newPink, newPink, newDarkGreen, newWhite, newDarkGreen, newDarkGreen, newWhite, newDarkGreen, newPink, newPink, newPink},
    {newPink, newPink, newDarkGreen, newDarkGreen, newDarkGreen, newDarkGreen, newDarkGreen, newDarkGreen, newPink, newPink, newPink},
    {newPink, newPink, newDarkGreen, newDarkGreen, newDarkGreen, newDarkGreen, newDarkGreen, newDarkGreen, newPink, newPink, newPink},
    {newPink, newPink, newPink, newDarkGreen, newDarkGreen, newDarkGreen, newDarkGreen, newPink, newPink, newPink, newPink},
    {newPink, newPink, newPink, newPink, newDarkGreen, newDarkGreen, newPink, newPink, newPink, newPink, newPink},
    {newPink, newPink, newPink, newPink, newDarkGreen, newDarkGreen, newPink, newPink, newPink, newPink, newPink},
    {newPink, newPink, newPink, newPink, newDarkGreen, newDarkGreen, newPink, newPink, newPink, newPink, newPink},
    {newPink, newPink, newPink, newPink, newDarkGreen, newDarkGreen, newDarkGreen, newPink, newPink, newPink, newPink},
    {newPink, newPink, newPink, newPink, newPink, newDarkGreen, newDarkGreen, newDarkGreen, newPink, newPink, newPink},
    {newPink, newPink, newPink, newPink, newPink, newPink, newDarkGreen, newDarkGreen, newDarkGreen, newPink, newPink},
    {newPink, newPink, newPink, newPink, newPink, newPink, newPink, newDarkGreen, newDarkGreen, newPink, newPink},
    {newPink, newPink, newPink, newPink, newPink, newPink, newPink, newPink, newDarkGreen, newDarkGreen, newPink},
    {newPink, newPink, newPink, newPink, newPink, newPink, newPink, newPink, newDarkGreen, newDarkGreen, newDarkGreen},
    {newPink, newPink, newPink, newPink, newPink, newPink, newPink, newPink, newDarkGreen, newDarkGreen, newDarkGreen},
    {newPink, newPink, newPink, newPink, newDarkGreen, newDarkGreen, newDarkGreen, newDarkGreen, newDarkGreen, newDarkGreen, newPink},
    {newPink, newPink, newPink, newDarkGreen, newDarkGreen, newDarkGreen, newDarkGreen, newDarkGreen, newDarkGreen, newPink, newPink},
    {newPink, newPink, newDarkGreen, newDarkGreen, newDarkGreen, newDarkGreen, newDarkGreen, newDarkGreen, newPink, newPink, newPink},
    {newPink, newDarkGreen, newDarkGreen, newDarkGreen, newPink, newPink, newPink, newPink, newPink, newPink, newPink},
    {newDarkGreen, newDarkGreen, newDarkGreen, newPink, newPink, newPink, newPink, newPink, newPink, newPink, newPink},
    {newDarkGreen, newDarkGreen, newPink, newPink, newPink, newPink, newPink, newPink, newPink, newPink, newPink},
    {newDarkGreen, newDarkGreen, newPink, newPink, newPink, newPink, newPink, newPink, newPink, newPink, newPink},
    {newPink, newDarkGreen, newDarkGreen, newPink, newPink, newPink, newPink, newPink, newPink, newPink, newPink},
    {newPink, newDarkGreen, newDarkGreen, newDarkGreen, newPink, newPink, newPink, newPink, newPink, newPink, newPink},
    {newPink, newPink, newDarkGreen, newDarkGreen, newDarkGreen, newPink, newPink, newPink, newPink, newPink, newPink},
    {newPink, newPink, newPink, newDarkGreen, newDarkGreen, newDarkGreen, newPink, newPink, newPink, newPink, newPink},
    {newPink, newPink, newPink, newPink, newDarkGreen, newDarkGreen, newDarkGreen, newPink, newPink, newPink, newPink},
    {newPink, newPink, newPink, newPink, newPink, newDarkGreen, newDarkGreen, newPink, newPink, newPink, newPink},
    {newPink, newPink, newPink, newPink, newPink, newPink, newDarkGreen, newDarkGreen, newPink, newPink, newPink},
    {newPink, newPink, newPink, newPink, newPink, newPink, newPink, newDarkGreen, newDarkGreen, newPink, newPink},
    {newPink, newPink, newPink, newPink, newPink, newPink, newPink, newDarkGreen, newDarkGreen, newPink, newPink},
    {newPink, newPink, newPink, newPink, newPink, newPink, newPink, newPink, newDarkGreen, newDarkGreen, newPink},
    {newPink, newPink, newPink, newPink, newPink, newPink, newPink, newPink, newPink, newDarkGreen, newDarkGreen},
    {newPink, newPink, newPink, newPink, newPink, newPink, newPink, newPink, newPink, newDarkGreen, newDarkGreen},
    {newPink, newPink, newPink, newPink, newPink, newPink, newPink, newPink, newPink, newPink, newDarkGreen},
    {newPink, newPink, newPink, newPink, newPink, newPink, newPink, newPink, newPink, newPink, newDarkGreen},
    {newPink, newPink, newPink, newPink, newPink, newPink, newPink, newPink, newPink, newDarkGreen, newDarkGreen},
    {newPink, newPink, newPink, newPink, newPink, newPink, newPink, newDarkGreen, newDarkGreen, newDarkGreen, newWhite},
};

#include "./pacmac.h"

void drawPattern(const uint16_t pattern[44][11])
{
  for (int y = 0; y < 44; y++)
  {
    for (int x = 0; x < 11; x++)
    {
      newMatrix.drawPixel(x, y, pattern[y][x]);
    }
  }
  newMatrix.show();
  delay(10000);
}

void startPacman()
{
  newMatrix.fillScreen(0);
  playPacManAnimation(newMatrix, 100);
}

void newMainSetup()
{
  newMatrix.begin();
  newMatrix.setBrightness(40);
}

void drawPacman()
{
  newMatrix.fillScreen(0);
  drawPattern(chen_pacman);
}

void drawSnake()
{
  newMatrix.fillScreen(0);
  drawPattern(chen_snake);
}

void drawAlien()
{
  newMatrix.fillScreen(0);
  drawPattern(chen_alien);
}

void drawMushroom()
{
  newMatrix.fillScreen(0);
  drawPattern(chen_mushroom);
}

void test()
{
    static int offset = 0;
    for (int x = 0; x < newMatrix.width(); x++) {
        for (int y = 0; y < newMatrix.height(); y++) {
            uint16_t color = newMatrix.ColorHSV(random(0, 65535), 255, 255);
            newMatrix.drawPixel(x + offset, y + offset, color);
        }
    }
    offset = (offset + 1) % newMatrix.width();
    newMatrix.show();
    delay(50);
}

void pulsatingWaves()
{
  static uint8_t offset = 0;
  for (int x = 0; x < newMatrix.width(); x++)
  {
    for (int y = 0; y < newMatrix.height(); y++)
    {
      uint8_t colorIndex = (x + y + offset) % 256;
      uint16_t color = newMatrix.ColorHSV(colorIndex * 256, 255, 255);
      newMatrix.drawPixel(x, y, color);
    }
  }
  offset++;
  newMatrix.show();
  delay(50); // Adjust delay for speed control
}