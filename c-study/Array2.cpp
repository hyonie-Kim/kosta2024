#include<stdio.h>

void main()
{
	// 배열의 길보다 초기값의 개수가 큰 경우
	//int array[5] = { 1,2,3,4,5,6 };
	//int array[5] = { 1,2 };

	//int array[] = { 1,2,3,4,5 };

	int array[5] = { 1,2,3,4,5 };
	int array2[5];

	// 배열은 상수이기 떄문에 대입 연산자를 통해 값을 넘겨받을수 없다.
	// array2 = array;

	// 반복문으로 바꿈
	/*array2[0] = array[0];
	array2[1] = array[1];
	array2[2] = array[2];
	array2[3] = array[3];
	array2[4] = array[4];*/
	
	// sizeof 연산자
	// 첫번째 요소 사이즈에서 나누면 5가 나옴..
	for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
	{
		array2[i] + array[i];
			
	}

	for (int i = 0; i < 5; i++)
	{
		
		printf("%d\n", array2[i]);
	}


/*	int total = 0;
	for (int i = 0; i < 5; i++)
	{
		total = total + array[i];
	}
	double avg = total / 5;

	printf("배열 요소의 총점 / 평균 : %d + %d + %d + %d + %d = %d / %f\n",
		array[0], array[1], array[2], array[3], array[4], total, avg
	)*/;
}