#include <iostream>

using namespace std;

void main()
{
	int* a;
	int b;

	cout << "������ �� �Է�: ";
	cin >> b;
	try {
		a = new int(10);
		if (b == 0) throw b;
		cout << "������ ��� : " << *a / b << endl;
		delete a;
	}
	catch (int ex) {
		cout << "���� ��Ȳ" << endl;
	}
}