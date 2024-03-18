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
		x = nX;
		y = nY;
	}
};
void main()
{
	MousePoint pt[3] = { MousePoint(10,20),MousePoint(100,200), MousePoint(500,600) };

	//pt[0].SetXY(10, 20);
	//pt[1].SetXY(10, 20);

	for (int i= 0; i < 3; i++)
	{
		cout << pt[i].GetX() << endl;
		cout << pt[i].GetY() << endl;


	}

	//cout << pt[0].GetX() << endl;
	//cout << pt[1].GetX() << endl;
	//cout << pt[2].GetX() << endl;


	

}