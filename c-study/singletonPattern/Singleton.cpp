#include <iostream>

using namespace std;

class SingletonClass {
private:
	static SingletonClass* instance;
	int total;
	
public:
	SingletonClass() {
		total = 0;
	}
	~SingletonClass() {
		cout << "¼Ò¸êÀÚ È£Ãâ"<< endl;
	}
	static SingletonClass* getInstance()
	{
		if (instance == NULL)
			instance = new SingletonClass();
		return instance;
	}
	void ShowMessage() {
		cout << "µ¿Àû ½Ì±ÛÅæ ½ÇÇà" << endl;
	}
	void addValue(int value) {
		total = total + value;
	}
	int getTotalValue() {
		return total;
	}
	void destroy()
	{
		if (instance != NULL)
		{
			delete instance;
			instance = NULL;
			cout << "instance ÇØÁ¦" << endl;
		}
	}
};

SingletonClass* SingletonClass::instance = NULL;

void main()
{
	SingletonClass* ins1 = SingletonClass::getInstance();
	SingletonClass* ins2 = SingletonClass::getInstance();
	SingletonClass* ins3 = SingletonClass::getInstance();
	
	ins1->addValue(10);
	cout << "total : " << ins1->getTotalValue() << endl;
	ins2->addValue(10);
	cout << "total : " << ins2->getTotalValue() << endl;
	ins3->addValue(10);
	cout << "total : " << ins3->getTotalValue() << endl;

	SingletonClass::getInstance() -> destroy();
	
}