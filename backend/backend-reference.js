const fs = require('fs');
const path = require('path')
const headerFolders12 = '/../headers';

/* BIG IMPORTANT NOTES

Essentially how we have headers is /headers/version. This means whatever code you use below needs to be modified
for the version that is being searched. Before commiting any changes, make sure you search the file and
replace whatever version you copy pasted from

Check the comments above each snippet so you know what the actual hell is going on

- jacc :)

*/

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