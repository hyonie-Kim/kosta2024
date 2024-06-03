import { useState } from 'react';
import { Button } from 'react-bootstrap';

const Timer: React.FC = () => {
  // 화면에서 변경되는 리렌더링되는 것은 state로 만든다.
  // number타입 초기값은 0
  const [seconds, setSeconds] = useState<number>(0);

  return (
    <div>
      <h4>타이머 : {seconds} 초</h4>
      <Button
        onClick={() => {
          // 타이머 함수
          // 내부에 콜백함수를 넣어줄수 있다.
          // 특정 주기에 따라서 호출되는 함수임
          // 주기는 1초에 한번씩 1000 호출됨
          setInterval(() => {
            setSeconds((prevSeconds) => {
              return prevSeconds + 1;
            });
          }, 1000);
        }}
      >
        시작
      </Button>
    </div>
  );
};

export default Timer;
