#include<stdio.h>

int global;

//int Add(int a, int b)
//{
//	int res = a + b;
//	return res;
//}

void Add(int a, int b)
{
	// void�� ���������ʰ�, global ���������� ����
	// ���������� ������ �ؾ�������,
	// ���������� ���Խ� ���������ʾƵ� ���� ���� �� �������� ���
	global = a + b;
}

void main()
{
	int a = 0;
	int b = 0;
	printf("�� ���� �Է��ϼ��� :");
	scanf_s("%d%d", &a, &b);

	Add(a, b);
	printf("�� ������ �� : %d\n", global);
}