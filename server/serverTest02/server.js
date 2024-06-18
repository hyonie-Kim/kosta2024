const express = require('express');
const app = express();
const path = require('path');

app.use(express.static(path.join(__dirname, 'client/build')));
app.get('/', function (req, res) {
  res.sendFile(path.join(__dirname, '/client/build/index.html'));
});

app.get('/data', function (req, res) {
  console.log('서버 진입');
  res.json({ data: '서버 데이터 전송' });
});

app.listen(9000, function () {
  console.log('listening on 9000🌈');
});
