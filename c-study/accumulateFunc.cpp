#include <stdio.h>

int global = 0;

void add(int a)
{
	global += a;
	printf("���� ���� ������: %d", global);
}

void main()
{
	int a = 0;

	while (a > -1)
	{
		printf("\n���� å�� ������ ���� �Է��Ͻÿ� :");
		scanf_s("%d", &a);

		if (a == -1)
		{
			printf("�� �й��ϼ���.");
			break;
		}
		add(a);
	}
}



//int main(void)
//{
//	int num = 0;
//	
//	
//	while (num < 5)
//	{
//		printf("���ѷ��� while��!!! %d\n", num);
//
//		num++;
//	}
//	
//	
//	/*
//	while (num < 5)
//		printf("�߰�ȣ ���� while��!! %d\n", num++);
//	*/
//
//	/*
//	while (num < 5)
//		printf("�߰�ȣ ����2 while��!! %d\n", num), num++;
//	*/
//
//	//return 0;
//
//}