#include <stdio.h> // printf �Լ� ���!
#include <string.h> // strcpy �Լ� ���!

struct student
{
	// 18bite ����
	char name[10];
	int age;
	int height;


}st1, str2;
// 2���� ������ �̸� �����Ҽ� ����

void main()
{
	// ����ü Ÿ������ ���� ����
	//student a;

	// ��� �����ؼ� ���� ����
	// 	a.age = 10;

	st1.age = 20;
	st1.height = 180;
	
	// st1.name = "sehyeon" XX ����̱⶧���� ���� ���Ծȵ�

	strcpy_s(st1.name, "lee");
	printf("�̸�:%s, ����: %d, Ű: %d \n", st1.name, st1.age, st1.height);


}