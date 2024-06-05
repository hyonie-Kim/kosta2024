import { Button, Container, Row, Col } from 'react-bootstrap';

function DetailPage() {
  // 1. 도서이미지
  // 2. 도서명
  // 3. 도서 내용
  // 4. 도서가격
  // 5. 카트 담기 버튼

  return (
    <Container>
      <Row>
        <Col>
          <img
            src={process.env.PUBLIC_URL + '../images/' + 1 + '.jpg'}
            width="50%"
          ></img>
        </Col>
        <Col>
          {/* <img src={book.img} width="50%"></img> */}
          <h5>도서명</h5>
          <h6>도서 내용</h6>
          <p>도서 가격</p>
          <Button>카트에 담기</Button>
        </Col>
      </Row>
    </Container>
  );
}

export default DetailPage;
