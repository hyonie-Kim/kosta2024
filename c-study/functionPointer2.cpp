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

void main()
{
	
	int arr[] = { 1,2,3,4,5 };
	int* pArr = arr;

	int size = sizeof(arr) / sizeof(arr[0]);
	
	int sumArr = func(arr, size);
	
	
	printf("���� ��: %d\n", sumArr);



}