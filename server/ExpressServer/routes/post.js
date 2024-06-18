var router = require('express').Router();

// app의 역할을 router가 함
// app.get 을 router.get
router.get('/list', function (req, res) {
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

module.exports = router;
