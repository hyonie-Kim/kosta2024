#include<stdio.h>


// BSD 방식 - 중괄호를 밑에 작성
// K&R 방식 - 중괄호를 옆에 작성

void main() 
{  
	// if else 문
	//int a = 5; // 보통 초기값을 0 로 준다.

	//printf("정수를 입력하세요 :");
	//scanf_s("%d", &a);

	//if (a > 5) 
	//{
	//	printf("a는 5보다 큽니다.\n");
	//}
	//else if (a < 5)
	//{
	//	printf("a는 5보다 작습니다.\n");
	//}
	//else if (a == 5)
	//{
	//	printf("a는 5는 같습니다.\n");
	//}
	//else
	//{
	//	printf("입력값이 올바르지 않습니다.");
	//} 


	// switch-case문

	//int shortcut = 0;
	//printf("단축키를 입력하세요 : ");
	//scanf_s("%d", &shortcut);

	//switch (shortcut){
	//case 1:
	//	printf("엄마 : 010-1234-1234\n");
	//	break;
	//case 2:
	//	printf("아빠 : 010-1234-1234\n");
	//	break;
	//case 3:
	//	printf("친구 : 010-1234-1234\n");
	//	break;
	//default:
	//	printf("해당 단축키가 없습니다.\n");
	//	break;
	//}

	int month = 0;
	printf("월을 입력하세요 : ");
	scanf_s("%d", &month);

	switch (month)
	{
	case 12:
	case 1:
	case 2:
		printf("겨울입니다.");
		break;

	case 3:
	case 4:
	case 5:
		printf("봄입니다.");
		break;

	case 6:
	case 7:
	case 8:
		printf("여름입니다.");
		break;

	case 9:
	case 10:
	case 11:
		printf("가을입니다.");
		break;
	default:
		printf("해당 계절은 없습니다.");
		break;
	}

}