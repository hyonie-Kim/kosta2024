#include<stdio.h>
#include<stdlib.h>

void main()
{
	int num;
	int* student;
	int total = 0; // 0���� �ʱ�ȭ

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

	for (int i = 0; i < num; i++)
	{
		printf("%d��° �л��� ���� �Է�: ", i + 1);
		scanf_s("%d", student[i]);
	}

	for (int i = 0; i < num; i++)
	{
		// �ݺ��� ���鼭 total�� ������Ŵ
		// total += student[i];
		total = total + student[i];
	}

	// NULL�� �ƴϸ� �ǳʶ�� �Ʒ� ��µ�.
	printf("���� %d ��� %d \n", total, total/num);

	// free�� ���ؼ� �ݵ�� ������ �ؾ���.
	free(student);
}