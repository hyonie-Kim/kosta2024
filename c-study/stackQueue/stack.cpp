#include<stdio.h>
#include<stdlib.h>

int* stack;
int size, top;

int push(int data) {
	if (top < size -1) {
		top++;
		stack[top] = data;
		return 1;
	}
	else {
		return 0;
	}
}

void main()
{
	size = 3;
	stack = (int*)malloc(size * sizeof(int));
	top = -1;


}