#include<stdio.h>

// ����������ʰ� ���� - ctrl +f5

/*
��¥: 2024.02.27
�ۼ���: hyonie
����: hello world

1. // ª�� ������ �ּ�
2. �������Ҷ� ������ ���� �ʴ´�.
*/

int main() {
	
	//printf("�輼��\n���� �������� ������� 468\n010-5838-4884");
	//printf("Hello world\n");
	

	/*
	* 
	* ���Ĺ��� %d - decimal�� ���ڷ� 10������� ��, %f �Ǽ�
	* 
	*/
	

	// ������ ���
	//int value;
	//int num = 5;
	//value = 100;
	//printf("%d %d\n", value, num);

	// ������ ���
	/*
	* "" ū����ǥ�� ���ڿ��̹Ƿ� ���� ����ǥ�� ����Ѵ�
	*/

	//int value = 100;
	//char ch = 'C';
	//
	//printf("��°��: ���� %d, ���� %c\n", value, ch);


	// �簢�� ����
	//int width = 10;
	//int height = 20;

	//printf("�簢���� ����: %d\n", width * height);

	// �Ǽ� - ���� ����
	//double area = 0.0;
	//int radius = 5;

	//area = radius* radius * 3.14;

	//printf("���� ���̴� %f\n", area);

	//char ch1 = 'A';
	//char ch2 = 'b';
	//char ch3 = '1';

	//printf("���ڿ� ���:%c %c %c\n", ch1, ch2, ch3);
	//printf("10���� ���:%d %d %d\n",ch1,ch2,ch3);

	// ����� �Է��� �޴� scanf

	int input1 = 0;
	int input2 = 0;
	
	printf("������ �Է��ϼ��� :");
	scanf_s("%d%d", &input1, &input2); // MS���� _s �� �ٿ��� ����ϴ� ���� ����
	
	/*printf("������ �Է��ϼ��� :");
	scanf_s("%d", &input2);*/
	
	
	printf("�μ��� �� ���: %d\n", input1 + input2);

	return 0;
}

