onmessage = function (event) {
  var dataPoint = {
    x: Math.random() * event.data.x,
    y: Math.random() * event.data.y,
  };

  //var dataPoint = event.data;

  this.postMessage(dataPoint);
};
