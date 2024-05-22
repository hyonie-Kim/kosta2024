const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

// rl.question('프로그래밍 언어를 입력하시오. :', (data) => {
//   console.log('가장좋아하는 언어는 ' + data + ' 입니다.');
// });

// 짝수 홀수 판별 알고리즘

// const rl = readline.createInterface({
//   input: process.stdin,
//   output: process.stdout,
// });

// rl.question('정수를 입력하세요 :', (num) => {
//   num = num % 2;
//   if (num) {
//     console.log('홀수');
//   } else {
//     console.log('짝수');
//   }
//   rl.close();
// });

// 나이

// const rl = readline.createInterface({
//   input: process.stdin,
//   output: process.stdout,
// });

// rl.question('나이를 입력하세요 :', (age) => {
//   if (age >= 19 && age <= 100) {
//     console.log('성인');
//   } else if (age >= 0 && age < 19) {
//     console.log('미성년자');
//   } else {
//     console.log('값이 유효하지않음');
//   }
//   rl.close();
// });

// switch case 문 사용

// rl.question('C 드라이브를 포맷하시겠습니까? :', (ch) => {
//   switch (ch) {
//     case 'y':
//       console.log('예, 드라이브를 포맷하겠습니다.');
//       break;
//     case 'n':
//       console.log('아니오, 드라이브를 포맷하겠습니다.');
//       break;
//     default:
//       console.log('유효하지 않은 문자입니다.');
//       break;
//   }
//   rl.close();
// });

// 커피 선택하기

rl.question('커피를 선택하세요 :', (coffee) => {
  switch (coffee) {
    case '아메리카노':
      console.log('아메리카노');
      break;
    case '카페라떼':
      console.log('카페라떼');
      break;
    case '헤이즐넛':
      console.log('헤이즐넛');
      break;
    default:
      console.log('메뉴에 없습니다.');
      break;
  }
  rl.close();
});

// 반복문
