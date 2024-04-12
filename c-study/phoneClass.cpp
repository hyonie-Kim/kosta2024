#include <iostream>

using namespace std;


 class Phone
{	

private:
	int num;
	int shape;

public:
	void Send(int x, int y) {
		cout << "문자보내기" << endl;

	}
	void Receive();
	void call();
};

void main()
{
	Phone ph;
}