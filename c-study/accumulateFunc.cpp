#include <stdio.h>

int global = 0;

void add(int a)
{
	global += a;
	printf("최종 누적 페이지: %d", global);
}

void main()
{
	int a = 0;

	while (a > -1)
	{
		printf("\n읽은 책의 페이지 수를 입력하시오 :");
		scanf_s("%d", &a);

		if (a == -1)
		{
			printf("더 분발하세요.");
			break;
		}
		add(a);
	}
}



//int main(void)
//{
//	int num = 0;
//	
//	
//	while (num < 5)
//	{
//		printf("무한루프 while문!!! %d\n", num);
//
//		num++;
//	}
//	
//	
//	/*
//	while (num < 5)
//		printf("중괄호 생략 while문!! %d\n", num++);
//	*/
//
//	/*
//	while (num < 5)
//		printf("중괄호 생략2 while문!! %d\n", num), num++;
//	*/
//
//	//return 0;
//
//}