// let d = new Date();
// console.log(Math.round(d.getTime() / (1000 * 60 * 60 * 24 * 365) + 1970)); // time in millisecs from 1970

// console.log(d.getDate());
// console.log(d.getMonth() + 1); // months are zero indexed
// console.log(d.getHours());
// console.log(d.getMinutes());
// console.log(d.getSeconds());
// console.log(d.getMilliseconds());
// console.log(d.getFullYear());
// console.log(d.getYear() + 1900);

function run1000times()
{
   for(let i = 0; i < 100000000; i++);
}
let timeBef = (new Date()).getTime();
run1000times();
let timeAft = (new Date()).getTime();
console.log(timeAft - timeBef);