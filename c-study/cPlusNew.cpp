#include <iostream>


// std 간소화하기
// using namespace 선언하고
// cout << b << std::endl; 사용
using namespace std;

void func(int a = 10, int b = 20)
{
	cout << "두 전달 인자 출력" << a << b << endl;
}


void main()
{
	
	func();
	func(100);
	func(100, 200);
}
