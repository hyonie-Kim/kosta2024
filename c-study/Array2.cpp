#include<stdio.h>

void main()
{
	// �迭�� �溸�� �ʱⰪ�� ������ ū ���
	//int array[5] = { 1,2,3,4,5,6 };
	//int array[5] = { 1,2 };

	//int array[] = { 1,2,3,4,5 };

	int array[5] = { 1,2,3,4,5 };
	int array2[5];

	// �迭�� ����̱� ������ ���� �����ڸ� ���� ���� �Ѱܹ����� ����.
	// array2 = array;

	// �ݺ������� �ٲ�
	/*array2[0] = array[0];
	array2[1] = array[1];
	array2[2] = array[2];
	array2[3] = array[3];
	array2[4] = array[4];*/
	
	// sizeof ������
	// ù��° ��� ������� ������ 5�� ����..
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

	printf("�迭 ����� ���� / ��� : %d + %d + %d + %d + %d = %d / %f\n",
		array[0], array[1], array[2], array[3], array[4], total, avg
	)*/;
}