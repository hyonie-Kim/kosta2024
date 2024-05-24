// function account() {
//   console.log('account 함수 진입');
//   var savedUser = '정다은';

//   account2;
//   console.log('account 함수 탈출');
// }

// function account2() {
//   console.log('account2 함수 진입');
//   var savedUser = '김종현';

//   console.log('account2 함수 탈출');
// }
// account();

var userName = '김세현';
var userPw = '1234';

function account(userId, userpw) {
  console.log(userId);
  console.log(userpw);

  var saveName = '김세현';
  var savePw = '1111';

  userpw = userpw || '1111';

  if (userId === saveName) {
    console.log('반갑습니다.');
  }
}
