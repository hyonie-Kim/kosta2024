#include <iostream>

using namespace std;


// Ŭ������ main �Լ� �ۿ��� �ۼ��ϴ� ��
// c++ �������� ���ؼ� ����� cpp �и��� 
class MousePoint
{
private:
	int x;
	int y;

public:
	void SetXY(int nX, int nY); // �Լ�
};
 
// Ŭ���� �ۿ����� �Ҽ��� ��������
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


