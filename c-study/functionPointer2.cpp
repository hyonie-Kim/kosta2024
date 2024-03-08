#include <stdio.h>

//배열을 특정함수에 넘겨서 함수 안에서 배열의 내용출력

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
	
	
	printf("누적 합: %d\n", sumArr);



}