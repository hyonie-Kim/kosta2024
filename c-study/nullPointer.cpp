#include <stdio.h>
#include <string.h>
// null ������

void main()
{
	char str[] = "Love";
	char* p;
	
	// 2�� �������� �� 
	// ù��°�� ã�� ����, 
	// �ι�°�� ã�� ����
	// �ش� ��ġ�� �ּҰ��� ����
	p = strchr(str, 'v');

	// null �� �ƴϸ�
	if (p != NULL)
	{
		*p = 'b';
		printf("���� ��� :  %s\n", str);
	}
	else
	{
		printf("NULL �� �����Ͽ����ϴ�.");
	}
}