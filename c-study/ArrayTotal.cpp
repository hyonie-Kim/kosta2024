#include <stdio.h>

//���̰� 100�� ������ �迭�� �����Ѵ�.
//�� �迭�� �ε��� 0���� 99������ �迭�� ��ҿ� ���� 1���� 100���� �Է��Ѵ�.
//�׸���, �Է��� �迭�� ��Ҹ� ��� ���� ������ ����϶�.

int main()
{
    int array[100];
    int size = sizeof(array) / sizeof(array[0]) + 1;
    int total = 0;

    for (int i = 1; i < size; i++)
    {
        array[i] = i;
        //printf("�迭�� ����:%d\n", array[i]);

    }

    for (int i = 1; i < size; i++)
    {
        total = total + array[i];

    }
    printf("�迭�� ��Ҹ� ��� ���� ����: %d\n", total);
    return 0;
}