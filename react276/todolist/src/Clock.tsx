import { useEffect, useState } from 'react';

// 시계 만들기
const Clock: React.FC = () => {
  // 화면에서 변경되는 리렌더링되는 것은 state로 만든다.
  // number타입 초기값은 0
  const [time, setTime] = useState(new Date());

  // 1. state로 변수 선언하기 time, setTime
  // 2. useState<타입>();
  // 3. 날짜 객체를 가져옴
  //  new Date를 생성해서 멤버함수를 통해서 값을 가져옴
  // setInterval이 큰 부하를 주지는 않는다. 그래서 큰 문제는 없지만,
  // useEffct를 사용해서 콜백함수를 입력, 비동기적으로 사용

  useEffect(() => {
    // 백그라운드로 동작할수 있음
    // 1초마다 새 시간을 업데이트 하도록함
    const intervalid = setInterval(() => {
      setTime(new Date());
    }, 1000);

    // useEffect를 나갈때,
    return () => {
      // 해당 타이머를 삭제해줌
      clearInterval(intervalid);
    };
    // useEffect로 감싼 끝에는 []
    // 해당 state가 변경됬을때만 useEffect내부를 실행하라는 의미.
  }, []);

  // setInterval(() => {
  //   setTime(new Date());
  // }, 1000);
  return (
    <div className="clock">
      <h6>현재 시간 : {time.toLocaleTimeString()}</h6>
    </div>
  );
};

export default Clock;
