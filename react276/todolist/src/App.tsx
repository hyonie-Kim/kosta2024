import React from 'react';
import './App.css';
import ClassCom from './classCom';
import FuncCom from './FuncCom';
import TodoList from './TodoList';
import Timer from './Timer';
import Clock from './Clock';
import FuncCom2 from './FuncCom2';

function App() {
  // let title = '오늘 할일';
  // const st = {
  //   backgraoundColor: 'aliceblue',
  //   color: 'violet',
  //   fontSize: 40,
  //   padding: 16,
  // };
  return (
    <div className="App">
      <header className="App-header">
        {/* <h1 className="test">{title}</h1>
        <h1 style={st}>{title}</h1>
        <ClassCom></ClassCom>
        <FuncCom></FuncCom> */}

        <TodoList></TodoList>
        {/* <FuncCom></FuncCom> */}
        {/* <Timer></Timer> */}

        <Clock></Clock>
        <FuncCom2 weather="더움">일기예보</FuncCom2>
      </header>
    </div>
  );
}

export default App;
