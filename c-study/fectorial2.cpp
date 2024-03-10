#include <stdio.h>

int fectorial(int x)
{
	int result = 1;

	if (x == 0)
	{
		result = 1;
	}
	else if (x > 0)
	{
		result = x * fectorial(x - 1);
	}
	return result;

}
void main()
{
	int num = 0;
	printf("정수를 입력해주세요 :\n");
	scanf_s("%d", &num);
	printf("%d", fectorial(num));
}