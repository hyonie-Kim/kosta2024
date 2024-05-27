const id = 'hyonie';
const pw = '1234';

// const pro1 = new Promise(function (resolve, reject) {
//   setTimeout(function () {
//     reject('pro1 fali');
//   }, 1000);
// });

// const pro2 = new Promise(function (resolve, reject) {
//   setTimeout(function () {
//     resolve('pro2 success');
//   }, 1000);
// });

const pro1 = (pid) => {
  return new Promise(function (resolve, reject) {
    setTimeout(function () {
      if (pid == 'hyonie') {
        resolve('id success');
      } else {
        reject('id fail');
      }

      //reject('pro1 fali');
    }, 1000);
  });
};

const pro2 = (ppw) => {
  return new Promise(function (resolve, reject) {
    setTimeout(function () {
      if (ppw == '123') {
        resolve('password success');
      } else {
        reject('pw fail');
      }
    }, 1000);
  });
};

// 프로미스의 체이닝
pro1(id)
  .then(function (result) {
    console.log('result1', result);
    return pro2(pw);
  })
  .catch(function (err) {
    console.log('err', err);
    return Promise.reject(err);
  })
  .then(function (result) {
    console.log('result2', result);
  });
