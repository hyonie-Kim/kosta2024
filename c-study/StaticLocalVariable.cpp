#include<stdio.h>

/*
void simpleFunc()
{
	static int num1 = 0; // 초기화 하지않으면 0 
	int num2 = 0;	// 초기화하지 않으면 쓰레기 값 초기화

	num1++, num2++;
	
	printf("static: %d, local:%d \n", num1, num2);

}

int main()
{
	int i;
	for (i = 0; i < 3; i++)
		simpleFunc();

		return 0;
}

*/



int AddToTotal(int num)
{
	static int total = 0;
	total = total +num;
	return total;
}

int main(void)
{
	// 사용자가 입력하는 값을 누적하여 합계 출력
	int num, i;
	for (i = 0; i < 3; i++)
	{
		printf("입력%d:", i + 1);
		scanf_s("%d", &num);
		printf("누적: %d\n", AddToTotal(num));
		
	}
	return 0;
}