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
		// this �������̴�. ���� �����ϹǷ� ȭ��ǥ ���
		// ���� ȣ���� x �Ǵ� y ��ü�� ���� �־���
		// �𽺸� ��������ν� ���� ��Ȯ������.
		//  
		this->x = nX;
		this->y = nY;

		// x = nX;
		// y = nY;
	}
};

//�Ϲ��Լ� �����
// pt1, pt2 ��ü�� �ΰ� ���� ����
void SetRect(MousePoint pt1, MousePoint pt2)
{

}
void main()
{
	MousePoint* pObj;
	MousePoint pt(10, 20);
	// �����ʹ� ��������
	// �������� �����ڸ� ���ؼ� GetX()�� ȣ���Ҽ� �ִ�.

	// 
	pObj = &pt;

	// this ���� ���
	pt.SetXY(200, 300);

	cout << pObj->GetX() << endl;
	cout << pObj->GetY() << endl;



}