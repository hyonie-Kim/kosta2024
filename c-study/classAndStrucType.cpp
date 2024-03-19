#include <iostream>
// 구조체와 클래스 비교

using namespace std;


// MousePoint 구조체
//struct MousePoint
//{
//	int x;
//	int y;
//};

// MousePoint 클래스
// 클래스 디폴트 값이 프라이빗임 직접접근 안됨
// public 변수 접근하면 객체지향 철학에 위배됨..
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
	// 구조체 변수 선언
	// 구조체의 초기화
	//MousePoint pt = { 50, 100 };
	
	
	// 객체 생성하고 SetXY 호출
	//MousePoint pt; // 클래스 pt 객체 선언
	//pt.SetXY(10, 20); // 클래스의 초기화? 는 아님

	//클래스 인자만 전달하면 됨, 이것이 초기화.
	MousePoint pt(10, 20); // 클래스 객체 생성, 생성자함수 인자가 전달되어 초기화

	MousePoint a; // 디폴트 생성자 명시함

	MousePoint* pArr[3];
	pArr[0] = new MousePoint(10, 20);
	pArr[1] = new MousePoint(100, 200);
	pArr[2] = new MousePoint(1000, 2000);

	for (int i =0; i <3; i++)
	{
		cout << pArr[i]->GetX() << endl;
		cout << pArr[i]->GetY() << endl;

	}
	for (int i = 0; i < 3; i++) {
		delete pArr[i];
	}

	// 구조체의 값 출력
	/*cout << pt.x << endl;
	cout << pt.y << endl;*/


	// 클래스의 값 출력
	/*cout << pt.GetX() << endl;
	cout << pt.GetY() << endl;*/

	

}



