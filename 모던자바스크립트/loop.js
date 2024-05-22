// 반복문 * 10번찍기
for (var i = 0; i < 10; i++) {
  console.log('*');
}

// 2의 배수만 출력
for (var i = 2; i < 101; i += 2) {
  console.log(i);
}

// 1부터 10까지의 합 - 누적 값
// 합을 저장하는 변수
var sum = 0;
for (var i = 1; i < 11; i++) {
  sum += i;
}
console.log('sum의값: ' + sum);

// 배터리 충전 상태

for (var i = 10; i < 101; i++) {
  console.log('충전중: ' + i + '%');
}
console.log('충전 완료');

// 무한 루프 사용
/*
var i = 0;
for (; ;) {
    console.log('충전중: ' + i + '%');
    i++;
  }
*/

// 무한 루프 빠져나오는 조건 추가+

// var i = 0;
// for (;;) {
//   if (i > 100) break;
//   console.log('충전중: ' + i + '%');
//   i++;
// }

// 반복문을 통한 배열 핸들링
// 정석배열
//var arr = new Array();
// 약식 배열
var arr = ['자바스크립트', 'C언어', '파이썬'];
arr.push('ASP.NET');
arr.push('C#.NET');

for (var i = 0; i < arr.length; i++) {
  console.log(arr[i]);
}

// while문 사용
var i = 0;
console.log('while문 출력');
while (i < arr.length) {
  console.log(arr[i]);
  i++;
}

// 사용자로부터 단수를 입력받고 해당 단수를 출력
// while문으로 출력
// const readline = require('readline');

// const rl = readline.createInterface({
//   input: process.stdin,
//   output: process.stdout,
// });

// rl.question('단수를 입력하세요.: ', (dan) => {
//   var i = 1;
//   console.log(dan + ' 단');
//   while (i < 10) {
//     console.log(dan + 'x' + i + '=' + dan * i);
//     i++;
//   }
//   rl.close();
// });

// break
// var value = 0;
// while (true) {
//   if (value > 100) break;
//   console.log('value의 값: ' + value);
//   value++;
// }
// console.log('value는 100보다 크다.');

// continue문으로 홀수값만 출력

var value = 0;
while (value < 10) {
  value++;
  // 0일때 continue
  if (value % 2 == 0) continue;
  console.log('value의 값 : ' + value);
}

// while문 이용해서 2-9단까지 출력

// var dan = 2;

// while (dan < 10) {
//   var i = 1;
//   while (i < 10) {
//     console.log(dan + 'x' + i + '=' + dan * i);

//     i++;
//   }

//   dan++;
// }

// 2단부터 5단까지만 출력하고, 6단에서 빠져나감

var dan = 2;

while (dan < 10) {
  if (dan > 5) break;

  var i = 1;
  while (i < 10) {
    console.log(dan + 'x' + i + '=' + dan * i);

    i++;
  }

  dan++;
}
