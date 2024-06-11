import Table from 'react-bootstrap/Table';
import { useDispatch, useSelector } from 'react-redux';
import { changeName, increase, plusCount, minusCount } from '../store';
/*
데이터 구조
 [{id: 1, name :"백엔드 입무자를 위한 모던 자바스크립트& node.js", count:1},
 {id: 1, name :"리액트를 다루는 기술", count:1}]
*/

function Cart() {
  let a = useSelector((state) => {
    return state;
  });

  //   console.log(a.cart);

  let dispatch = useDispatch();

  return (
    <div>
      <Table striped bordered hover>
        <thead>
          <tr>
            <th>#</th>
            <th>도서명</th>
            <th>권수</th>
            <th>변경하기</th>
          </tr>
        </thead>
        <tbody>
          {a.cart.map((item, i) => (
            <tr>
              <td>{item.id}</td>
              <td>{item.name}</td>
              <td>{item.count}</td>
              <td>
                <button
                  className="btn btn-warning"
                  style={{ marginRight: '10px' }}
                  onClick={() => {
                    // lee 문자열 리턴함.
                    // 넘겨주는 인덱스에 따라서 어떤 값이 올라가는지 구분함

                    dispatch(plusCount(i));
                  }}
                >
                  ➕
                </button>
                <button
                  className="btn btn-warning"
                  onClick={() => {
                    // lee 문자열 리턴함.
                    // 넘겨주는 인덱스에 따라서 어떤 값이 올라가는지 구분함

                    dispatch(minusCount(i));
                  }}
                >
                  ➖
                </button>
              </td>
              {/* <div>{a.cart[i].count}</div> */}
            </tr>
          ))}
          {/* <tr>
            <td>{a.cart[0].id}</td>
            <td>{a.cart[0].name}</td>
            <td>{a.cart[0].count}</td>
            <td>
              <button>변경</button>
            </td>
          </tr> */}
          {/* <tr>
            <td>{a.cart[1].id}</td>
            <td>{a.cart[1].name}</td>
            <td>{a.cart[1].count}</td>
            <td>
              <button>변경</button>
            </td>
          </tr> */}
        </tbody>
      </Table>
    </div>
  );
}

export default Cart;
