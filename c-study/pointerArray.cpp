#include<stdio.h>

void main()
{
	//int arr[] = { 1, 2, 3, 4, 5 };

	//printf("배열의 요소 출력: ");
	//
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d ", arr[i]);
	//}
	//printf("\n");

	////printf("%x\n", arr);

	//printf("포인터가 가리키는 값 출력: \n");
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%x\n", *(arr) + i);

	//}
	//printf("%x\n", *(arr));
	//printf("%x\n", *(arr + 1));
	//printf("%x\n", *(arr + 2));
	//printf("%x\n", *(arr + 3));
	//printf("%x\n", *(arr + 4));


	int arr[] = { 1, 2, 3, 4, 5 };
	int* pTemp; 
	
	//pTemp = &arr[0];
	pTemp = arr;
	
	// pTemp[0]는 배열의 첫번쨰 값

	printf("배열의 요소 출력\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", pTemp[i]);
	}

	/*printf("배열의 요소 출력");
	printf("%d\n", pTemp[0]);
	printf("%d\n", pTemp[1]);
	printf("%d\n", pTemp[2]);
	printf("%d\n", pTemp[3]);
	printf("%d\n", pTemp[4]);*/

	
}