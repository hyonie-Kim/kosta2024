#include<stdio.h>
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