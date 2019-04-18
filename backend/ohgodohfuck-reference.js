// I have no fucking clue what im doing lets get this breads

const testFolder = '../headers/';
const fs = require('fs');

fs.readdirSync(testFolder).forEach(file => {
  console.log(file);
});