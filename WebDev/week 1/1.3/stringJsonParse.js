let P1 = {
   name:"Hari",
   age:19
}
let P1S = JSON.stringify(P1);
let P1J = JSON.parse(P1S);
console.log(P1S, typeof P1S);
console.log(P1J, typeof P1J);