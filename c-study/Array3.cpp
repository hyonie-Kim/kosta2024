#include <stdio.h>

int main(void)
{
	/* �迭�� �̸��� �ּҸ� ����Ű�� ������ �̹Ƿ� �ּҰ� ���� X
	int arr[] = { 1,2,3,4,5 };
	int temp = 10;
	arr = temp; //���� �߻�
	*/

	/*
	int arr[] = { 1,2,3,4,5 };
	int i;

	printf("�迭�� ��� ���: ");

	for (i = 0; i < 5; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n\n");

	printf("�迭�� �ּ� ���: ");
	for (i=0; i<5; i++)
	{
		printf("%d ", &arr[i]);
	}
	printf("\n\n");

	printf("�迭�� �̸� ���: %d\n", arr);

	return 0;

	*/

	/* arr ù��° ����� �ּҰ��� ��Ÿ���Ƿ� 1�� ������Ű�� �����ּҰ����� �Ѿ
	int arr[] = { 1,2,3,4,5 };

	printf("�迭�� ��� ���: ");

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("%d\n", *(arr + 1));

	*/

	/* �迭�� �̸� == ������ �̹Ƿ� �迭�� �̸�ó�� ��� O

	int arr[] = { 1,2,3,4,5 };
	int *pTemp;
	int i;

	pTemp = arr;

	printf("�迭�� ��� ���: ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", pTemp[i]);
	}
	printf("\n");
	return 0;
	*/
}