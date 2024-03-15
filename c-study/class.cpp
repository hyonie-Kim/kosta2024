#include <iostream>

using namespace std;


// 클래스는 main 함수 밖에서 작성하는 것
// c++ 가독성을 위해서 헤더와 cpp 분리함 
class MousePoint
{
private:
	int x;
	int y;

public:
	void SetXY(int nX, int nY); // 함수
};
 
// 클래스 밖에서는 소속을 밝혀야함
void MousePoint::SetXY(int nX, int nY)
{
	x = nX;
	y = nY;
}

void main()
{
	MousePoint pt;

	pt.SetXY(10, 20);

}


