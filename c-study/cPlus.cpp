#include <iostream>
// iostream �����

// ���ӽ����̽� Ű����� ������ ������
namespace A
{
	void func()
	{
		std::cout << "A�б� �ּ�" << std::endl;
	}
}

namespace B
{
	void func()
	{
		std::cout << "B�б� �ּ�" << std::endl;

	}
}

// std ����ȭ�ϱ�
// 1. using namespace �����ϰ�
// 2. cout << b << std::endl; ���
using namespace std;



void main()
{
	/*int a = 10;

	std::cout << "Hello C++" << std::endl;
	std::cout << a << std::endl;*/
	// endl �����ϰڴٴ� ��(�������ÿ� ����)

	// �����Ϸ� ���忡���� �Լ��� �Ȱ��� ������ 
	// ������ ȣ������ �𸥴�.
	// func();

	
	// A::func();
	// B::func();

	//=================================================

	int b = 10;
	cout << b << std::endl;

}
