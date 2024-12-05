#!/usr/bin/env node
const test = {"matrixSize":{"width":11,"height":44},"pixelData":["#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 255, 0)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 0, 255)","rgb(0, 255, 0)","rgb(0, 0, 255)","rgb(0, 255, 0)","rgb(0, 0, 255)","rgb(0, 255, 0)","rgb(0, 0, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 255, 0)","rgb(0, 255, 0)","rgb(0, 255, 0)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 255, 0)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 255, 0)","rgb(0, 0, 255)","rgb(0, 255, 0)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 255, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(255, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(255, 0, 255)","rgb(0, 0, 255)","rgb(255, 0, 255)","rgb(0, 0, 255)","rgb(0, 0, 255)","rgb(255, 0, 255)","rgb(0, 0, 255)","rgb(255, 0, 255)","rgb(0, 0, 255)","rgb(0, 255, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(255, 192, 203)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(255, 192, 203)","rgb(255, 0, 255)","rgb(255, 192, 203)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(255, 0, 255)","rgb(255, 192, 203)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(255, 192, 203)","rgb(255, 192, 203)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(255, 192, 203)","rgb(255, 0, 255)","rgb(255, 192, 203)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(255, 192, 203)","rgb(255, 0, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(255, 0, 255)","rgb(255, 192, 203)","rgb(255, 0, 255)","rgb(255, 192, 203)","rgb(255, 0, 255)","rgb(255, 192, 203)","rgb(255, 192, 203)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(255, 0, 255)","rgb(0, 255, 255)","rgb(255, 192, 203)","rgb(255, 0, 255)","rgb(0, 255, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(255, 192, 203)","rgb(255, 192, 203)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(255, 192, 203)","rgb(0, 255, 255)","rgb(255, 0, 255)","rgb(255, 192, 203)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(255, 0, 255)","rgb(0, 255, 255)","rgb(255, 0, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(255, 0, 255)","rgb(0, 255, 255)","rgb(255, 0, 255)","rgb(255, 0, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(255, 192, 203)","rgb(0, 255, 255)","rgb(255, 192, 203)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(255, 0, 255)","rgb(0, 255, 255)","rgb(255, 0, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(255, 0, 255)","rgb(0, 255, 255)","rgb(255, 0, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(255, 192, 203)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(255, 192, 203)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(255, 0, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(255, 0, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(255, 0, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(255, 0, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","rgb(0, 255, 255)","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","rgb(255, 0, 255)","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF","#FFFFFF"]}
const matrixName = "chen_alien"

function createMatrix(pixelData, width, height) {
    let matrix = [];
    for (let i = 0; i < width; i++) {
        let row = pixelData.slice(i * height, (i + 1) * height);
        matrix.push(row);
    }
    return matrix;
}


function printMatrix(matrix) {
    const colorMap = {
        "rgb(255, 192, 203)": "newPink",
        "rgb(255, 255, 255)": "newWhite",
        "rgb(255, 0, 0)": "newRed",
        "rgb(0, 255, 0)": "newGreen",
        "rgb(0, 128, 0)": "newDarkGreen",
        "rgb(0, 0, 255)": "newBlue",
        "rgb(255, 0, 255)": "newMagenta",
        "rgb(255, 255, 255)": "newWhite",
        "rgb(0, 0, 0)": "newBlack",
        "rgb(255, 255, 0)": "newYellow",
        "rgb(0, 255, 255)": "newCyan",
        "rgb(255, 165, 0)": "newOrange",
        "rgb(128, 128, 0)": "newOlive",
        "#FFFFFF": "newWhite",
    };

    let result = `const uint16_t ${matrixName}[44][11] = {\n`;
    for (let y = 0; y < matrix.length; y++) {
        result += "  { ";
        for (let x = 0; x < matrix[y].length; x++) {
            const color = matrix[y][x];
            if (!colorMap[color]) {
                throw Error(`Missing color: ${color}`)
            }
            result += colorMap[color] + (x < matrix[y].length - 1 ? ", " : "");
        }
        result += " },\n";
    }
    result += "};";
    console.log(result);
}



printMatrix(createMatrix(test.pixelData, 44,11))
