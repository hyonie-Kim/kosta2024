// 컴포넌트 만들기

import { useCallback, useEffect, useMemo, useState } from 'react';

// function useEffectTest() {
//   const [count, setCount] = useState(0);

//   // []는 count가 업데이트 될때만, useEffect를 탐
//   useEffect(() => {
//     const handleButtonClick = () => {
//       console.log('클릭');

//       // prev에 이전 카운트 값이 들어오고, 이전값을 받아서 1씩 증가
//       setCount((prev) => prev + 1);
//     };

//     const button = document.getElementById('incrementButton');
//     button.addEventListener('click', handleButtonClick);

//     return () => {
//       button.removeEventListener('click', handleButtonClick);
//     };
//   }, [count]);

//   return (
//     <div>
//       <button id="incrementButton">증가</button>
//       <p>Count: {count}</p>
//     </div>
//   );
// }

// export default useEffectTest;

// function useMemoTest() {
//   const [number, setNumber] = useState(1);
//   const [dark, setDark] = useState(false);

//   const doubleNumber = useMemo(() => {
//     return slowFunction(number);
//   }, [number]);

//   const themeStyle = useMemo(() => {
//     return {
//       backgroundColor: dark ? 'black' : 'white',
//       color: dark ? 'white' : 'black',
//     };
//   }, [dark]);

//   return (
//     <div>
//       <input
//         type="number"
//         value={number}
//         onChange={(e) => {
//           // 타입 캐스팅
//           setNumber(parseInt(e.target.value));
//         }}
//       ></input>
//       <button
//         onClick={() => {
//           return setDark((prev) => !prev);
//         }}
//       >
//         테마변경
//       </button>
//       <div style={themeStyle}>{doubleNumber}</div>
//     </div>
//   );
// }

// function slowFunction(num) {
//   console.log('slow function');
//   for (let i = 0; i < 100000; i++) {}
//   return num * 2;
// }

// export default useMemoTest;

//usecallback은 함수기준

// function useCallbackTest() {
//   let [count, setCount] = useState(0);

//   const handleButtonClick = useCallback(() => {
//     setCount((prev) => prev + 1);
//   }, []);

//   return (
//     <div>
//       <button onClick={handleButtonClick}>증가</button>
//       <p>Count: {count}</p>
//     </div>
//   );
// }

// export default useCallbackTest;
