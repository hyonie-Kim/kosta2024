#include<stdio.h>
#include<string.h>


// 해시테이블 2차원 배열 생성
int hashtable[10][1];

// 전달인자로 key값
// 들어온 입력 값의 끝자리를 리턴
// 끝자리를 받아서 버킷으로 사용
int Hash(int pKey) {

	return pKey % 10;

}

void InsertValue(int pKey)
{
	int bucket = 0;
	// 키값 전달
	bucket = Hash(pKey);
	// 버킷의 첫번째 위치 입력 키값을
		// 해당 위치에 저장
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
		printf("입력값 존재하지 않습니다.");

	}
}

void main()
{
	
	// 저장할 key값 입력 받을 것
	int key = 0;
	

	// 메모리 초기화 함수
	// 쓰레기 값을 0으로 초기화
	memset(hashtable, 0, sizeof(hashtable));


	for (int i = 0; i < 3; i++)
	{

		printf("데이터를 입력하세요: ");
		// 키값 입력
		scanf_s("%d", &key);	
		InsertValue(key);
	}

	printf("검색키를 입력하세요: ");
	scanf_s("%d", &key);
	FindValue(key);


	/*
	printf("%d\n", hashtable[0][0]);
	printf("%d\n", hashtable[1][0]);
	printf("%d\n", hashtable[2][0]);
	*/

}