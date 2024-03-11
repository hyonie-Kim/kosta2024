#include <stdio.h>

int Plus(int a, int b)
{
	return a + b;
}

int Minus(int a, int b)
{
	return a - b;
}

void main()
{
	int x, y;
	// 함수 포인터 만들기
	// 함수 포인터 이름 : fptr
	// Plus 함수의 주소값을 넘김
	// 전달인자의 형식이 같아야함 int a, int b
	int (*fptr)(int a, int b);

	printf("두 정수를 입력하세요: ");
	scanf_s("%d%d", &x, &y);

	//int res = Plus(x,y);
	
	// 플러스 함수의 주소값을 fptr에 넘김
	// 주소값 복사
	fptr = Plus; 
	int res = fptr(x, y);

	printf("결과 = %d\n", res);

	fptr = Minus;
	res = fptr(x, y);

	printf("결과 = %d\n", res);
}