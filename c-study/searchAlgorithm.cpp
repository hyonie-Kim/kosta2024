#include <stdio.h>

int LinearSearch(int *pArr, int size, int searchKey) {

	for (int i = 0; i < searchKey; i++)
	{
		if (searchKey == pArr[i]) // pArr �����͸� �迭ó�� ���� ����
		{
			return searchKey;
		}
	}
	return -1;
}
void main()
{
	int arr[] = { 6,4,2,3,7,8,9,10,1 };
	int arrLength = sizeof(arr) / sizeof(arr[0]); // 40����Ʈ�� �ƴ϶� ������ ����

	int key = 0;
	scanf_s("%d", &key);

	int ret = LinearSearch(arr, arrLength, key);
	
	if (ret == -1)
	{
		printf("�˻� �Ұ�\n");
	}
	else
	{
		printf("�˻� ����\n");
	}

}




// �˻�
// 8�� ã�� �;��.
// scanf�� ���ؼ� ������ ���� �Է�

//arr[0], arr[1];

//printf("�迭�� ��� ���: ");
/*for (int i = 0; i < arrLength; i++)
{
	if (8 == arr[i])
	{
		scanf_s(" ���� %d�� ã�ҽ��ϴ�. ", arr[i]);
	}
	else{
		scanf_s("%d�� ã�¼��ڰ� �ƴմϴ�. ", arr[i]);
	}

}*/

// �迭�� �̸��� �ּҰ�