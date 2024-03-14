#include <stdio.h> // printf 함수 사용!
#include <string.h> // strcpy 함수 사용!

struct student
{
	// 18bite 생성
	char name[10];
	int age;
	int height;


}st1, str2;
// 2개의 변수를 미리 선언할수 있음

void main()
{
	// 구조체 타입으로 변수 선언
	//student a;

	// 멤버 선택해서 값을 대입
	// 	a.age = 10;

	st1.age = 20;
	st1.height = 180;
	
	// st1.name = "sehyeon" XX 상수이기때문에 직접 대입안됨

	strcpy_s(st1.name, "lee");
	printf("이름:%s, 나이: %d, 키: %d \n", st1.name, st1.age, st1.height);


}