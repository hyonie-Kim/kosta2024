import React from 'react';
import { Button, Modal } from 'react-bootstrap';
type Todo = {
  id: number;
  text: string;
  isChecked: boolean;
};

type TodoModalProps = {
  show: boolean;
  handelClose: () => void;
  todo: Todo | null;
};

//  전달인자가 3개인 프롭스를 받았음...
// 타입을 재정의해야함..
const TodoModal: React.FC<TodoModalProps> = ({ show, handelClose, todo }) => {
  return (
    <Modal
      show={show}
      onHide={() => {
        handelClose();
      }}
      centered
    >
      <Modal.Header closeButton>
        <Modal.Title>상세정보</Modal.Title>
      </Modal.Header>
      <Modal.Body>
        {todo?.text}의 자세한 정보를 출력합니다.
        <p>현재날짜: {new Date().toLocaleDateString()}</p>
      </Modal.Body>
    </Modal>
  );
};

export default TodoModal;
