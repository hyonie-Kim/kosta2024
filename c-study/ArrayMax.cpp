
#include <stdio.h>

//���̰� 5�� ������ �迭�� �����ϰ�, �ʱⰪ��{ 3, 5, 2, 11, 10 } 
//�̶�� �����Ѵ�. 
//5���� �迭�� ��� �� ���� ū ���� ã�Ƽ� ���

int main()
{
    // ���̰� 5�� ���� �迭 ���� �� �ʱⰪ ����
    int a[] = { 3,5,2,11,10 };
    int aSize = sizeof(a) / sizeof(a[0]);
    int i = 0;
    int imax = a[0];

    for (int i = 0; i < aSize; i++)
    {

        if (imax < a[i])
        {
            imax = a[i];
        }

    }
    printf("5���� �迭�� ����� ���� ū��: %d\n", imax);
    return 0;
}
