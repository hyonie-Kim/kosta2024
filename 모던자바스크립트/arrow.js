// function plus(a, b) {
//   return a + b;
// }

let plus = (a, b) => {
  return a + b;
};
let result = plus(10, 20);
console.log(result);

// 비구조화 할당 (구조분해할당)
const color = ['red', 'green', 'blue'];
let [r, g, b] = color; // 배열의 구조분해

console.log(r);
console.log(g);
console.log(b);
