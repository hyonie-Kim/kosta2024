function order(callback) {
  // callback 은 함수포인터
  callback();
}

const coffee = function () {
  console.log('주문하신 아메리카노 나왔습니다.');
};

coffee();
