#include <stdio.h>
#include <string.h>

union unTemp
{
	char a;
	int b;
	double c;
}un;

enum Week {
	// 열거형을 사용하면 가독성이 좋아진다.
	// 1 이후에 나머지는 2,3,4,5 증가
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
	printf("요일을 선택하세요: ");
	scanf_s("%d", &day);


	switch (day)
	{
	case sun:
		printf("일요일엔 짜파게티\n");
		break;
	case mon:
		printf("월요일엔 짜파게티\n");
		break;
	case tue:
		printf("화요일엔 짜파게티\n");
		break;
	case wed:
		printf("수요일엔 짜파게티\n");
		break;
	case thu:
		printf("목요일엔 짜파게티\n");
		break;
	case fri:
		printf("금요일엔 짜파게티\n");
		break;
	case sat:
		printf("토요일엔 짜파게티\n");
		break;
	default:
		printf("잘못 입력하였습니다.\n");
		break;
	}
	//각각의 메모리 사이즈 출력

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