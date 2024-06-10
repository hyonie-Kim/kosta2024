require('dotenv').config();

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

// 오브젝트Id 타입캐스팅
const objId = require('mongodb').ObjectId;

const express = require('express');
const app = express();

// body-parser 라이브러리 추가
const bodyParser = require('body-parser');
app.use(bodyParser.urlencoded({ extended: true }));

// EJS 템플릿 사용
app.set('view engine', 'ejs');

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
  res.render('enter.ejs');
  // res.sendFile(__dirname + '/enter.html');
});

// app.get('/save', function (req, res) {});

// enter.html에서 저장 버튼 누르면 아래 라우터를 실행
app.post('/save', function (req, res) {
  // req 프론트엔드에서 전달
  // res 응답
  console.log(req.body.title);
  console.log(req.body.content);
  console.log(req.body.someDate);
  //몽고 DB
  // 데이터 하나만 넣을것임. 이때 오브젝트형식  key,value 형식으로 넣어주면됨.
  // 성공하면  then 내부에서 콜백함수 등록한다.
  // 전달인자로 result를 주고 콜백함수를 줄수 있다.
  mydb
    .collection('post')
    .insertOne({
      title: req.body.title,
      content: req.body.content,
      date: req.body.someDate,
    })
    .then((result) => {
      console.log(result);
      console.log('몽고DB 데이터 저장완료');
    });

  /* 
  //mysql
  let sql = 'insert into post(title, content, created) value(?, ?, now())';
  let params = [req.body.title, req.body.content];
  conn.query(sql, params, function (err, result) {
    if (err) throw err;
    console.log('데이터 저장완료');
  });
*/
  res.send('데이터 저장완료');
});

app.get('/list', function (req, res) {
  // res.send('데이터베이스를 조회합니다.👀');

  mydb
    .collection('post')
    .find()
    .toArray()
    .then((result) => {
      // console.log(result);
      res.render('list.ejs', { data: result });
    });

  // res.sendFile(__dirname + '/list.html');
});

app.post('/delete', function (req, res) {
  // 오브젝트 ID 타입캐스팅
  console.log(req.body._id);
  req.body._id = new objId(req.body._id);

  console.log('변경한 상태의 ObjectID: ', req.body._id);
  mydb
    .collection('post')
    .deleteOne(req.body)
    .then((result) => {
      console.log('result 값 확인:', result);
      console.log('DB 데이터 삭제 완료');
      res.status(200).send(); // 브라우저에 200 성공 전달
    })
    .catch((err) => {
      // 응답 실패
      console.log(err);
      res.status(500).send();
    });
});

app.get('/content/:id', function (req, res) {
  console.log(req.params.id);

  // 문자열 ID에서 오브젝트ID로 타입캐스팅
  req.params.id = new objId(req.params.id);
  // 리스트에서 클릭한 해당 id
  mydb
    .collection('post')
    .findOne({ _id: req.params.id })
    .then((result) => {
      console.log('결과: ', result);
      res.render('content.ejs', { data: result });
    });
});
