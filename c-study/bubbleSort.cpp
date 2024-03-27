#include<stdio.h>
#include<string.h>

void Swap(char* a, char* b) {
	char temp;
	
	// a��ü�� ������ �ּ�
	// *a �� ������
	temp = *a;  
	

	// a�� �� �Ѱ���
	*a = *b;
		// b���� temp �� �Ѱ���

	*b = temp;

}

void BubbleSort(char* arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 1; j < i; j++)
		{
			// 0���� �����Ϸ��� j-1
			// 0 ���� �����ϰ� 1����
			if (arr[j - 1] > arr[j])
			{

				Swap(&arr[j - 1], &arr[j]);
			}
		}
	}
}

void SelectedSort(char* arr, int size)
{

	int minidx = 0;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 1+i, min; j < i; j++)
		{
			// 0���� �����Ϸ��� j-1
			// 0 ���� �����ϰ� 1����
			if (arr[j - 1] > arr[j])
			{

				Swap(&arr[j - 1], &arr[j]);
			}
		}
	}
}

void main()
{
	// ���ڿ� ���� ����
	char str[] = "javascript";

	printf("���� ���� ���ڿ� %s\n", str);
	int num = strlen(str);


	
	BubbleSort(str, num);
	printf("���� �� ���ڿ� %s\n", str);

}

// ��������...
// ù���� �ι�° ���� ��
// �ε����� ����

// Swap�Լ� �ݹ��̷��۷��� ���
// �ּҰ��� �Ѱ��ָ� ���� ����

// c���� �����ͷ� ���� ������
// �ڹٽ�ũ��Ʈ�� return

// ���� ����
// ���� ������Ҹ� ã�Ƽ� �Ǿ����� ����
// ������ ���� ���ؼ� �����ϴµ�
// ���������� ������ �ִٰ� �ѹ��� �¹ٲ�