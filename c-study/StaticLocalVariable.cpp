#include<stdio.h>

/*
void simpleFunc()
{
	static int num1 = 0; // �ʱ�ȭ ���������� 0 
	int num2 = 0;	// �ʱ�ȭ���� ������ ������ �� �ʱ�ȭ

	num1++, num2++;
	
	printf("static: %d, local:%d \n", num1, num2);

}

int main()
{
	int i;
	for (i = 0; i < 3; i++)
		simpleFunc();

		return 0;
}

*/



int AddToTotal(int num)
{
	static int total = 0;
	total = total +num;
	return total;
}

int main(void)
{
	// ����ڰ� �Է��ϴ� ���� �����Ͽ� �հ� ���
	int num, i;
	for (i = 0; i < 3; i++)
	{
		printf("�Է�%d:", i + 1);
		scanf_s("%d", &num);
		printf("����: %d\n", AddToTotal(num));
		
	}
	return 0;
}