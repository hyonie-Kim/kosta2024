#include <stdio.h>

void main()
{
	char a = 'F';
	int b = 5;
	char* pA = &a;
	int* pB = &b;


	printf("pA ������: %c\npB ������: %d", *pA, *pB);
}