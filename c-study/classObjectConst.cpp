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

	void SetXY(int x, int y)
	{

		this->x = x;
		this->y = y;
	}
};

//일반함수 만들기
// pt1, pt2 객체를 두개 전달 받음
void SetRect(MousePoint pt1, MousePoint pt2)
{

	cout << pt1.GetX() << endl;
	cout << pt1.GetY() << endl;

	cout << pt2.GetX() << endl;
	cout << pt2.GetY() << endl;

	// callbyValue 값만 복사
	// 형식 매개변수 값을 복사.
	pt1.SetXY(1000, 2000);

	cout << pt1.GetX() << endl;
	cout << pt1.GetY() << endl;
}

void CopyObject(MousePoint& pt1, MousePoint& pt2)
{
	pt1 = pt2;
	cout << pt1.GetX() << endl;
	cout << pt1.GetY() << endl;


}

void main()
{
	MousePoint* pObj;
	MousePoint mp1(10, 20);
	MousePoint mp2(50, 60);

	// 복사하여 전달
	// 객체끼리 복사하여 전달할떄의 구조
	SetRect(mp1, mp2);

	// 실매개변수 값만
	// 10, 20로 출력됨 
	cout << mp1.GetX() << endl;
	cout << mp1.GetY() << endl;

}