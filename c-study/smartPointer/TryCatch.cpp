#include <iostream>
#include <memory>

using namespace std;

void main()
{
	int b;

	cout << "������ �� �Է�: ";
	cin >> b;

	try {
		unique_ptr<int> a(new int(10));
		
		if (b == 0) throw b;
		cout << "������ ��� : " << *a / b << endl;
	}
	catch (int ex) {
		cout << "���� ��Ȳ" << endl;
	}
}
