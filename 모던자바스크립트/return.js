// function plus(a, b) {
//   return a + b;
// }

// var result = plus(10, 20);
// console.log(result);

// function Week() {
//   console.log('Mon');
//   console.log('Tue');
//   console.log('Wed');
//   return;
//   console.log('Thr');
// }

// Week();

// 함수 표현식
function nickName() {
  console.log('효니');
}

nickName();

nickName = function () {
  console.log('지츄');
};

nickName();

var userName = nickName;
