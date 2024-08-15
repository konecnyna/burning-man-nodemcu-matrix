const container = document.querySelector('.container')
const rows = 44;
const columns = 11;
const color = document.querySelector('.color')
const resetBtn = document.querySelector('.btn')
const drawBtn = document.querySelector('#drawBtn')
const exprotBtn = document.querySelector('#export')
const textArea = document.getElementById("text")
const colorsDiv = document.getElementById("colors")

let globalColor = document.querySelector('.color').value
let draw = false


window.addEventListener('keydown', function (event) {
  if (event.key === 'z') {

  }
});

function populate(rows, columns) {
  container.style.setProperty('--columns', columns)
  container.style.setProperty('--rows', rows)
  for (let i = 0; i < (rows * columns); i++) {
    const div = document.createElement('div')
    div.classList.add('pixel')

    div.addEventListener('mouseover', function () {
      if (!draw) { return }
      div.style.backgroundColor = globalColor
    })
    div.addEventListener('mousedown', function () {
      div.style.backgroundColor = globalColor
    })

    container.appendChild(div)
  }
}

window.addEventListener("mousedown", function () {
  draw = true
})
window.addEventListener("mouseup", function () {
  draw = false
})

function copy(text) {
  var copyText = document.getElementById("myInput");
  copyText.value = text;
  copyText.select();
  copyText.setSelectionRange(0, 99999);
  navigator.clipboard.writeText(copyText.value);
}

function reset() {
  container.innerHTML = ''
  populate(rows, columns)
}

function exportJson() {
  const defaultColor = "rgb(61, 61, 61)";
  const matrix = [];
  let row = [];

  const colors = [defaultColor];

  [...container.children].forEach((child, index) => {
    if (index > 0 && index % 11 === 0) {
      matrix.push(row)
      row = [];
    }
    const pixelColor = child.style.backgroundColor || defaultColor
    const colorIndex = colors.indexOf(pixelColor);
    if (colorIndex === -1) {
      colors.push(pixelColor)
    }
    row.push(colors.indexOf(pixelColor))
  })
  // Last row.
  matrix.push(row);

  console.log(matrix)
  const json = JSON.stringify({
    colors,
    pixels: matrix
  });
  copy(json)
}

function addColor(newColor) {
  const li = document.createElement("li");
  li.setAttribute("color", newColor);
  li.onclick = () => {
    globalColor = li.getAttribute("color");
    color.value = globalColor;
  }
  li.style.height = "24px"
  li.style.width = "24px"
  li.style.backgroundColor = newColor;
  colorsDiv.appendChild(li);
}

async function drawArray() {
  try {
    const pixels = [...container.children];
    const data = JSON.parse(textArea.value);
    const flatArray = data.pixels.reduce((acc, val) => acc.concat(...val));
    pixels.forEach((pixel, idx) => {
      console.log(`Drawking pixel: ${idx} | color: ${data.colors[flatArray[idx]]}`)
      pixel.style.backgroundColor = data.colors[flatArray[idx]];
    })
  } catch (e) {
    console.warn(e);
  }

}


addColor("rgb(61, 61, 61)")
addColor("#FF0000")
addColor("#00FF00")
addColor("#0000FF")
addColor("#FFFFFF")

resetBtn.addEventListener('click', reset)
exprotBtn.addEventListener('click', exportJson)
drawBtn.addEventListener('click', drawArray)
color.addEventListener('change', function (event) {
  addColor(event.target.value)
});
populate(rows, columns)






