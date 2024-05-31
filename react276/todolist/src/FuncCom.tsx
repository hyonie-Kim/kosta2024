import React, { useState } from 'react';

const FuncCom = () => {
  const [fruits, setFruit] = useState(['apple', 'banana', 'orange']);

  //함수형 컴포넌트
  return (
    <div>
      <button
        onClick={() => {
          let copy = fruits;
          copy[0] = 'grape';
          setFruit(copy);
        }}
      >
        수정
      </button>
      <ul>
        {fruits.map((fruit, index) => (
          <li key={index}>{fruit}</li>
        ))}

        {/* <li>{fruits[1]}</li>
        <li>{fruits[2]}</li> */}
      </ul>
    </div>
  );
};

export default FuncCom;
