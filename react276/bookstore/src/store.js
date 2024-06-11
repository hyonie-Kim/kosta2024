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
      id: 1,
      name: '백엔드 입무자를 위한 모던 자바스크립트& node.js',
      count: 1,
    },
    { id: 2, name: 'HTML5와 자바스크립트', count: 1 },
    { id: 3, name: '리액트를 다루는 기술', count: 1 },
    { id: 4, name: '리액트를 다루는 기술', count: 1 },
  ],
  reducers: {
    plusCount(state, param) {
      state[param.payload].count++;
      //state.count += 1;
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
export let { plusCount } = cart.actions;

// 1. createSLice를 만든다.
// 2. reducer에 등록한다.
// 3. 사용하려면 스토어에 추가한 데이터들이 넘어온지 확인. ex: Cart.js
