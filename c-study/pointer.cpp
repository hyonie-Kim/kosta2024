#include<stdio.h>

void main()
{
	int b = 100;
	int* pb = &b; //*�ּҰ��� �����ϴ� �������� ��Ÿ��. 

	// b�� �ּ� ��
	 printf("b = %d\n", &b);

	// 10������ ���
	// ������ �ּҰ��� ��µ�.
	printf("b = %p\n", &b);
	printf("pb = %p\n", pb);
	printf("*pb = %d\n", *pb); // pd�� ����Ű�� �������� ��������.

	
	
}