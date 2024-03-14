#include <stdio.h>

//길이가 100인 정수형 배열을 선언한다.
//이 배열에 인덱스 0부터 99까지의 배열의 요소에 값을 1부터 100까지 입력한다.
//그리고, 입력한 배열의 요소를 모두 더한 총합을 출력하라.

int main()
{
    int array[100];
    int size = sizeof(array) / sizeof(array[0]) + 1;
    int total = 0;

    for (int i = 1; i < size; i++)
    {
        array[i] = i;
        //printf("배열의 총합:%d\n", array[i]);

    }

    for (int i = 1; i < size; i++)
    {
        total = total + array[i];

    }
    printf("배열의 요소를 모두 더한 총합: %d\n", total);
    return 0;
}