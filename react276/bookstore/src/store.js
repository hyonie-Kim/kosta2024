// 리덕스 툴킷
import { configureStore, createSlice } from '@reduxjs/toolkit';

let user = createSlice({
  name: 'user',
  initialState: { name: 'kim', age: 20 }, // 오브젝트 데이터로 등록
  // 변경 함수
  reducers: {
    changeName() {
      return { name: 'lee', age: 20 };
    },
    increase(state) {
      state.age += 1;
    },
  },
});

let stock = createSlice({
  name: 'stock',
  initialState: [1, 2, 3],
});

let cart = createSlice({
  name: 'cart',
  initialState: [
    // 데이터가 오브젝트 형식
    {
      id: 0,
      name: '백엔드 입무자를 위한 모던 자바스크립트& node.js',
      count: 1,
    },
    { id: 1, name: 'HTML5와 자바스크립트', count: 1 },
    { id: 2, name: '리액트를 다루는 기술', count: 1 },
  ],
  reducers: {
    plusCount(state, actions) {
      state[actions.payload].count++;
      //state.count += 1;
    },
    minusCount(state, actions) {
      state[actions.payload].count--;
    },
    // 장바구니에 상품 담기
    addItem(state, actions) {
      // 오브젝트에 접근해서 일치하는것만 리턴
      const existingItem = state.find((item) => {
        return item.id === actions.payload.id;
      });
      if (existingItem) {
        existingItem.count++;
      } else {
        state.push({
          id: actions.payload.id,
          name: actions.payload.name,
          // 처음에 한권으로 시작함
          count: 1,
        });
      }
    },
  },
});

export default configureStore({
  reducer: {
    // 등록
    // 왼쪽은 이름 작명
    user: user.reducer,
    stock: stock.reducer,
    cart: cart.reducer,
  },
});

// 구조분해 할당:: user객체 안에 chageName 함수를 export함
// export let { changeName, increase } = user.actions;
export let { plusCount, minusCount, addItem } = cart.actions;

// 1. createSLice를 만든다.
// 2. reducer에 등록한다.
// 3. 사용하려면 스토어에 추가한 데이터들이 넘어온지 확인. ex: Cart.js
