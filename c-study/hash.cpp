#include<stdio.h>
#include<string.h>


// �ؽ����̺� 2���� �迭 ����
int hashtable[10][1];

// �������ڷ� key��
// ���� �Է� ���� ���ڸ��� ����
// ���ڸ��� �޾Ƽ� ��Ŷ���� ���
int Hash(int pKey) {

	return pKey % 10;

}

void InsertValue(int pKey)
{
	int bucket = 0;
	// Ű�� ����
	bucket = Hash(pKey);
	// ��Ŷ�� ù��° ��ġ �Է� Ű����
		// �ش� ��ġ�� ����
	hashtable[bucket][0] = pKey;
}

void FindValue(int pKey)
{

	int bucket = 0;
	bucket = Hash(pKey);
	if (hashtable[bucket][0] == pKey)
	{
		printf("�˻��Ǿ����ϴ�.");
	}
	else
	{
		printf("�Է°� �������� �ʽ��ϴ�.");

	}
}

void main()
{
	
	// ������ key�� �Է� ���� ��
	int key = 0;
	

	// �޸� �ʱ�ȭ �Լ�
	// ������ ���� 0���� �ʱ�ȭ
	memset(hashtable, 0, sizeof(hashtable));


	for (int i = 0; i < 3; i++)
	{

		printf("�����͸� �Է��ϼ���: ");
		// Ű�� �Է�
		scanf_s("%d", &key);	
		InsertValue(key);
	}

	printf("�˻�Ű�� �Է��ϼ���: ");
	scanf_s("%d", &key);
	FindValue(key);


	/*
	printf("%d\n", hashtable[0][0]);
	printf("%d\n", hashtable[1][0]);
	printf("%d\n", hashtable[2][0]);
	*/

}