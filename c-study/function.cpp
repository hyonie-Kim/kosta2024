#include<stdio.h>

// ���� main �Լ� �տ� Ŀ���� �Լ��� �����Ѵ�.
// ����� ������ ������ �����Ѵ�. ���� �ڵ忡���� ����� ��������
int Add(int a, int b)
{
	int res = a + b;

	return res;
}

void print_Hap(int result)
{
	printf("������� %d �Դϴ�.\n", result);
}

// �Լ��߰�
int multiply(int a)
{
	return a * 2;
}

// �簢�� ���� ���ϱ�
void Rect(int width, int height)
{
	int rect = width * height;
	printf("�簢���� ���� : %d\n", rect);
}

// ���� ���� ���ϱ�
void Circle(int radian)
{	
	double area = 0.0;
	area = radian* radian * 3.14;
	printf("���� ����: %f\n", area);
}

// ���� �Լ�

void Plus(int a, int b)
{
	printf("�� ���� ��: %d\n", a + b);
	
}
void Minus(int a, int b)
{
	printf("�� ���� ��: %d\n", a - b);
	
}
void Mutiple(int a, int b)
{
	printf("�� ���� ��: %d\n", a * b);
	
}
void Divide(int a, int b)
{
	printf("�� ���� ������: %d\n", a / b);
}

void main()
{
	// ������ 4����Ʈ �޸� ����
	int i = 5;
	int j = 3;


	// i. j ���� Add(int a, int b)�� �����
	// �޸𸮰� �������� ����
	int k = Add(i, j);

	//printf("������� %d �Դϴ�.\n", k);
	print_Hap(k);

	//int r = multiply(i);
	//printf("2 * %d �� ������� %d�Դϴ�.\n", i, r);

	/*int w = 0;
	int h = 0;

	printf("�������� �Է����ּ���.\n");
	scanf_s("%d%d", &w, &h);
	Rect(w, h);*/

	/*int r = 0;
	printf("�������� ���̸� �Է��ϼ���.\n");
	scanf_s("%d", &r);
	Circle(r);*/


	int a = 0;
	int b = 0;

	printf("�� ������ �Է��ϼ��� : ");
	scanf_s("%d%d", &a,&b);

	Plus(a, b);
	Minus(a, b);
	Mutiple(a, b);
	Divide(a, b);

	/*printf("�� ���� ��: %d\n", a + b);
	printf("�� ���� ��: %d\n", a - b);
	printf("�� ���� ��: %d\n", a * b);
	printf("�� ���� ������: %d\n", a / b);*/


}

// �����
// f10 - ���ٽ���
// f11 - ���� ������..