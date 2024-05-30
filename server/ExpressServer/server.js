const express = require('express');
const app = express();

app.listen(8080, function () {
  console.log('포트 8080으로 서버 대기중..');
});

// book으로 요청 받음
app.get('/book', function (req, res) {
  res.send('Hello!!! 😎, 도서 목록 페이지입니다.');
});

app.get('/', function (req, res) {
  res.send('홈입니다!!👀');
});
