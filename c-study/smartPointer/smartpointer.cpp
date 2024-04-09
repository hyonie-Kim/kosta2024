#include <iostream>

using namespace std;

void main()
{
	int* a;
	int b;

	cout << "나누는 수 입력: ";
	cin >> b;
	try {
		a = new int(10);
		if (b == 0) throw b;
		cout << "나누기 결과 : " << *a / b << endl;
		delete a;
	}
	catch (int ex) {
		cout << "예외 상황" << endl;
	}
}