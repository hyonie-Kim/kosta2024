#include <stdio.h>
#include <string.h>
// null 포인터

void main()
{
	char str[] = "Love";
	char* p;
	
	// 2개 전달인자 중 
	// 첫번째는 찾는 변수, 
	// 두번째는 찾는 문자
	// 해당 위치의 주소값을 리턴
	p = strchr(str, 'v');

	// null 이 아니면
	if (p != NULL)
	{
		*p = 'b';
		printf("변경 결과 :  %s\n", str);
	}
	else
	{
		printf("NULL 을 리턴하였습니다.");
	}
}