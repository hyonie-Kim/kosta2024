#include<stdio.h>
#include<string.h>

#define BK 10
#define SL 2

int hashtable[BK][SL];

int Hash(int pKey) {
    return pKey % 10;
}

void InsertValue(int pKey)
{
    int bucket = 0;
    bucket = Hash(pKey);

    for (int i = 0; i < SL; i++)
    {
        if (hashtable[bucket][i] == 0)
        {
            hashtable[bucket][i] = pKey;
            break;
        }
    }
}

//void FindValue(int pKey)
//{
//   int bucket = 0;
//   bucket = Hash(pKey);
//   if (hashtable[bucket][0] == pKey)
//   {
//      printf("�˻��Ǿ����ϴ�.");
//   }
//   else
//   {
//      printf("�Է°��� �������� �ʽ��ϴ�.");
//   }
//}

bool FindValue(int pKey)
{
    int bucket = 0;
    bucket = Hash(pKey);
    for (int i = 0; i < SL; i++)
    {
        if (hashtable[bucket][i] == pKey) {
            return true;
        }
    }

    return false;
}

void main()
{
    int key = 0;

    memset(hashtable, 0, sizeof(hashtable));

    for (int i = 0; i < 5; i++)
    {
        printf("�����͸� �Է��ϼ��� : ");
        scanf_s("%d", &key);
        InsertValue(key);
    }

    printf("�˻�Ű�� �Է��ϼ��� : ");
    scanf_s("%d", &key);
    bool ret = FindValue(key);
    if (ret == true)
    {
        printf("�˻��Ǿ����ϴ�.");
    }
    else
    {
        printf("�Է°��� �������� �ʽ��ϴ�.");
    }
}