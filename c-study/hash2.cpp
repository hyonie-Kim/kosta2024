#include<stdio.h>
#include<string.h>

#define BK 10
#define SL 1

int hashtable[BK][SL];

int Hash(int pKey) {
    return pKey % 10;
}

void InsertValue(int pKey)
{
    int bucket = 0;
    bucket = Hash(pKey);
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
        printf("�Է°��� �������� �ʽ��ϴ�.");
    }
}

void main()
{
    int key = 0;

    memset(hashtable, 0, sizeof(hashtable));

    for (int i = 0; i < 3; i++)
    {
        printf("�����͸� �Է��ϼ��� : ");
        scanf_s("%d", &key);
        InsertValue(key);
    }

    printf("�˻�Ű�� �Է��ϼ��� : ");
    scanf_s("%d", &key);
    FindValue(key);
}