#include<stdio.h>
#include<stdlib.h>
// ���� �޸� �Ҵ�

void main()
{
	int num;
	int* student;

	printf("�л����� �Է��ϼ��� : ");
	scanf_s("%d", &num);

	// �������� ���޸� �Ҵ� ����
	student = (int*)malloc(sizeof(int) * num);

	// �������� ������� ������ ������ NULL üũ�� �ؾ���.
	if (student == NULL)
	{
		printf("�޸𸮰� �����Ͽ� �Ҵ��Ҽ� �����ϴ�. \n");
		return;
	}

	// NULL�� �ƴϸ� �ǳʶ�� �Ʒ� ��µ�.
	printf("�Ҵ�� �޸��� ũ��� %d�Դϴ�.\n", sizeof(int) * num);
	
	// free�� ���ؼ� �ݵ�� ������ �ؾ���.
	free(student);
}