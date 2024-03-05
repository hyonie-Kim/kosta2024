#include<stdio.h>
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