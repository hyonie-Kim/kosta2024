#include<stdio.h>

void main()
{
	//int arr[] = { 1, 2, 3, 4, 5 };

	//printf("�迭�� ��� ���: ");
	//
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d ", arr[i]);
	//}
	//printf("\n");

	////printf("%x\n", arr);

	//printf("�����Ͱ� ����Ű�� �� ���: \n");
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
	
	// pTemp[0]�� �迭�� ù���� ��

	printf("�迭�� ��� ���\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", pTemp[i]);
	}

	/*printf("�迭�� ��� ���");
	printf("%d\n", pTemp[0]);
	printf("%d\n", pTemp[1]);
	printf("%d\n", pTemp[2]);
	printf("%d\n", pTemp[3]);
	printf("%d\n", pTemp[4]);*/

	
}