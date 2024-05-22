// 사용자 정의함수
function showMsg() {
  //함수의 내용
  console.log('Hello World');
}

// 내부적으로 T형임..
function Plus(a, b) {
  console.log('두수의합:' + (a + b));
}

Plus(10, 20);
Plus('ABC', 'DEF');
