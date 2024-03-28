#include<iostream>

using namespace std;


void divide(int x, int y) {
	if (x < 0) {
		throw "a의 값은 음수입니다.";
	}
	// 문제가 될 코드는 try로 묶고,
	if (y == 0) {
		throw y;
	}
	cout << "나누기 결과: " << x / y << endl;
}

void main() {
	int a = 0;
	int b = 0;


	

	cout << "나누어질 수 입력 :";
	// a 입력
	cin >> a; 
	cout << "나누는 수 입력 :";
	cin >>  b;


	/*
	if (b == 0) {
		//printf("숫자 0은 나누는 수로 입력 할 수 없습니다. \n");
		cout << "b의 입력값은 0입니다." << endl;
	}
	else if (b < 0) {
		cout << "b의 입력값은 음수입니다." << endl;
	}
	else
	{
		cout << "나누기 결과: " << a / b << endl;

	}

	*/

	
	try
	{	
		
		// 각각의 a, b가 x, y에 복사가 된다.
		divide(a, b);
	}
	catch (int exception)
	{
		// catch를 여러개 쓸수 있음.
		cout << "b의 입력값은 0입니다. 예외 코드:" << exception<< endl;

	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
	

}

// 예외 상황이 다양할수 있다.
// 여러가지 예외 상황을 고려해서 처리할수있다.