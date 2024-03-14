#include<stdio.h>
#include<stdlib.h>
// 동적 메모리 할당

void main()
{
	int num;
	int* student;

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

	// NULL이 아니면 건너띄고 아래 출력됨.
	printf("할당된 메모리의 크기는 %d입니다.\n", sizeof(int) * num);
	
	// free를 통해서 반드시 해제를 해야함.
	free(student);
}