#include<iostream>

using namespace std;


void divide(int x, int y) {
	if (x < 0) {
		throw "a�� ���� �����Դϴ�.";
	}
	// ������ �� �ڵ�� try�� ����,
	if (y == 0) {
		throw y;
	}
	cout << "������ ���: " << x / y << endl;
}

void main() {
	int a = 0;
	int b = 0;


	

	cout << "�������� �� �Է� :";
	// a �Է�
	cin >> a; 
	cout << "������ �� �Է� :";
	cin >>  b;


	/*
	if (b == 0) {
		//printf("���� 0�� ������ ���� �Է� �� �� �����ϴ�. \n");
		cout << "b�� �Է°��� 0�Դϴ�." << endl;
	}
	else if (b < 0) {
		cout << "b�� �Է°��� �����Դϴ�." << endl;
	}
	else
	{
		cout << "������ ���: " << a / b << endl;

	}

	*/

	
	try
	{	
		
		// ������ a, b�� x, y�� ���簡 �ȴ�.
		divide(a, b);
	}
	catch (int exception)
	{
		// catch�� ������ ���� ����.
		cout << "b�� �Է°��� 0�Դϴ�. ���� �ڵ�:" << exception<< endl;

	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
	

}

// ���� ��Ȳ�� �پ��Ҽ� �ִ�.
// �������� ���� ��Ȳ�� ����ؼ� ó���Ҽ��ִ�.