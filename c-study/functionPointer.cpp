#include <stdio.h>

//�迭�� Ư���Լ��� �Ѱܼ� �Լ� �ȿ��� �迭�� �������

void func(int* pArr)
{
	printf("�;ƾƾ� pArr �ּҰ� ����: %x\n", pArr);


	printf("pArr : %x\n", *pArr);
	printf("pArr : %x\n", *(pArr + 1));


	printf("pArr : %x\n", pArr[0]);
	printf("pArr : %x\n", pArr[1]);
	printf("pArr : %x\n", pArr[2]);
	printf("pArr : %x\n", pArr[3]);
	printf("pArr : %x\n", pArr[4]);

}

void main()
{
	// �迭�� �̸��� �����ʹ�.
	int arr[] = { 1,2,3,4,5 };

	// �迭 �ѱ涧 �ۼ���
	// �迭�� �̸��� �ѱ��ȴ�.
	// �ᱹ {1,2,3,4,5} �޸𸮸� ���� �ϰڴٴ� �ǹ�
	// ��°�� ���ѱ�⶧���� �Լ����� �ּҰ��� �˷��ָ��
	// ���� �޸� ����
	// ��� 
	// �ּҰ��� �����ϴ� ������ ������ �����ϸ� ��!

	func(arr);



}