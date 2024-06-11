const Contact = () => {
  return (
    <div className="container">
      <div className="board">
        <h1>Business Contact</h1>
        <p></p>
        <from action="" method="">
          <div className="form-group">
            <input
              type="text"
              className="form-control"
              placeholder="이름 입력"
            ></input>
            <p></p>
            <input
              type="text"
              className="form-control"
              placeholder="이메일 입력"
            ></input>
            <p></p>
            <textarea
              name="content"
              rows="10"
              className="form-control"
              placeholder="내용 입력"
            ></textarea>
            <p></p>
          </div>
          <button type="submit" className="btn btn-warning">
            접수하기
          </button>
        </from>
      </div>
    </div>
  );
};

export default Contact;
