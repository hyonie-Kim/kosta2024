function account() {
  console.log('account 함수 진입');
  var savedUser = '정다은';

  account2;
  console.log('account 함수 탈출');
}

function account2() {
  console.log('account2 함수 진입');
  var savedUser = '김종현';

  console.log('account2 함수 탈출');
}
account();
