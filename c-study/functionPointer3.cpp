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

void Swap(int* a, int* b)
{
	// a, b 맞바꾸기
	// 바꿀 빈 변수를 생성.
	int temp = 0;
	temp = *a; //a 가 가리키는 실제값 표기는 *
	*a = *b;
	*b = temp;
	printf("참조레퍼런스 a = %d, b = %d \n", *a, *b);
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