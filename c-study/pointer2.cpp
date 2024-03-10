#include <stdio.h>

void main()
{
	char a = 'F';
	int b = 5;
	char* pA = &a;
	int* pB = &b;


	printf("pA 실제값: %c\npB 실제값: %d", *pA, *pB);
}