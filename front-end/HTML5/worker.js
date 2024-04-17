function stopOperation() {
  test();
  // 객체를 생성해서 getTime메서드를 통해서 현재시간을 가져옴

  var endTime = new Date().getTime() + 5000;
  while (new Date().getTime() < endTime) {}
  //   document.getElementById("result").innerHTML = "일어날 시간";
}

onmessage = function (event) {
  var rcvdata = event.data;

  stopOperation();
  var senddata = rcvdata + "백 그라운드에서 동작합니다.";
};
