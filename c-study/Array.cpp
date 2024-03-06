#include<stdio.h>

void main()
{
	// int array[5];

	// 배열의 초기화
	int array[5] = { 1,2,3,4,5 };

	// 1. 값 대입 
	//array[0] = 1;
	//array[1] = 2;
	//array[2] = 3;
	//array[3] = 4;
	//array[4] = 5;

	// 2. 값 대입
	//반복문 하나씩 출력
	/*for (int i = 0; i < 5; i++)
	{
		printf("정수를 입력하세요 :");
		scanf_s("%d", &array[i]);
	}*/

	// total을 반복문으로 수정
	//int total = array[0] + array[1] + array[2] + array[3] + array[4];
	
	int total = 0;
	for (int i = 0; i < 5; i++)
	{
		total = total + array[i];
	}
	double avg = total / 5;

	// printf("배열 요소의 출력 : %d, %d, %d, %d, %d\n", array[0], array[1], array[2], array[3], array[4]);
	
	printf("배열 요소의 총점 / 평균 : %d + %d + %d + %d + %d = %d / %f\n", 
		array[0], array[1], array[2], array[3], array[4], total, avg
	);

}