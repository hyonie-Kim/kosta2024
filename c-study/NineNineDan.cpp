#include<stdio.h>

int main(void)
{

	/*
	int dan = 0, num = 1;

	printf("몇 단? ");
	scanf_s("%d", &dan);

	while (num < 10)
	{
		printf("%d x %d = %d \n", dan, num, dan*num);
		num++;
	}

	*/

	/* 
	int num = 0;
	int a = 0;
	printf("정수를 하나 입력해주세요.");
	scanf_s("%d", &num);

	while (a < num)
	{
		printf("Hello World! %d \n", a);
		a++;
	}
	*/

	/*
	int num = 0;
	int n = 1;
	printf("양의 정수를 한개 입력해주세요.");
	scanf_s("%d", &num);

	while (n <= num)
	{

		printf("%d ", n * 3);
		n++;
	}

	*/

	/*
	* 정수값 모두 더하기
	int num = 0;
	int sum = 0;

	printf("정수를 입력해주세요.\n");
	

	while (1)
	{
		scanf_s("%d", &num);
		sum = sum + num;

		if (num == 0)
			break;
	}

	printf("합계: %d", sum);

	*/

	/* 
	* 구구단 역순 출력
	int dan = 0;
	int num = 9;
	printf("몇단을 출력할까요?");
	scanf_s("%d", &dan);

	while (1)
	{

		printf("%d x %d = %d \n",dan, num, dan*num);
		num -= 1; // num이 1씩 감소

		if (num == 0)
			break;
	}

	*/

	int num, input;
	int i = 0, total = 0;

	printf("입력할 정수의 개수는? ");
	scanf_s("%d", &num);

	while (i++ < num)
	{
		printf("정수를 입력: ");
		scanf_s("%d", &input);
		total += input;
	}
	
	printf("평균값: %f", (double)total/num);

	return 0;

}

