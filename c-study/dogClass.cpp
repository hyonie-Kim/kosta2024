#include <iostream>

using namespace std;

class Dog
{
public: Dog() {}
private:
	int eyes, nose, mouth;
public:
	void Bark();
	void Run();
	void Sleep();


};

// Dog Ŭ���� ��� �Լ��� ����
void Dog::Bark() {
	cout << "�۸�" << endl;
}
void Dog::Run() {
	cout << "�ž�" << endl;
}

void Dog::Sleep() {
	cout << "����" << endl;
}

void main()
{
	Dog dog;
}