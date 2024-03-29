const fs = require("fs");

fs.readFile("Hii.txt", "utf-8", function (error, data) {
   if(data)
   console.log(data, ", ", typeof data);
   else
   console.log("Error: ", error);
});

console.log("1 Hii");

console.log(fs.readFileSync('Hii.txt',
{ encoding: 'utf8', flag: 'r' }));;

console.log("2 Hii");

for(let i = 0; i < 10000000000; i++);

console.log("3 Hii");