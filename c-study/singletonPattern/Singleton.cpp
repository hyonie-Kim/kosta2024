#include <iostream>

using namespace std;

class SingletonClass {
private:
	static SingletonClass* instance;
	SingletonClass() {}
	~SingletonClass() {}
	
public:

	static SingletonClass* getInstance() {
		if (instance == NULL)
			instance = new SingletonClass();
		return instance;
	}
	void ShowMessage() {
		cout << "�̱������� ����" << endl;
	}

};

SingletonClass* SingletonClass::instance = NULL;

void main()
{
	SingletonClass::getInstance() -> ShowMessage();
	
}