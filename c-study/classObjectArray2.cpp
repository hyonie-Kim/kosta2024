#include <iostream>
// 구조체와 클래스 비교

using namespace std;

class MousePoint
{
private:
	int x;
	int y;

	// 멤버함수로 변수에 접근
public:
	// 생성자 함수
	// 객체가 생성될때 전달인자가 넘어감 
	// 명시적 호출이 아닌 자동 호출
	MousePoint(int nX, int nY)
	{
		x = nX;
		y = nY;

		cout << "전달인자가 2개인 생성자" << endl;
	}
	MousePoint()
	{
		cout << "디폴트 생성자" << endl;

	}

	//소멸자
	//자동호출
	~MousePoint()
	{
		cout << "소멸자" << endl;

	}

	int GetX()
	{
		return x;
	}
	int GetY()
	{
		return y;
	}

	void SetXY(int nX, int nY)
	{
		// this 포인터이다. 간접 참조하므로 화살표 사용
		// 현재 호출한 x 또는 y 객체에 값을 넣어줘
		// 디스를 사용함으로써 좀더 명확해진다.
		//  
		this->x = nX;
		this->y = nY;

		// x = nX;
		// y = nY;
	}
};

//일반함수 만들기
// pt1, pt2 객체를 두개 전달 받음
void SetRect(MousePoint pt1, MousePoint pt2)
{

}
void main()
{
	MousePoint* pObj;
	MousePoint pt(10, 20);
	// 포인터는 간접접근
	// 간접접근 연산자를 통해서 GetX()를 호출할수 있다.

	// 
	pObj = &pt;

	// this 참조 사용
	pt.SetXY(200, 300);

	cout << pObj->GetX() << endl;
	cout << pObj->GetY() << endl;



}