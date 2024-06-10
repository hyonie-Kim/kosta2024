import { createContext, useState } from 'react';
import { Button, Navbar, Container, Nav, Row, Col } from 'react-bootstrap';
import './App.css';
import bookdata from './data/data';
import { Routes, Route, Link, useNavigate, Outlet } from 'react-router-dom';
import DetailPage from './pages/DetailPage';
import About from './pages/About';
import axios from 'axios';

export let contextStorage = createContext(0);

function App() {
  console.log(bookdata);

  const [books, setBooks] = useState(bookdata);
  let navigate = useNavigate(); // 함수 포인터임,

  const [btnIcon, setBtnIcon] = useState('🔽');
  const [expands, setExpands] = useState(false);
  // 재고량
  let [stock] = useState([1, 2, 3]);

  // const [books] = useState([
  //   {
  //     id: 0,
  //     title: 'MFC',
  //     content: '윈도우 프로그래밍',
  //     price: 35000,
  //     img: '../images/1.jpg',
  //   },
  //   {
  //     id: 1,
  //     title: 'API',
  //     content: 'API 프로그래밍',
  //     price: 35000,
  //     img: '../images/2.jpg',
  //   },
  //   {
  //     id: 2,
  //     title: 'C++',
  //     content: 'C++ 프로그래밍',
  //     price: 35000,
  //     img: '../images/3.jpg',
  //   },
  // ]);
  return (
    <div className="App">
      <Navbar bg="dark" data-bs-theme="dark">
        <Container>
          <Navbar.Brand href="#home">BookStore</Navbar.Brand>
          <Nav className="me-auto">
            {/* <Nav.Link href="/">Home</Nav.Link> */}
            {/* 동적기능*/}
            <Nav.Link
              onClick={() => {
                navigate('/');
              }}
            >
              Home
            </Nav.Link>
            <Nav.Link href="/about">About</Nav.Link>
            <Nav.Link href="/best">BestSeller</Nav.Link>
            <Nav.Link href="/cart">Cart</Nav.Link>
            <Nav.Link href="/contact">Contact</Nav.Link>
            <Nav.Link
              onClick={() => {
                navigate('/detail');
              }}
            >
              Detail
            </Nav.Link>
          </Nav>
        </Container>
      </Navbar>

      <Routes>
        <Route
          path="/detail/:id"
          element={
            <contextStorage.Provider value={{ stock, books }}>
              <DetailPage books={books}></DetailPage>
            </contextStorage.Provider>
          }
        ></Route>
        <Route
          path="/"
          element={
            <div>
              <div className="HomeImg"></div>
              <Container>
                <Row>
                  {books.map((book, i) => (
                    <BookItem book={books[i]}></BookItem>
                    // <Col>
                    //   <img src={book.img} width="50%"></img>
                    //   <h5>{book.title}</h5>
                    //   <p>{book.price}</p>
                    // </Col>
                  ))}
                </Row>
              </Container>
              <Button
                variant="warning"
                onClick={() => {
                  expands === false
                    ? axios
                        .get('https://jamsuham75.github.io/image/data2.json')
                        .then((result) => {
                          console.log(result.data);
                          console.log(books);
                          let copy = [...books, ...result.data];
                          setBooks(copy);
                          setExpands(true);
                          setBtnIcon('🔼');
                        })
                        .catch(() => {
                          console.log('fail');
                        })
                    : window.location.reload();
                  setExpands(false);
                  setBtnIcon('🔽');

                  // window.location.reload();
                }}
              >
                {btnIcon}
                {/* 더보기 */}
              </Button>
            </div>
          }
        ></Route>
        <Route path="/about" element={<About></About>}>
          <Route path="member" element={<div>대표임</div>}></Route>
          <Route path="location" element={<div>서울임</div>}></Route>
        </Route>
        <Route path="*" element={'존재하지 않는 페이지입니다.'}></Route>
      </Routes>
    </div>
  );
}

function BookItem({ book }) {
  let navigate = useNavigate();
  // console.log(book);
  return (
    <Col
      onClick={() => {
        navigate('/detail/' + book.id);
      }}
    >
      <img
        src={process.env.PUBLIC_URL + '../images/' + (book.id + 1) + '.jpg'}
        width="50%"
      ></img>
      {/* <img src={''}></img> */}
      <h5>{book.title}</h5>
      <p>{book.price}</p>
    </Col>
  );
}

export default App;
