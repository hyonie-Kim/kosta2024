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
        printf("검색되었습니다.");
    }
    else
    {
        printf("입력값은 존재하지 않습니다.");
    }
}

void main()
{
    int key = 0;

    memset(hashtable, 0, sizeof(hashtable));

    for (int i = 0; i < 3; i++)
    {
        printf("데이터를 입력하세요 : ");
        scanf_s("%d", &key);
        InsertValue(key);
    }

    printf("검색키를 입력하세요 : ");
    scanf_s("%d", &key);
    FindValue(key);
}