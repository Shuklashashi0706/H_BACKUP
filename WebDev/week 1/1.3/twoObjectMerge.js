let obj1 = {
   key1: 1,
   key2: 2,
   key3: 3,
};
let obj2 = {
   key4: 4,
   key5: 5,
   key6: 6,
};
Object.assign(obj1, obj2);
console.log(obj1);
let obj = Object.assign({}, obj1, obj2);
console.log(obj);
