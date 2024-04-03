#include<iostream>
#include<map>
#include<string>

// 전화번호부 사람 검색
using namespace std;

struct PhoneAddr
{
	string name;
	int phonenum;
}arPerson[] = { {"지수", 1234}, {"효니",3456},{"은지", 543}, {"지선", 3332} };

void main()
{
	// 맵객체 생성
	map<string, int> person;
	map<string, int>::iterator it;
	string name;

	for (int i = 0; i < sizeof(arPerson) / sizeof(arPerson[0]); i++)
	{
		person[arPerson[i].name] = arPerson[i].phonenum;
	}
	

	for (;;)
	{
		cout << "이름 입력 : " ;
		cin >> name;
		if (name == "q")
			break;
		it = person.find(name);
		if (it == person.end())
		{
			cout << "존재하지 않은 이름입니다." << endl;
		}
		else
		{
			cout << name << " 의 전화번호는 " << it->second << " 입니다. " << endl;
		}

		
	}
}