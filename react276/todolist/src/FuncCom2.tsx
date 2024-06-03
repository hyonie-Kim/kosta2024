import React, { useState } from 'react';

// 함수의 리턴 타입
// 프롭스에 들어가는 타입도 필요함

// React.FC< >어떤 형태의 데이터를 전달할지 정한다.

// 타입 또는 인터페이스를 쓴다.
// 타입은 기존에 연관성 있는 것
// 인터페이스는 어떤 새로운 객체를 생성할때
interface MyTestProps {
  weather: string;
  // 컴포넌트의 자식요소를 나타냄
  children: React.ReactNode;
}

// 외부에서 FUncCom 컴포넌트를 호출할때 전달인자를 준다.
// 그럼 div에 출력할수 있음.
// 프롭스는 변수이기때문에 중괄호안에 '표기할수 있음
// 프롭스를 통해서 해당 키값에 접근할수 있음
// 프롭스의 weather props.weather
const FuncCom2: React.FC<MyTestProps> = (props) => {
  return (
    <div>
      {props.children} <br></br>
      오늘의 날씨는 ?? {props.weather} 입니다.
    </div>
  );
};

export default FuncCom2;
