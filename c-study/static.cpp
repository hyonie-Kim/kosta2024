#include<stdio.h>

void func()
{
	// 전역변수, 스태틱은 같은 메모리를 사용
	// static은 스택메모리에 할당되는 것이 아님!!!
	static int value = 0;
	value++;
	printf("%d\n", value);
}
void main()
{
	int i = 0;
	while (i < 5)
	{
		func();
		i++;
	}
}