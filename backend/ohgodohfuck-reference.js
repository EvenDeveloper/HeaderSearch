// I have no fucking clue what im doing lets get this breads

const fs = require('fs');

/* This code lists all code files inside /headers/ */
const headerFolders = '../headers/';

fs.readdirSync(headerFolders).forEach(file => {
    console.log(file);
});

/* This code lists all code files with the term "UI" inside /headers/ */
fs.readdirSync(headerFolders).forEach(file => {
    if(file.includes("UI")) {
        console.log(file);
    }
});

/* This code lists all code files starting with the term "UI" inside /headers/ */
fs.readdirSync(headerFolders).forEach(file => {
    if(file.startsWith("UI")) {
        console.log(file);
    }
});