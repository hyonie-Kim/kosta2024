#include <stdio.h>
#include <string.h>

/*
우리가 우체국에서 물건을 어디론가 보낼 때,
물건의 종류, 무게, 높이 등의 정보를 입력
우리는 이러한 정보들을 갖고 있는 물건에 대한 구조체를 만들어보자.

구조체 이름은 object 라고 하고, 
구조체 멤버로는 이름(name), 높이(height), 무게(weight)를 갖는다.

구조체 변수를 하나 선언하고, 
구조체 변수를 통해 각각의 멤버에 값을 대입

대입하는 값은 사용자로부터 입력 받으며, 
입력이 끝나면 대입한 멤버의 값을 화면에 출력하도록 프로그램을 작성
*/

struct object
{
	char name[10];
	int height;
	int weight;
};

void main()
{
	object item;

	printf("물건의 이름 : ");
	//strcpy_s(item.name, sizeof(item.name), "");
	scanf_s("%s",item.name,sizeof(item.name));
	printf("물건의 높이(cm) : ");
	scanf_s("%d", &item.height);
	printf("물건의 무게(kg) : ");
	scanf_s("%d", &item.weight);

	printf("보낼 물건의 정보 : %s,%dcm,%dkg ", item.name, item.height, item.weight);

}