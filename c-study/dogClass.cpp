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

// Dog Å¬·¡½º ¸â¹ö ÇÔ¼öÀÇ Á¤ÀÇ
void Dog::Bark() {
	cout << "¸Û¸Û" << endl;
}
void Dog::Run() {
	cout << "¾Å¾Å" << endl;
}

void Dog::Sleep() {
	cout << "ÄðÄð" << endl;
}

void main()
{
	Dog dog;
}