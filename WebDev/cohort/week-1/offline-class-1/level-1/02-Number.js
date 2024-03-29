// function explainParseInt(value) {
//   console.log("Original Value:", value, typeof value);
//   let result = parseInt(value);
//   console.log("After parseInt:", result, typeof result);
// }

// Example Usage for parseInt
// explainParseInt("42");
// explainParseInt("42px");
// explainParseInt("3.14");
// explainParseInt("3.62");

function explainParseFloat(value) {
  console.log("Original Value:", value, typeof value);
  let result = parseFloat(value);
  console.log("After parseFloat:", result, typeof result);
}

// Example Usage for parseFloat
explainParseFloat("3.14");
explainParseFloat("42");
explainParseFloat("42px");
