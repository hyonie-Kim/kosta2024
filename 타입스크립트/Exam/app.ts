function MyName(name: string) {
  console.log(name);
}

MyName('Kim');

let myname = 'lee';
myname = 'Kim';

let str: string = '나는 아이어맨이다.';

// function getInfo(id: number): object {
//   let arr: number[] = [1, 2, 3];
//   return arr;
// }

interface Student {
  studentId?: number;
  studentName?: string;
  age?: number;
  gender?: string;
  completed?: boolean;
  setName: (name: string) => {};
  getName: () => {};
}

// function getInfo(id: number): Student {
//   return { studentId: id, age: 20, gender: 'female', completed: true };
// }

// console.log(getInfo(1120));

// Student 타입의 값을 넘겨받을수 있음
// set은 정보를 넘겨받아서 저장

// 객체 리터럴 셋팅
let std = {
  studentId: 11,
  age: 20,
  gender: 'male',
  completed: true,
};
function setInfo(student: Student): void {}

// setInfo(std);
