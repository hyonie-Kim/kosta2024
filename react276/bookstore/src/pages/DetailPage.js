import { Component, useContext, useEffect, useState } from 'react';
import { Button, Container, Row, Col, Nav } from 'react-bootstrap';
import { useParams } from 'react-router-dom';
import mystyle, { styled } from 'styled-components';
import { contextStorage } from '../App';

function DetailPage(props) {
  // 1. 도서이미지
  // 2. 도서명
  // 3. 도서 내용
  // 4. 도서가격
  // 5. 카트 담기 버튼
  // console.log('booksProps', props);
  let [discount, setDiscount] = useState(true);
  let [tab, setTab] = useState(0);

  let { id } = useParams();
  console.log('id값', id);
  let findBook = props.books.find(function (book) {
    //console.log(book);
    return book.id == id;
  });

  //   let RedBtn = mystyle.button`
  //     background: red;
  //     color: white;
  //     padding: 20px;
  //     margin:10px
  //   `;

  //   let BlueBtn = mystyle.button`
  //   background: blue;
  //   color: white;
  //   padding: 20px;
  //   margin:10px
  // `;

  //   let TeamBtn = mystyle.button`
  //   background: ${(props) => props.bg};
  //   color: white;
  //   padding: 20px;
  //   margin:10px
  // `;

  // setTimeout(() => {
  //   console.log('시간이 다 되었습니다.');
  //   setDiscount(false);
  // }, 3000);

  let timer;
  useEffect(() => {
    const fetchData = async () => {
      // for (let i = 0; i < 1000; i++) {
      //   console.log('테스트');
      // }

      timer = setTimeout(() => {
        setDiscount(false);
      }, 3000);
    };
    fetchData();

    return () => {
      clearTimeout(timer);
    };
  }, []);

  return (
    <Container>
      {discount === true ? <div className="discount">50% 할인 특가</div> : null}
      <Row>
        <Col>
          <img
            src={
              process.env.PUBLIC_URL + '/images/' + (parseInt(id) + 1) + '.jpg'
            }
            width="50%"
          ></img>
        </Col>
        <Col>
          {/* <img src={book.img} width="50%"></img> */}
          <h5>{findBook.title}</h5>
          <h6>{findBook.content}</h6>
          <p>{findBook.price}</p>

          <Button>카트에 담기</Button>
        </Col>
      </Row>
      {/* <RedBtn>레드버튼</RedBtn>
      <BlueBtn>블루버튼</BlueBtn> */}
      {/* 
      <TeamBtn bg="red">팀버튼</TeamBtn>
      <TeamBtn bg="green">팀버튼</TeamBtn> */}
      <Nav variant="tabs" defaultActiveKey="link-0">
        <Nav.Item>
          <Nav.Link eventKey="link-0">도서정보</Nav.Link>
        </Nav.Item>
        <Nav.Item>
          <Nav.Link eventKey="link-1">리뷰</Nav.Link>
        </Nav.Item>
        <Nav.Item>
          <Nav.Link eventKey="link-2">배송/반품</Nav.Link>
        </Nav.Item>
      </Nav>

      <TabContent tab={tab}></TabContent>
    </Container>
  );
}

function TabContent({ tab }) {
  let ctx = useContext(contextStorage);
  // if(tab == 0){
  //   return <div>도서 정보입니다.</div>
  // }else if(tab == 1)
  //   {return <div>배송이 빨랐어요.</div>}else if(tab == 2)
  //   {return <div>로켓 배송입니다.</div>}

  return [
    <div>도서 정보입니다.</div>,
    <div>배송이 빨랐어요.</div>,
    (<div>로켓 배송이 됩니다.</div>)[tab],
  ];
}
class DetailPage2 extends Component {
  componentDidMount() {
    // 컴포넌트 로드되는 시점
  }
  componentDidUpdate(prevProps) {
    // 컴포넌트 업데이트
  }
  componentWillUnmount() {}
}

export default DetailPage;
