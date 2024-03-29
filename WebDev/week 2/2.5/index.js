const express = require("express");
const app = express();

app.get("/", function (req, res) {
   const inputN = req.query.n;
   const b = req.query.b;
   const n = parseInt(inputN);
   let sum = 0;
   for (let i = 1; i < n + 1; i++) sum += i;
   let s = sum.toString() + ",b = " + b;
   res.send(s);
});

app.listen(3000);