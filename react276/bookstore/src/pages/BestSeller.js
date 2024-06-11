const BestSeller = ({ bestSeller }) => {
  console.log('베스트셀러', bestSeller);
  return (
    <div className="container">
      <div className="board">
        <h1>베스트셀러</h1>
        <p>
          {bestSeller.map((book) => (
            <div key={book.rank}>
              <h1>{book.rank}위</h1>
              <img src={`../images/${book.img}.jpg`} width="50%"></img>
              <h4>{book.title}</h4>
              <p></p>
            </div>
          ))}
        </p>
      </div>
    </div>
  );
};

export default BestSeller;
