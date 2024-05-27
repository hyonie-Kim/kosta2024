// 객체를 생성하는 방법

// 객체의 구성: 키, 값 사전
let dic = new Object();

dic.boy = '소년';
dic.girl = '소녀';
dic.friend = '친구';

console.log(dic.boy);
console.log(dic.girl);
console.log(dic.friend);

// 객체 리터럴
let obj = {
  boy: '소년',
  girl: '소녀',
  friend: '친구',
  present: '현재',
};

console.log(obj.girl);
console.log(obj.present);

// obj.apple = '사과';
// obj.ten = 10;

// console.log(obj.apple);

// delete obj.girl;
// console.log(obj.girl);

obj.present = '선물';
console.log(obj.present);

// 객체의 프로퍼티와 메소드

// const readline = require('readline');

// const rl = readline.createInterface({
//   input: process.stdin,
//   output: process.stdout,
// });

// rl.question('찾을 단어를 선택하세요. : ', function (key) {
//   let word = key;
//   console.log(obj[word]);

//   rl.close();
// });

// 단축 프로퍼티
