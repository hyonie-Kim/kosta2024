#include <stdio.h>
#include <string.h>

/*
�츮�� ��ü������ ������ ���а� ���� ��,
������ ����, ����, ���� ���� ������ �Է�
�츮�� �̷��� �������� ���� �ִ� ���ǿ� ���� ����ü�� ������.

����ü �̸��� object ��� �ϰ�, 
����ü ����δ� �̸�(name), ����(height), ����(weight)�� ���´�.

����ü ������ �ϳ� �����ϰ�, 
����ü ������ ���� ������ ����� ���� ����

�����ϴ� ���� ����ڷκ��� �Է� ������, 
�Է��� ������ ������ ����� ���� ȭ�鿡 ����ϵ��� ���α׷��� �ۼ�
*/

struct object
{
	char name[10];
	int height;
	int weight;
};

void main()
{
	object item;

	printf("������ �̸� : ");
	//strcpy_s(item.name, sizeof(item.name), "");
	scanf_s("%s",item.name,sizeof(item.name));
	printf("������ ����(cm) : ");
	scanf_s("%d", &item.height);
	printf("������ ����(kg) : ");
	scanf_s("%d", &item.weight);

	printf("���� ������ ���� : %s,%dcm,%dkg ", item.name, item.height, item.weight);

}