import { Button } from 'react-bootstrap';
import { Outlet } from 'react-router-dom';

const About = () => {
  return (
    <div>
      <div>
        <h1>회사정보</h1>
        <img src={process.env.PUBLIC_URL + 'logo512.png'} width="50%"></img>
        <Outlet></Outlet>
        <p></p>
        <Button
          style={{ margin: '10px' }}
          onClick={() => {
            navigator('/about/member');
          }}
        >
          멤버
        </Button>
        <Button
          variant="warning"
          onClick={() => {
            navigator('/about/location');
          }}
        >
          위치
        </Button>
      </div>
    </div>
  );
};

export default About;
