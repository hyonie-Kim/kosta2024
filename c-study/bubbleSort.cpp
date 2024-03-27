#include<stdio.h>
#include<string.h>

void Swap(char* a, char* b) {
	char temp;
	
	// a자체는 포인터 주소
	// *a 의 실제값
	temp = *a;  
	

	// a에 비를 넘겨줌
	*a = *b;
		// b에는 temp 를 넘겨줌

	*b = temp;

}

void BubbleSort(char* arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 1; j < i; j++)
		{
			// 0부터 시작하려면 j-1
			// 0 으로 시작하고 1부터
			if (arr[j - 1] > arr[j])
			{

				Swap(&arr[j - 1], &arr[j]);
			}
		}
	}
}

void SelectedSort(char* arr, int size)
{

	int minidx = 0;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 1+i, min; j < i; j++)
		{
			// 0부터 시작하려면 j-1
			// 0 으로 시작하고 1부터
			if (arr[j - 1] > arr[j])
			{

				Swap(&arr[j - 1], &arr[j]);
			}
		}
	}
}

void main()
{
	// 문자열 변수 선언
	char str[] = "javascript";

	printf("정렬 전의 문자열 %s\n", str);
	int num = strlen(str);


	
	BubbleSort(str, num);
	printf("정렬 된 문자열 %s\n", str);

}

// 버블정렬...
// 첫번쨰 두번째 꺼를 비교
// 인덱스로 접근

// Swap함수 콜바이레퍼런스 사용
// 주소값을 넘겨주면 값을 받음

// c언어는 포인터로 값을 공유함
// 자바스크립트는 return

// 선택 정렬
// 제일 작은요소를 찾아서 맨앞으로 보냄
// 버블같은 경우는 비교해서 변경하는데
// 선택정렬은 가지고 있다가 한번에 맞바꿈