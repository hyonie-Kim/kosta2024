import React, { useState } from 'react';

// 투두리스트 컴포넌트 만들기
const TodoList: React.FC = () => {
  const title: string = '오늘 할일'; // 타입 추정

  // state: 상태관리, 데이터를 동적으로 감시할 수 있다.
  const [todos] = useState<string[]>(['공부하기', '운동하기', '밥먹기']);
  return (
    <div>
      <div className="container">{title}</div>
      <ul>
        <li>{todos}</li>
      </ul>
    </div>
  );
};

export default TodoList;
