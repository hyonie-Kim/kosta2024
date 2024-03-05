#include<stdio.h>

// 보통 main 함수 앞에 커스텀 함수를 정의한다.
// 헤더와 구현을 나눠서 선언한다. 실제 코드에서는 기능이 나눠있음
int Add(int a, int b)
{
	int res = a + b;

	return res;
}

void print_Hap(int result)
{
	printf("결과값은 %d 입니다.\n", result);
}

// 함수추가
int multiply(int a)
{
	return a * 2;
}

// 사각형 넓이 구하기
void Rect(int width, int height)
{
	int rect = width * height;
	printf("사각형의 넓이 : %d\n", rect);
}

// 원의 넓이 구하기
void Circle(int radian)
{	
	double area = 0.0;
	area = radian* radian * 3.14;
	printf("원의 넓이: %f\n", area);
}

// 연산 함수

void Plus(int a, int b)
{
	printf("두 수의 합: %d\n", a + b);
	
}
void Minus(int a, int b)
{
	printf("두 수의 차: %d\n", a - b);
	
}
void Mutiple(int a, int b)
{
	printf("두 수의 곱: %d\n", a * b);
	
}
void Divide(int a, int b)
{
	printf("두 수의 나누기: %d\n", a / b);
}

void main()
{
	// 변수당 4바이트 메모리 존재
	int i = 5;
	int j = 3;


	// i. j 값만 Add(int a, int b)에 복사됨
	// 메모리가 공유되진 않음
	int k = Add(i, j);

	//printf("결과값은 %d 입니다.\n", k);
	print_Hap(k);

	//int r = multiply(i);
	//printf("2 * %d 의 결과값은 %d입니다.\n", i, r);

	/*int w = 0;
	int h = 0;

	printf("두정수를 입력해주세요.\n");
	scanf_s("%d%d", &w, &h);
	Rect(w, h);*/

	/*int r = 0;
	printf("반지름의 길이를 입력하세요.\n");
	scanf_s("%d", &r);
	Circle(r);*/


	int a = 0;
	int b = 0;

	printf("두 정수를 입력하세요 : ");
	scanf_s("%d%d", &a,&b);

	Plus(a, b);
	Minus(a, b);
	Mutiple(a, b);
	Divide(a, b);

	/*printf("두 수의 합: %d\n", a + b);
	printf("두 수의 차: %d\n", a - b);
	printf("두 수의 곱: %d\n", a * b);
	printf("두 수의 나누기: %d\n", a / b);*/


}

// 디버깅
// f10 - 한줄실행
// f11 - 실행 루프로..