#include <iostream>


// std ����ȭ�ϱ�
// using namespace �����ϰ�
// cout << b << std::endl; ���
using namespace std;

void func(int a = 10, int b = 20)
{
	cout << "�� ���� ���� ���" << a << b << endl;
}


void main()
{
	
	func();
	func(100);
	func(100, 200);
}
