const container = document.querySelector('.container')
const rows = 44;
const columns = 11;
const color = document.querySelector('.color')
const resetBtn = document.querySelector('.btn')
const exprotBtn = document.querySelector('#export')

let draw = false

function populate(rows, columns) {

  container.style.setProperty('--columns', columns)
  container.style.setProperty('--rows', rows)
  for (let i = 0; i < (rows * columns); i++) {
    const div = document.createElement('div')
    div.classList.add('pixel')

    div.addEventListener('mouseover', function () {
      if (!draw) { return }
      div.style.backgroundColor = color.value
    })
    div.addEventListener('mousedown', function () {
      div.style.backgroundColor = color.value
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

function reset() {
  container.innerHTML = ''
  populate(rows, columns)
}

function exportJson() {
  const data = [...container.children];
  const colors = [...new Set(data.map(item => item.style.backgroundColor || 0))]

  const matrix = [];
  let row = [];
  data.forEach((child, index) => {
    if (index % 11) {
      matrix.push(row)
      row = [];
    }
    const pixelColor = child.style.backgroundColor
    row.push(colors.find((color,index) => {
      if (color === pixelColor) {
        return index;
      }
      return index
    }))
  })

  
  document.getElementById("text").value = JSON.stringify(matrix, null, 2);
}

resetBtn.addEventListener('click', reset)
exprotBtn.addEventListener('click', exportJson)
populate(rows, columns)