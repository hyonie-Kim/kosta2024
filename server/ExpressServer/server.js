require('dotenv').config();
/*

// mysql + node.js 접속
let mysql = require('mysql');
// 커넥션 세션생성, 실제 mysql과 연결
// host, user 정보가 들어가야함
let conn = mysql.createConnection({
  host: 'localhost',
  user: 'root',
  password: '123456',
  database: 'myboard', // 스키마 이름을 말함
});

// conn을 가지고 실제 커넥션을 할수 있음
// conn 멤버함수로는 connect멤버함수가 있음,  연동하는것
conn.connect();
// conn.query('select * from post', function (err, rows, fields) {
//   //콜백함수 넣기
//   if (err) throw err;
//   console.log(rows);
// });


*/

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
  app.listen(8080, function () {
    console.log('포트 8080으로 서버 대기중..');
  });
});

const express = require('express');
const app = express();

// app.listen(8080, function () {
//   console.log('포트 8080으로 서버 대기중..');
// });

// book으로 요청 받음
app.get('/', function (req, res) {
  res.send('홈입니다!!👀');
});

app.get('/book', function (req, res) {
  res.send('Hello!!! 😎, 도서 목록 페이지입니다.');
});

app.get('/', function (req, res) {
  res.sendFile(__dirname + '/index.html');
});

// enter라우터를 만듦..
app.get('/enter', function (req, res) {
  res.sendFile(__dirname + '/enter.html');
});

// app.get('/save', function (req, res) {});

app.get('/list', function (req, res) {
  res.send('데이터베이스를 조회합니다.👀');
  mydb
    .collection('post')
    .find()
    .toArray()
    .then((result) => {
      console.log(result);
    });
});
