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
  app.listen(process.env.PROT, function () {
    console.log('포트 8080으로 서버 대기중..');
  });
});

// 오브젝트Id 타입캐스팅
const objId = require('mongodb').ObjectId;

const express = require('express');
const app = express();

//const dotenv = require('dotenv').config();

// multer 라이브러리
let multer = require('multer');
let storagre = multer.diskStorage({
  destination: function (req, res) {
    done(null, './public/image');
  },
  filename: function (req, file, done) {
    done(null, file.originalname);
  },
});

let upload = multer({ storage: storagre });

// body-parser 라이브러리 추가
const bodyParser = require('body-parser');
app.use(bodyParser.urlencoded({ extended: true }));

// cookie-parser 라이브러리 추가
const cookieParser = require('cookie-parser');
app.use(cookieParser('sdsadas'));

// 세션 라이브러리 추가
const session = require('express-session');
const { renderFile } = require('ejs');
app.use(
  session({
    secret: 'sdsdadfasf',
    resave: false, // 세션을 다시 저장
    saveUninitialized: true,
  })
);

// EJS 템플릿 사용
app.set('view engine', 'ejs');

// 정적파일 라이브러리 추가
// app.use(express.static('public'));

app.use('/public', express.static('public'));

app.use('/', require('./routes/post.js'));
app.use('/', require('./routes/add.js'));
app.use('/', require('./routes/auth.js'));

// app.listen(8080, function () {
//   console.log('포트 8080으로 서버 대기중..');
// });

// book으로 요청 받음
// app.get('/', function (req, res) {
//   res.send('홈입니다!!👀');
// });

app.get('/cookie', function (req, res) {
  let milk = parseInt(req.signedCookies.milk) + 1000;
  if (isNaN(milk)) {
    milk = 0;
  }

  res.cookie('milk', milk, { signed: true }); // cookie(키,값) 형태로 저장됨
  // 브라우저에 쿠키 정보 send함
  //res.send('product: ' + milk + '원');
});

//세션 요청
app.get('/session', function (req, res) {
  if (isNaN(req.session.milk)) {
    req.session.milk = 0;
  }
  req.session.milk = req.session.milk + 1000;
  res.send('product: ' + req.session.milk + '원');
});

app.get('/book', function (req, res) {
  res.send('Hello!!! 😎, 도서 목록 페이지입니다.');
});

app.get('/', function (req, res) {
  res.render('index.ejs', { user: '' });
  // res.sendFile(__dirname + '/index.html');
});

// app.get('/save', function (req, res) {});

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

// 수정하기
app.get('/edit/:id', function (req, res) {
  console.log(req.params.id);

  req.params.id = new objId(req.params.id);
  // 리스트에서 클릭한 해당 id
  mydb
    .collection('post')
    .findOne({ _id: req.params.id })
    .then((result) => {
      console.log('결과: ', result);
      res.render('edit.ejs', { data: result });
    });
});

app.post('/edit', function (req, res) {
  console.log('ttt수정', req.body);
  req.body.id = new objId(req.body.id);
  console.log('ididididid', req.body.id);
  // updateOne
  // 첫번째 업데이트할 유니크한 아이디
  // 두번째 set 옵션의 역할은 기존 데이터를 현재 데이터로 덮어씌움..
  mydb
    .collection('post')
    .updateOne(
      { _id: req.body.id },
      {
        $set: {
          title: req.body.title,
          content: req.body.content,
          date: req.body.someDate,
        },
      }
    )
    .then((result) => {
      console.log(result);
      console.log('몽고DB 데이터 수정완료');
      res.redirect('list');
    })
    .catch((err) => {
      console.log(err);
    });
});

app.get('/logout', function (req, res) {
  console.log('로그아웃');
  req.session.destroy(); // 세션 삭제
  // res.redirect('/');
  res.render('index.ejs', { user: null });
});

app.get('/signup', function (req, res) {
  console.log('회원가입');
  res.render('signup.ejs');
});

app.post('/signup', function (req, res) {
  console.log('회원가입정보', req.body);
  res.render('signup.ejs');

  mydb
    .collection('account')
    .insertOne({
      userId: req.body.userId,
      userPw: req.body.userPw,
      userGroup: req.body.userGroup,
      userEmail: req.body.userEmail,
    })
    .then((result) => {
      console.log(result);
      console.log('회원가입 성공');
      res.redirect('/');
    });
});

let imagepath = '';
app.post('/photo', upload.single('picture'), function (req, res) {
  console.log(req.file.path);
  imagepath = '\\' + req.file.path;
});

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
      path: imagepath,
    })
    .then((result) => {
      console.log(result);
      console.log('몽고DB 데이터 저장완료');
      res.redirect('/list');
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
  // res.send('데이터 저장완료');
});

app.get('/search', function (req, res) {
  console.log(req.query);
  mydb
    .collection('post')
    .find({ title: req.query.value })
    .toArray()
    .then((result) => {
      console.log(result);
      res.render('sresult.ejs', { data });
    });
});
