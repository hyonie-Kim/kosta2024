var router = require('express').Router();

// MongoDB 연동
let mydb;
// 몽고 DB 접속
const mongoClient = require('mongodb').MongoClient;
mongoClient.connect(process.env.DB_URL).then((client) => {
  console.log('몽고DB 접속🌈');
  mydb = client.db('myboard');
  // toArray - 배열 형태로 묶으라는 것..
  // then 성공
  // mydb
  //   .collection('post')
  //   .find()
  //   .toArray()
  //   .then((result) => {
  //     console.log(result);
  //   });
});

// enter라우터를 만듦..
router.get('/enter', function (req, res) {
  res.render('enter.ejs');
  // res.sendFile(__dirname + '/enter.html');
});

module.exports = router;
