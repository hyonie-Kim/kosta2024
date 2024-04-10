#include <iostream>
#include <memory>

using namespace std;

void main()
{
	int b;

	cout << "나누는 수 입력: ";
	cin >> b;

	try {
		unique_ptr<int> a(new int(10));
		
		if (b == 0) throw b;
		cout << "나누기 결과 : " << *a / b << endl;
	}
	catch (int ex) {
		cout << "예외 상황" << endl;
	}
}
