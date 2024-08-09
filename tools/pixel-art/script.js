const defaultSize = { width: 44, height: 11 };
const colors = [
    '#000000', '#FFFFFF', '#FF0000', '#00FF00', '#0000FF', '#FFFF00',
    '#FF00FF', '#00FFFF', '#800000', '#808000', '#008000', '#800080',
    '#808080', '#C0C0C0', '#FFA500', '#FFC0CB'
];
let selectedColor = colors[0];
let matrixSize = { ...defaultSize };

document.addEventListener('DOMContentLoaded', () => {
    createColorPalette();
    createPixelArtMatrix(matrixSize.width, matrixSize.height);

    document.getElementById('resize-btn').addEventListener('click', () => {
        const size = parseInt(document.getElementById('matrix-size').value, 10);
        matrixSize = { width: size, height: Math.ceil(size / 4) };
        createPixelArtMatrix(matrixSize.width, matrixSize.height);
    });

    document.getElementById('save-btn').addEventListener('click', saveAsJSON);
});

function createColorPalette() {
    const palette = document.getElementById('color-palette');
    colors.forEach(color => {
        const swatch = document.createElement('div');
        swatch.className = 'color-swatch';
        swatch.style.backgroundColor = color;
        swatch.addEventListener('click', () => {
            selectedColor = color;
        });
        palette.appendChild(swatch);
    });
}

function createPixelArtMatrix(width, height) {
    const container = document.getElementById('pixel-art-container');
    container.style.gridTemplateColumns = `repeat(${width}, 20px)`;
    container.innerHTML = '';

    for (let i = 0; i < width * height; i++) {
        const pixel = document.createElement('div');
        pixel.className = 'pixel';
        pixel.addEventListener('click', () => {
            pixel.style.backgroundColor = selectedColor;
        });
        container.appendChild(pixel);
    }
}

function saveAsJSON() {
    const pixels = Array.from(document.getElementsByClassName('pixel'));
    const pixelData = pixels.map(pixel => pixel.style.backgroundColor || '#FFFFFF');
    const jsonData = JSON.stringify({ matrixSize, pixelData });
    const blob = new Blob([jsonData], { type: 'application/json' });
    const url = URL.createObjectURL(blob);
    const a = document.createElement('a');
    a.href = url;
    a.download = 'pixel-art.json';
    a.click();
    URL.revokeObjectURL(url);
}