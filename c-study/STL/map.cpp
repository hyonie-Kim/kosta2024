#include<iostream>
#include<map>
#include<string>

// ��ȭ��ȣ�� ��� �˻�
using namespace std;

struct PhoneAddr
{
	string name;
	int phonenum;
}arPerson[] = { {"����", 1234}, {"ȿ��",3456},{"����", 543}, {"����", 3332} };

void main()
{
	// �ʰ�ü ����
	map<string, int> person;
	map<string, int>::iterator it;
	string name;

	for (int i = 0; i < sizeof(arPerson) / sizeof(arPerson[0]); i++)
	{
		person[arPerson[i].name] = arPerson[i].phonenum;
	}
	

	for (;;)
	{
		cout << "�̸� �Է� : " ;
		cin >> name;
		if (name == "q")
			break;
		it = person.find(name);
		if (it == person.end())
		{
			cout << "�������� ���� �̸��Դϴ�." << endl;
		}
		else
		{
			cout << name << " �� ��ȭ��ȣ�� " << it->second << " �Դϴ�. " << endl;
		}

		
	}
}