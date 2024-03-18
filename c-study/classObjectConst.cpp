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

	void SetXY(int x, int y)
	{

		this->x = x;
		this->y = y;
	}
};

//�Ϲ��Լ� �����
// pt1, pt2 ��ü�� �ΰ� ���� ����
void SetRect(MousePoint pt1, MousePoint pt2)
{

	cout << pt1.GetX() << endl;
	cout << pt1.GetY() << endl;

	cout << pt2.GetX() << endl;
	cout << pt2.GetY() << endl;

	// callbyValue ���� ����
	// ���� �Ű����� ���� ����.
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

	// �����Ͽ� ����
	// ��ü���� �����Ͽ� �����ҋ��� ����
	SetRect(mp1, mp2);

	// �ǸŰ����� ����
	// 10, 20�� ��µ� 
	cout << mp1.GetX() << endl;
	cout << mp1.GetY() << endl;

}