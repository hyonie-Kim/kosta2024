#include <stdio.h>

//�迭�� Ư���Լ��� �Ѱܼ� �Լ� �ȿ��� �迭�� �������

int func(int* pArr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + *(pArr + i);
	};

	return sum;
}

void Swap(int* a, int* b)
{
	// a, b �¹ٲٱ�
	// �ٲ� �� ������ ����.
	int temp = 0;
	temp = *a; //a �� ����Ű�� ������ ǥ��� *
	*a = *b;
	*b = temp;
	printf("�������۷��� a = %d, b = %d \n", *a, *b);
}


void main()
{

	int x = 10;
	int y = 20;
	printf("x = %d, y = %d\n", x, y);

	// call-by-value
	Swap(&x, &y);
	printf("x = %d, y = %d\n", x, y);
}