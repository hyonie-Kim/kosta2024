#include <stdio.h>

int Plus(int a, int b)
{
	return a + b;
}

int Minus(int a, int b)
{
	return a - b;
}

void main()
{
	int x, y;
	// �Լ� ������ �����
	// �Լ� ������ �̸� : fptr
	// Plus �Լ��� �ּҰ��� �ѱ�
	// ���������� ������ ���ƾ��� int a, int b
	int (*fptr)(int a, int b);

	printf("�� ������ �Է��ϼ���: ");
	scanf_s("%d%d", &x, &y);

	//int res = Plus(x,y);
	
	// �÷��� �Լ��� �ּҰ��� fptr�� �ѱ�
	// �ּҰ� ����
	fptr = Plus; 
	int res = fptr(x, y);

	printf("��� = %d\n", res);

	fptr = Minus;
	res = fptr(x, y);

	printf("��� = %d\n", res);
}