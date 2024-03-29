const express = require("express");
const app = express();
// app.get('/',function(req, res){
//    // res.send('Hello World');
//    res.send('<h1>HEADING</h1>');
// });
// app.get('/Hello/Bro',function(req, res){
//    res.send('<h1>HEADING</h1>');
// });

app.use(express.json());
app.post("/", function (req, res) {
   // console.log(req.headers);
   res.send({
      msg: "Hello",
   });
   console.log(req.body);
});

const port = 3000;
app.listen(port);
