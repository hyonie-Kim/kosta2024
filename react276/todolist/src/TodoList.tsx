import React, { useState } from 'react';
import { Button, Modal } from 'react-bootstrap';

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
    { id: 4, text: '산책하기', isChecked: false },
    { id: 5, text: '독서하기', isChecked: false },
  ]);

  const [newTodo, setNewTodo] = useState<string>('');

  // 상세정보
  const [showDetail, setShowDetail] = useState<boolean>(false);
  // 타입은 todo 하나임...
  // 초기값은 null.
  // 타입스크립트 공용체..
  // todo 타입 또는 null 2개의 타입 모두 허용
  const [selectedTodo, setSelectedTodo] = useState<Todo | null>(null);

  const hadleCheckboxChange = (itemId: number) => {
    setTodos((prevItems) =>
      prevItems.map((item) =>
        item.id === itemId ? { ...item, isChecked: !item.isChecked } : item
      )
    );
  };

  const addTodo = () => {
    //newTodofmf todos에 추가
    if (newTodo.trim() !== '') {
      // 업데이트
      setTodos([
        ...todos,
        // {newTodos}
        { id: Date.now(), text: newTodo, isChecked: false },
      ]);
    }

    // 업데이트 후 비우기
    setNewTodo('');
  };

  const removeTodo = (id: number) => {
    // 콜백함수 등록
    // filter()에 콜백함수를 등록
    // 필터의 역할은 필더링을함.
    // 내부의 배열 안에서 하나씩 검사를 함
    // user의 첫번째 요소부터 넘어서와서 검사를 한다.
    // todo.id 와 내가 선택한 user.id 와 같지않은것만
    // 모아서 내가 클릭한것만 빼고 다시 재구성함
    // 같으면제외 같지 않은것만 리턴함..
    // 내가 클릭한 애만 제외하고 리렌더링됨
    setTodos(
      todos.filter((user) => {
        return user.id !== id;
      })
    );
  };

  const handleTodoClick = (todo: Todo) => {
    setShowDetail(true);
    setSelectedTodo(todo);
    console.log();
  };

  const handleCloseDetail = () => {
    //setShowDetail를 false로 만들면됨
    setShowDetail(false);
  };
  return (
    <div>
      <div className="container">{title} 🔅</div>
      <p></p>
      <div className="todoInput">
        <input
          type="text"
          placeholder="할일 입력"
          onChange={(e) => {
            setNewTodo(e.target.value);
          }}
          style={{ marginRight: '20px', writingMode: 'horizontal-tb' }}
        />
        <button
          onClick={addTodo}
          // onClick={() => {
          //   // newTodos를 Todos에 추가하기
          //   // 가독성을 위해 콜백함수를 외부로 뺌.
          // }}
        >
          추가
        </button>
      </div>
      <div className="board">
        <ul>
          {todos.map((todo, index) => {
            return (
              <li key={todo.id}>
                <input
                  type="checkbox"
                  onChange={() => {
                    hadleCheckboxChange(todo.id);
                  }}
                />
                {todo.isChecked ? (
                  <del>{todo.text}</del>
                ) : (
                  <span
                    onClick={() => {
                      handleTodoClick(todo);
                    }}
                  >
                    <span>{todo.text}</span>
                  </span>
                )}

                <Button
                  variant=""
                  onClick={() => {
                    removeTodo(todo.id);
                  }}
                >
                  🗑
                </Button>
              </li>
            );
          })}
          {/* <li>{todos[0].text}</li>
          <li>{todos[1].text}</li>
          <li>{todos[2].text}</li> */}
        </ul>
      </div>

      {/* 모달 대화상자 */}
      {
        // 값이 존재하고,
        // hide이벤트가 발생되면 뭔가를 처리함
        // centered가운데 배치
        selectedTodo && (
          <Modal
            show={showDetail}
            onHide={() => {
              handleCloseDetail();
            }}
            centered
          >
            <Modal.Header closeButton>
              <Modal.Title>상세정보</Modal.Title>
            </Modal.Header>
            <Modal.Body>
              {selectedTodo.text}의 자세한 정보를 출력합니다.
              <p>현재날짜: {new Date().toLocaleDateString()}</p>
            </Modal.Body>
          </Modal>
        )
      }
    </div>
  );
};

export default TodoList;
