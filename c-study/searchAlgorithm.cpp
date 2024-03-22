#include <stdio.h>

int LinearSearch(int *pArr, int size, int searchKey) {

	for (int i = 0; i < searchKey; i++)
	{
		if (searchKey == pArr[i]) // pArr 포인터를 배열처럼 쓸수 있음
		{
			return searchKey;
		}
	}
	return -1;
}
void main()
{
	int arr[] = { 6,4,2,3,7,8,9,10,1 };
	int arrLength = sizeof(arr) / sizeof(arr[0]); // 40바이트가 아니라 갯수를 원함

	int key = 0;
	scanf_s("%d", &key);

	int ret = LinearSearch(arr, arrLength, key);
	
	if (ret == -1)
	{
		printf("검색 불가\n");
	}
	else
	{
		printf("검색 했음\n");
	}

}




// 검색
// 8을 찾고 싶어요.
// scanf를 통해서 임의의 수를 입력

//arr[0], arr[1];

//printf("배열의 요소 출력: ");
/*for (int i = 0; i < arrLength; i++)
{
	if (8 == arr[i])
	{
		scanf_s(" 숫자 %d을 찾았습니다. ", arr[i]);
	}
	else{
		scanf_s("%d은 찾는숫자가 아닙니다. ", arr[i]);
	}

}*/

// 배열의 이름은 주소값