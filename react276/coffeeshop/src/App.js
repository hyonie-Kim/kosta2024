import { useState } from 'react';
import './App.css';
import { Button, Navbar, Container, Nav, Row, Col } from 'react-bootstrap';

function App() {
  const [coffees, setCoffee] = useState([
    {
      id: 0,
      prodect: '아메리카노',
      descrtiption: '아메리카노는..',
      price: 2000,
    },
    { id: 1, prodect: '카페라떼', descrtiption: '카페라떼는..', price: 3000 },
    { id: 2, prodect: '돌체라떼', descrtiption: '돌체라떼는..', price: 4500 },
  ]);

  return (
    <div className="App">
      <Navbar bg="dark" data-bs-theme="dark">
        <Container>
          <Navbar.Brand href="#home">CoffeeMate</Navbar.Brand>
          <Nav className="me-auto">
            <Nav.Link href="#home">Home</Nav.Link>
            <Nav.Link href="#features">About</Nav.Link>
            <Nav.Link href="#pricing">BestCoffee</Nav.Link>
            <Nav.Link href="#pricing">Cart</Nav.Link>
            <Nav.Link href="#pricing">Contact</Nav.Link>
          </Nav>
        </Container>
      </Navbar>
      <div className="backBg"></div>
      <Container>
        <Row>
          <Col>
            <img src="../images/coffee1.jpg" alt="" width="100%"></img>
            <h4>{coffees[0]}</h4>
          </Col>
          <Col>
            <img
              src={process.env.PUBLIC_URL + '../images/coffee2.jpg'}
              alt=""
              width="100%"
            ></img>

            <h4>카페라떼</h4>
          </Col>
          <Col>
            <img src="../images/coffee3.jpg" alt="" width="100%"></img>

            <h4>돌체라떼</h4>
          </Col>
        </Row>
      </Container>
    </div>
  );
}

export default App;
