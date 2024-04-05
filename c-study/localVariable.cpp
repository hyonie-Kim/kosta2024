#include<stdio.h>
#include <iostream>

/*
void func1();
void func2();
void main(void)
{
	int val = 0;
	printf("첫 번째 메모리 할당 : val = 0\n");
	func1();
	printf("두 번째 메모리 소멸 : local = 10\n");

}
void func1()
{
	int local = 10;
	printf("두 번째 메모리 할당 : local = 10\n");
	func2();
	printf("첫 번째 메모리 소멸 : local = 20\n");
}
void func2()
{
	int local = 20;
	printf("세 번째 메모리 할당 : local = 20\n");
}

*/



/*
* 지역변수가 전역변수보다 우선권을 갖는다.
int nTemp = 10;

void main()
{
	{
		int nTemp = 20;
		printf("nTemp의 값은 %d이다.\n", nTemp);
	}
	printf("nTemp의 값은 %d이다.\n", nTemp);


}
*/

// C++ 에서는 전역변수를 지역에서 사용하는 것이 가능.
int nTemp = 10;

using namespace std;
void main() {
	{
		int nTemp = 20;
		cout << "nTemp = (지역) " << nTemp << endl;
		cout << "nTemp = (전역스코프) " << ::nTemp << endl;
	}
}