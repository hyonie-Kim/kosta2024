#include<stdio.h>

void main()
{
	int array[5] = { 1,2 };

	int total = 0;
	for (int i = 0; i < 5; i++)
	{
		total = total + array[i];
	}
	double avg = total / 5;

	printf("¹è¿­ ¿ä¼ÒÀÇ ÃÑÁ¡ / Æò±Õ : %d + %d + %d + %d + %d = %d / %f\n",
		array[0], array[1], array[2], array[3], array[4], total, avg
	);
}