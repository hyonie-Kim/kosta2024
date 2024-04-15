#include<stdio.h>

void main()
{
	int b = 100;
	int* pb = &b; //*주소값을 저장하는 변수임을 나타냄. 

	// b의 주소 값
	 printf("b = %d\n", &b);

	// 10진수로 출력
	// 동일한 주소값이 출력됨.
	printf("b = %p\n", &b);
	printf("pb = %p\n", pb);
	printf("*pb = %d\n", *pb); // pd가 가르키는 실제값이 참조가됨.

	
	
}