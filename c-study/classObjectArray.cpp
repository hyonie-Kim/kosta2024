#include <iostream>
// ����ü�� Ŭ���� ��

using namespace std;

class MousePoint
{
private:
	int x;
	int y;

	// ����Լ��� ������ ����
public:
	// ������ �Լ�
	// ��ü�� �����ɶ� �������ڰ� �Ѿ 
	// ����� ȣ���� �ƴ� �ڵ� ȣ��
	MousePoint(int nX, int nY)
	{
		x = nX;
		y = nY;

		cout << "�������ڰ� 2���� ������" << endl;
	}
	MousePoint()
	{
		cout << "����Ʈ ������" << endl;

	}

	//�Ҹ���
	//�ڵ�ȣ��
	~MousePoint()
	{
		cout << "�Ҹ���" << endl;

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