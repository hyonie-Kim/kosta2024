// import './App.css';
import { Component } from 'react';

// function App() {
//   return (
//     <div className="App">
//       <header className="App-header">Hello React!</header>
//     </div>
//   );
// }

// 상속 받은 클래스형 컴포넌트
class App extends Component {
  render() {
    return (
      <div className="App">
        <Subject />
        <Menu />
        <Content />
      </div>
    );
  }
}

export class Subject extends Component {
  render() {
    return (
      <header>
        <h1>FrontEnd</h1>
      </header>
    );
  }
}

export class Menu extends Component {
  render() {
    return (
      <nav>
        <ul>
          <li>
            <a href="">HTML</a>
          </li>
          <li>
            <a href="">CSS</a>
          </li>
          <li>
            <a href="">JavaScript</a>
          </li>
        </ul>
      </nav>
    );
  }
}

export class Content extends Component {
  render() {
    return (
      <description>
        <h2>HTML이란</h2>
        HTML is Hypertext Markup Language
      </description>
    );
  }
}

export default App;
