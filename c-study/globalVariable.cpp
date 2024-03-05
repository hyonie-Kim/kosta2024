#include<stdio.h>

int global;

//int Add(int a, int b)
//{
//	int res = a + b;
//	return res;
//}

void Add(int a, int b)
{
	// void로 리턴하지않고, global 전역변수에 대입
	// 지역변수는 리턴을 해야하지만,
	// 전역변수에 대입시 리턴하지않아도 제약 없이 전 영역에서 사용
	global = a + b;
}

void main()
{
	int a = 0;
	int b = 0;
	printf("두 수를 입력하세요 :");
	scanf_s("%d%d", &a, &b);

	Add(a, b);
	printf("두 정수의 합 : %d\n", global);
}