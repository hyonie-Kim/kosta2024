import React, { useState } from 'react';

type Todo = {
  id: number;
  text: string;
  isChecked: boolean;
};

// 투두리스트 컴포넌트 만들기
const TodoList: React.FC = () => {
  const title: string = '오늘 할일'; // 타입 추정

  // state: 상태관리, 데이터를 동적으로 감시할 수 있다.
  const [todos, setTodos] = useState<Todo[]>([
    { id: 1, text: '공부하기', isChecked: false },
    { id: 2, text: '운동하기', isChecked: false },
    { id: 3, text: '밥먹기', isChecked: false },
    { id: 3, text: '산책하기', isChecked: false },
    { id: 3, text: '독서하기', isChecked: false },
  ]);

  // const hadleCheckboxChange = (itemId: number) => {
  //   setTodos((prevItems)=>
  //     prevItems.map((item)=>
  //     (item.id === itemId)

  //   ));
  // };
  return (
    <div>
      <div className="container">{title}</div>
      <div className="board">
        <ul>
          {todos.map((todo, index) => {
            return (
              <li key={todo.id}>
                <input
                  type="checkbox"
                  onChange={() => {
                    // hadleCheckboxChange(todo.id);
                  }}
                />
                <span>{todo.text}</span>
              </li>
            );
          })}
          {/* <li>{todos[0].text}</li>
          <li>{todos[1].text}</li>
          <li>{todos[2].text}</li> */}
        </ul>
      </div>
    </div>
  );
};

export default TodoList;
