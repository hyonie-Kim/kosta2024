#include<stdio.h>

void main() {
	//int i = 1;

	//while (i < 10)
	//{
	//	printf("2 * %d = %d\n", i, 2*i);
	//	i++;
	//}

	// 무한 루프
	// <예제1>
	//while (true) {
	//	printf("Programming\n");
	// }

	// <예제2>
	//int i = 0;
	//while (true) 
	//{
	//	printf("");
	//	if (i > 100) // 100보다 커지는 순간 리턴
	//		return;
	//	i++;
	//}

	// <예제3>
	//int i = 0;

	//do
	//{
	//	// 조건에 상관없이 무조건 1번은 반복함
	//	// 반복 내용
	//	printf("Programming\n");
	//	i++;
	//} while (i<5);


	// <예제3>
	//int i = 0;
	//int sum = 0;

	//do
	//{
	//	printf("정수를 입력하세요: \n");
	//	scanf_s("%d", &i);
	//	sum = sum + i;
	//} while (i != 0); // 0일때 루프를 빠져나감
	//printf("총 합 : %d\n", sum);

	// <과제> - 위에 코드를  while문으로 변경

	//int i = 0;
	//int sum = 0;
	//	printf("정수를 입력하세요: \n");
	//	scanf_s("%d", &i);
	//	
	//while (i != 0)
	//{	
	//	sum = sum + i;
	//	
	//	printf("정수를 입력하세요: \n");
	//	scanf_s("%d", &i);		
	//
	//}
	//printf("총 합 : % d\n", sum);
	
	
	//for문
	
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("Programming\n");
	//}

	//구구단 2단 출력

	//int dan = 0;

	//printf("출력할 구구단을 입력해주세요.:");
	//scanf_s("%d", &dan);

	//for (int i = 1; i <= 9; i++)
	//{
	//	printf("%d * %d = %d\n", dan,i, dan * i);
	//}

	//for문 작성 - 1월부터 12월까지
	//for (int i = 1; i <=12; i++)
	//{
	//	printf("%d월\n", i);
	//}

	//break문, continue문
	//int a = 0;
	//while (true)
	//{
	//	if (a > 100) {
	//		break;
	//	}
	//	printf("a: %d\n", a);
	//	a++;
	//}
	//printf("a는 100보다 크다.\n");

	//continue문
	//int a = 0;
	//while (a < 100)
	//{
	//	a++;
	//	
	//	if (a > 80 && a <90)
	//	{
	//		continue;
	//	}
	//	printf("a의 값은: %d\n", a);
	//}

}