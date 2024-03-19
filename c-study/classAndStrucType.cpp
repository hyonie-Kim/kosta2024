#include <iostream>
// ����ü�� Ŭ���� ��

using namespace std;


// MousePoint ����ü
//struct MousePoint
//{
//	int x;
//	int y;
//};

// MousePoint Ŭ����
// Ŭ���� ����Ʈ ���� �����̺��� �������� �ȵ�
// public ���� �����ϸ� ��ü���� ö�п� �����..
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
	// ����ü ���� ����
	// ����ü�� �ʱ�ȭ
	//MousePoint pt = { 50, 100 };
	
	
	// ��ü �����ϰ� SetXY ȣ��
	//MousePoint pt; // Ŭ���� pt ��ü ����
	//pt.SetXY(10, 20); // Ŭ������ �ʱ�ȭ? �� �ƴ�

	//Ŭ���� ���ڸ� �����ϸ� ��, �̰��� �ʱ�ȭ.
	MousePoint pt(10, 20); // Ŭ���� ��ü ����, �������Լ� ���ڰ� ���޵Ǿ� �ʱ�ȭ

	MousePoint a; // ����Ʈ ������ �����

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

	// ����ü�� �� ���
	/*cout << pt.x << endl;
	cout << pt.y << endl;*/


	// Ŭ������ �� ���
	/*cout << pt.GetX() << endl;
	cout << pt.GetY() << endl;*/

	

}



