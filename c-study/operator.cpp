#include<stdio.h>

/*cpp확장자는 c++
*/


void main() {

	// 산술 연산자
	/*int a = 5;
	int b = 3;

	printf("두 수의 합 : %d\n", a + b);
	printf("두 수의 차 : %d\n", a - b);
	printf("두 수의 곱 : %d\n", a * b);
	printf("두 수의 나누기 : %d\n", a / b);
	printf("두 수의 나머지 : %d\n", a % b);*/
	

	// 대입 연산자
	//int a = 5;
	//int b = 3;

	//a += b; //a = a + b
	//printf("%d\n", a);

	//a -= b;
	//printf("%d\n", a);

	//a *= b;
	//printf("%d\n", a);

	//a /= b;
	//printf("%d\n", a);


	// 증감 연산자
	//int a = 5;
	//int b = 10;

	//printf("++a 처리결과: %d\n", ++a);

	//a = 5;
	//printf("a++ 처리결과: %d\n", a++); // 출력 후 다음 라인 넘어갈때 1증가
	//printf("a 처리 결과: %d\n", a);

	//printf("--b 처리결과: %d\n", --b);
	//
	//b = 10;
	//printf("b-- 처리결과: %d\n", b--);
	//printf("b 처리결과: %d\n", b);

	// 관계/논리 연산자
	int a = 10;
	int b = 11;
	int c = 12;
	int d = 10;

	//printf("a == b : %d\n", a == b); // 1은 참, 0은 거짓
	//printf("a < b : %d\n", a < b);
	//printf("a >= c : %d\n", a >= b);
	//printf("a == d : %d\n", a == d);

	printf("%d\n", !(a == d));
	printf("%d\n", !(a < b) && (a < c));
	printf("%d\n", !(a >= c) || (a < c)); 
	printf("%d\n", !(a >= c) || (a == d)); // 거짓 1








}

