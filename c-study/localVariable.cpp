#include<stdio.h>
#include <iostream>

/*
void func1();
void func2();
void main(void)
{
	int val = 0;
	printf("ù ��° �޸� �Ҵ� : val = 0\n");
	func1();
	printf("�� ��° �޸� �Ҹ� : local = 10\n");

}
void func1()
{
	int local = 10;
	printf("�� ��° �޸� �Ҵ� : local = 10\n");
	func2();
	printf("ù ��° �޸� �Ҹ� : local = 20\n");
}
void func2()
{
	int local = 20;
	printf("�� ��° �޸� �Ҵ� : local = 20\n");
}

*/



/*
* ���������� ������������ �켱���� ���´�.
int nTemp = 10;

void main()
{
	{
		int nTemp = 20;
		printf("nTemp�� ���� %d�̴�.\n", nTemp);
	}
	printf("nTemp�� ���� %d�̴�.\n", nTemp);


}
*/

// C++ ������ ���������� �������� ����ϴ� ���� ����.
int nTemp = 10;

using namespace std;
void main() {
	{
		int nTemp = 20;
		cout << "nTemp = (����) " << nTemp << endl;
		cout << "nTemp = (����������) " << ::nTemp << endl;
	}
}