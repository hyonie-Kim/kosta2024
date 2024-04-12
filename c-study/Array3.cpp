#include <stdio.h>

int main(void)
{
	/* 배열의 이름은 주소를 가리키는 포인터 이므로 주소값 변경 X
	int arr[] = { 1,2,3,4,5 };
	int temp = 10;
	arr = temp; //오류 발생
	*/

	/*
	int arr[] = { 1,2,3,4,5 };
	int i;

	printf("배열의 요소 출력: ");

	for (i = 0; i < 5; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n\n");

	printf("배열의 주소 출력: ");
	for (i=0; i<5; i++)
	{
		printf("%d ", &arr[i]);
	}
	printf("\n\n");

	printf("배열의 이름 출력: %d\n", arr);

	return 0;

	*/

	/* arr 첫번째 요소의 주소값을 나타내므로 1씩 증가시키면 다음주소값으로 넘어감
	int arr[] = { 1,2,3,4,5 };

	printf("배열의 요소 출력: ");

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("%d\n", *(arr + 1));

	*/

	/* 배열의 이름 == 포인터 이므로 배열의 이름처럼 사용 O

	int arr[] = { 1,2,3,4,5 };
	int *pTemp;
	int i;

	pTemp = arr;

	printf("배열의 요소 출력: ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", pTemp[i]);
	}
	printf("\n");
	return 0;
	*/
}