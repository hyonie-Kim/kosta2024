console.log('긴급출동' + 119);
console.log(+'1024' + 1);
console.log(+true);
console.log(+false);
console.log('10' - 2);

// +=, -=. *=, /= 복합할당연산자

var a = 3;
a += 2;
console.log(a);

// 일치연산자, 동등 연산자
var size = 1024;

// 조건부 연산자
var age = 15;
var result = age >= 19 ? '성인입니다.' : '더 자라렴!';
console.log(result);
// 논리 연산자
// &&, ||, ! C, C#, java 다 동일함
console.log(true && true);
console.log(true && false);

var id = 'admin';
var pw = '1234';

var result = id == 'admin' && pw == '1234' ? '로그인됨' : '아이디또는 비번틀림';
console.log(result);

var age = 30;
var result = age > 65 || age < 7 ? '지원 대상입니다.' : '지원대상이 아님';
console.log(result);

//  부정 연산자
console.log(!false);
console.log(!0);

// nullish 병합연산자 '??': 유효성 체크

// 연산자 우선순위 : +, -, &&(논리연산자), ||, < >(비교연산자), ()괄호, [], {}, =
// 여러개의 연산자들이 우선순위가 있음..
// 2 * (3+4)
