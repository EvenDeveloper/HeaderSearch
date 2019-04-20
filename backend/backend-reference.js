const fs = require('fs');
const path = require('path')
const headerFolders12 = '/../headers/12.1.2';
const headerFolders11 = '/../headers/11.3.1';
const headerFolders102 = '/../headers/10.2';
const headerFolders10 = '/../headers/10.0';
const headerFolders93 = '/../headers/9.3';
const headerFolders9 = '/../headers/9.0';
const headerFolders84 = '/../headers/8.4';
const headerFolders81 = '/../headers/8.1';
const headerFolders7 = '/../headers/7.0';
const headerFolders6 = '/../headers/6.0';
const headerFolders51 = '/../headers/5.1';


/* BIG IMPORTANT NOTES

Essentially how we have headers is /headers/version. This means whatever code you use below needs to be modified
for the version that is being searched. Before commiting any changes, make sure you search the file and
replace whatever version you copy pasted from

Check the comments above each snippet so you know what the actual hell is going on

- jacc :)

*/

// /* This code lists all code files inside /headers/ */
// fs.readdirSync(__dirname + headerFolders12).forEach(file => {
//     console.log(`12.1.2: ${file}`);
// });

// /* This code lists all code files with the term "UI" inside /headers/ */
// fs.readdirSync(__dirname + headerFolders).forEach(file => {
//     if(file.includes("UI")) {
//         console.log(file);
//     }
// });

/* I fucking hate myself for this code <3 */
var stream = fs.createWriteStream("my_file.json");
stream.once('open', function (fd, err) {
  stream.write('{"12.1.2":[\n')
  fs.readdirSync(__dirname + headerFolders12).forEach(file => {
    stream.write(`"${file}",\n`);
  })
  stream.write('], "11.3.1": [\n')
  fs.readdirSync(__dirname + headerFolders11).forEach(file => {
    stream.write(`"${file}",\n`);
  })
  stream.write('], "10.2": [\n')
  fs.readdirSync(__dirname + headerFolders102).forEach(file => {
    stream.write(`"${file}",\n`);
  })
  stream.write('], "10.0": [\n')
  fs.readdirSync(__dirname + headerFolders10).forEach(file => {
    stream.write(`"${file}",\n`);
  })
  stream.write('], "9.3": [\n')
  fs.readdirSync(__dirname + headerFolders93).forEach(file => {
    stream.write(`"${file}",\n`);
  })
  stream.write('], "9.0": [\n')
  fs.readdirSync(__dirname + headerFolders9).forEach(file => {
    stream.write(`"${file}",\n`);
  })
  stream.write('], "8.4": [\n')
  fs.readdirSync(__dirname + headerFolders84).forEach(file => {
    stream.write(`"${file}",\n`);
  })
  stream.write('], "8.1": [\n')
  fs.readdirSync(__dirname + headerFolders81).forEach(file => {
    stream.write(`"${file}",\n`);
  })
  stream.write('], "7.0": [\n')
  fs.readdirSync(__dirname + headerFolders7).forEach(file => {
    stream.write(`"${file}",\n`);
  })
  stream.write('], "6.0": [\n')
  fs.readdirSync(__dirname + headerFolders6).forEach(file => {
    stream.write(`"${file}",\n`);
  })
  stream.write('], "5.1": [\n')
  fs.readdirSync(__dirname + headerFolders51).forEach(file => {
    stream.write(`"${file}",\n`);
  })
  stream.write(']}\n')
});


// /* This code lists the contents of all files starting with "UI" in /headers/ */
// fs.readdirSync(__dirname + headerFolders).forEach(file => {
//     if(file.startsWith("UI")) {
//         var contents = fs.readFileSync(`${__dirname}/../headers/${file}`, 'utf8');
//         console.log(contents)   
//     }
// });

/* This code lists the contents of all files starting with "UI" in /headers/ */
fs.readdirSync(__dirname + headerFolders12).forEach(file => {
  console.log(file)
});
