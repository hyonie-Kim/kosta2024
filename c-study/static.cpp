#include<stdio.h>

void func()
{
	// ��������, ����ƽ�� ���� �޸𸮸� ���
	// static�� ���ø޸𸮿� �Ҵ�Ǵ� ���� �ƴ�!!!
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