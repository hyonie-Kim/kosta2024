#include<stdio.h>


// BSD ��� - �߰�ȣ�� �ؿ� �ۼ�
// K&R ��� - �߰�ȣ�� ���� �ۼ�

void main() 
{  
	// if else ��
	//int a = 5; // ���� �ʱⰪ�� 0 �� �ش�.

	//printf("������ �Է��ϼ��� :");
	//scanf_s("%d", &a);

	//if (a > 5) 
	//{
	//	printf("a�� 5���� Ů�ϴ�.\n");
	//}
	//else if (a < 5)
	//{
	//	printf("a�� 5���� �۽��ϴ�.\n");
	//}
	//else if (a == 5)
	//{
	//	printf("a�� 5�� �����ϴ�.\n");
	//}
	//else
	//{
	//	printf("�Է°��� �ùٸ��� �ʽ��ϴ�.");
	//} 


	// switch-case��

	//int shortcut = 0;
	//printf("����Ű�� �Է��ϼ��� : ");
	//scanf_s("%d", &shortcut);

	//switch (shortcut){
	//case 1:
	//	printf("���� : 010-1234-1234\n");
	//	break;
	//case 2:
	//	printf("�ƺ� : 010-1234-1234\n");
	//	break;
	//case 3:
	//	printf("ģ�� : 010-1234-1234\n");
	//	break;
	//default:
	//	printf("�ش� ����Ű�� �����ϴ�.\n");
	//	break;
	//}

	int month = 0;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &month);

	switch (month)
	{
	case 12:
	case 1:
	case 2:
		printf("�ܿ��Դϴ�.");
		break;

	case 3:
	case 4:
	case 5:
		printf("���Դϴ�.");
		break;

	case 6:
	case 7:
	case 8:
		printf("�����Դϴ�.");
		break;

	case 9:
	case 10:
	case 11:
		printf("�����Դϴ�.");
		break;
	default:
		printf("�ش� ������ �����ϴ�.");
		break;
	}

}