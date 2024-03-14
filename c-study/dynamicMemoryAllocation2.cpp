#include<stdio.h>
#include<stdlib.h>

void main()
{
	int num;
	int* student;
	int total = 0; // 0으로 초기화

	printf("학생수를 입력하세요 : ");
	scanf_s("%d", &num);

	// 말록으로 힙메모리 할당 받음
	student = (int*)malloc(sizeof(int) * num);

	// 포인터의 결과값을 받으면 무조건 NULL 체크를 해야함.
	if (student == NULL)
	{
		printf("메모리가 부족하여 할당할수 없습니다. \n");
		return;
	}

	for (int i = 0; i < num; i++)
	{
		printf("%d번째 학생의 성적 입력: ", i + 1);
		scanf_s("%d", student[i]);
	}

	for (int i = 0; i < num; i++)
	{
		// 반복문 돌면서 total에 누적시킴
		// total += student[i];
		total = total + student[i];
	}

	// NULL이 아니면 건너띄고 아래 출력됨.
	printf("총점 %d 평균 %d \n", total, total/num);

	// free를 통해서 반드시 해제를 해야함.
	free(student);
}