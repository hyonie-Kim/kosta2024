#include<stdio.h>

void main()
{
	// int array[5];

	// �迭�� �ʱ�ȭ
	int array[5] = { 1,2,3,4,5 };

	// 1. �� ���� 
	//array[0] = 1;
	//array[1] = 2;
	//array[2] = 3;
	//array[3] = 4;
	//array[4] = 5;

	// 2. �� ����
	//�ݺ��� �ϳ��� ���
	/*for (int i = 0; i < 5; i++)
	{
		printf("������ �Է��ϼ��� :");
		scanf_s("%d", &array[i]);
	}*/

	// total�� �ݺ������� ����
	//int total = array[0] + array[1] + array[2] + array[3] + array[4];
	
	int total = 0;
	for (int i = 0; i < 5; i++)
	{
		total = total + array[i];
	}
	double avg = total / 5;

	// printf("�迭 ����� ��� : %d, %d, %d, %d, %d\n", array[0], array[1], array[2], array[3], array[4]);
	
	printf("�迭 ����� ���� / ��� : %d + %d + %d + %d + %d = %d / %f\n", 
		array[0], array[1], array[2], array[3], array[4], total, avg
	);

}