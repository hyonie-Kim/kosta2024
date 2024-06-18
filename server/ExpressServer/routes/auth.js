var router = require('express').Router();

// 로그인
router.get('/login', function (req, res) {
  console.log(req.session);
  if (req.session.user) {
    // session.user는 세션id
    // 세션유지 = 로그인
    console.log('세션유지');
    res.render('index.ejs', { user: req.session.user });
    // res.redirect('/');
    // res.send('로그인 되었습니다.');
  } else {
    res.render('login.ejs');
  }
});

router.post('/login', function (req, res) {
  console.log(req.body.userId);
  console.log(req.body.userPw);

  mydb
    .collection('account')
    .findOne({ userId: req.body.userId })
    .then((result) => {
      if (result.userPw == sha(req.body.userPw)) {
        req.session.user = req.body;
        console.log('새로운 로그인');
        res.render('index.ejs', { user: req.session.user });
        // res.send('로그인이 완료되었습니다.');
      } else {
        console.log('비밀번호가 틀렸습니다.');
        res.render('login.ejs');
        // res.send('비밀번호가 틀렸습니다.');
      }
    });

  //res.render('login.ejs');
});

const sha = require('sha256');

module.exports = router;
