// I have no fucking clue what im doing lets get this breads

const fs = require('fs');
const path = require('path')
const headerFolders = '/../headers';

// /* This code lists all code files inside /headers/ */
// fs.readdirSync(__dirname + headerFolders).forEach(file => {
//     console.log(file);
// });

// /* This code lists all code files with the term "UI" inside /headers/ */
// fs.readdirSync(__dirname + headerFolders).forEach(file => {
//     if(file.includes("UI")) {
//         console.log(file);
//     }
// });

// /* This code lists all code files starting with the term "UI" inside /headers/ */
// fs.readdirSync(__dirname + headerFolders).forEach(file => {
//     if(file.startsWith("UI")) {
//         console.log(file);
//     }
// });

// /* This code lists the contents of all files starting with "UI" in /headers/ */
// fs.readdirSync(__dirname + headerFolders).forEach(file => {
//     if(file.startsWith("UI")) {
//         var contents = fs.readFileSync(`${__dirname}/../headers/${file}`, 'utf8');
//         console.log(contents)   
//     }
// });