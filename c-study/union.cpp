#include <stdio.h>
#include <string.h>

union unTemp
{
	char a;
	int b;
	double c;
}un;

enum Week {
	// �������� ����ϸ� �������� ��������.
	// 1 ���Ŀ� �������� 2,3,4,5 ����
	sun =1,
	mon,
	tue,
	wed,
	thu,
	fri,
	sat
};


void main()
{
	int day;
	printf("������ �����ϼ���: ");
	scanf_s("%d", &day);


	switch (day)
	{
	case sun:
		printf("�Ͽ��Ͽ� ¥�İ�Ƽ\n");
		break;
	case mon:
		printf("�����Ͽ� ¥�İ�Ƽ\n");
		break;
	case tue:
		printf("ȭ���Ͽ� ¥�İ�Ƽ\n");
		break;
	case wed:
		printf("�����Ͽ� ¥�İ�Ƽ\n");
		break;
	case thu:
		printf("����Ͽ� ¥�İ�Ƽ\n");
		break;
	case fri:
		printf("�ݿ��Ͽ� ¥�İ�Ƽ\n");
		break;
	case sat:
		printf("����Ͽ� ¥�İ�Ƽ\n");
		break;
	default:
		printf("�߸� �Է��Ͽ����ϴ�.\n");
		break;
	}
	//������ �޸� ������ ���

	/*printf("%d\n", sizeof(un.a));
	printf("%d\n", sizeof(un.b));
	printf("%d\n", sizeof(un.c));

	un.a = 'A';
	printf("%c\n", un.a);

	un.b = 100;
	printf("%c\n", un.b);
	
	un.c = 3.14;
	printf("%f\n", un.c);*/

}