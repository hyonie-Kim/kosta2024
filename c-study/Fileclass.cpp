#include<stdio.h>

// 디버그하지않고 시작 - ctrl +f5

/*
날짜: 2024.02.27
작성자: hyonie
설명: hello world

1. // 짧은 문장의 주석
2. 컴파일할때 영향을 받지 않는다.
*/

int main() {
	
	//printf("김세현\n서울 영등포구 가마산로 468\n010-5838-4884");
	//printf("Hello world\n");
	

	/*
	* 
	* 서식문자 %d - decimal의 약자로 10진수라는 뜻, %f 실수
	* 
	*/
	

	// 정수형 출력
	//int value;
	//int num = 5;
	//value = 100;
	//printf("%d %d\n", value, num);

	// 문자형 출력
	/*
	* "" 큰따옴표는 문자열이므로 작은 따옴표를 사용한다
	*/

	//int value = 100;
	//char ch = 'C';
	//
	//printf("출력결과: 정수 %d, 문자 %c\n", value, ch);


	// 사각형 넓이
	//int width = 10;
	//int height = 20;

	//printf("사각형의 넓이: %d\n", width * height);

	// 실수 - 원의 넓이
	//double area = 0.0;
	//int radius = 5;

	//area = radius* radius * 3.14;

	//printf("원의 넓이는 %f\n", area);

	//char ch1 = 'A';
	//char ch2 = 'b';
	//char ch3 = '1';

	//printf("문자열 출력:%c %c %c\n", ch1, ch2, ch3);
	//printf("10진수 출력:%d %d %d\n",ch1,ch2,ch3);

	// 사용자 입력을 받는 scanf

	int input1 = 0;
	int input2 = 0;
	
	printf("정수를 입력하세요 :");
	scanf_s("%d%d", &input1, &input2); // MS에서 _s 를 붙여서 사용하는 것을 권장
	
	/*printf("정수를 입력하세요 :");
	scanf_s("%d", &input2);*/
	
	
	printf("두수의 합 출력: %d\n", input1 + input2);

	return 0;
}

