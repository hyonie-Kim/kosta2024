// 변수

// function myTest() {
//   if (true) {
//     var x = 100;
//   }
//   var x = 50;
//   console.log(x);
// }

// myTest();

// 템플릿 문자열
const name = '김세현';
const age = 20;

const height = 165.5;

console.log(
  'My name is ' +
    name +
    '\n' +
    'My Age is ' +
    age +
    '\n' +
    'My height is ' +
    height
);
console.log('백틱 템플릿을 이용한 개행');
console.log(`
My name is ${name}
My Age is ${age}
My height is ${height}
      `);

// 템플릿 문자열 안에서 따옴표 표기
const say = `안녕맨은 나이게 이렇게 말했다. "안녕"`;
const intro = `I'm a programmer`;
console.log(say);
console.log(intro);
