
#include <stdio.h>

//길이가 5인 정수형 배열을 선언하고, 초기값을{ 3, 5, 2, 11, 10 } 
//이라고 설정한다. 
//5개의 배열의 요소 중 가장 큰 값을 찾아서 출력

int main()
{
    // 길이가 5인 정수 배열 선언 및 초기값 설정
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
    printf("5개의 배열의 요소중 가장 큰값: %d\n", imax);
    return 0;
}
