#include<stdio.h>

int main(void)
{

	/*
	int dan = 0, num = 1;

	printf("�� ��? ");
	scanf_s("%d", &dan);

	while (num < 10)
	{
		printf("%d x %d = %d \n", dan, num, dan*num);
		num++;
	}

	*/

	/* 
	int num = 0;
	int a = 0;
	printf("������ �ϳ� �Է����ּ���.");
	scanf_s("%d", &num);

	while (a < num)
	{
		printf("Hello World! %d \n", a);
		a++;
	}
	*/

	/*
	int num = 0;
	int n = 1;
	printf("���� ������ �Ѱ� �Է����ּ���.");
	scanf_s("%d", &num);

	while (n <= num)
	{

		printf("%d ", n * 3);
		n++;
	}

	*/

	/*
	* ������ ��� ���ϱ�
	int num = 0;
	int sum = 0;

	printf("������ �Է����ּ���.\n");
	

	while (1)
	{
		scanf_s("%d", &num);
		sum = sum + num;

		if (num == 0)
			break;
	}

	printf("�հ�: %d", sum);

	*/

	/* 
	* ������ ���� ���
	int dan = 0;
	int num = 9;
	printf("����� ����ұ��?");
	scanf_s("%d", &dan);

	while (1)
	{

		printf("%d x %d = %d \n",dan, num, dan*num);
		num -= 1; // num�� 1�� ����

		if (num == 0)
			break;
	}

	*/

	int num, input;
	int i = 0, total = 0;

	printf("�Է��� ������ ������? ");
	scanf_s("%d", &num);

	while (i++ < num)
	{
		printf("������ �Է�: ");
		scanf_s("%d", &input);
		total += input;
	}
	
	printf("��հ�: %f", (double)total/num);

	return 0;

}

