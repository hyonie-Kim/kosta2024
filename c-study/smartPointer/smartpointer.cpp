#include <iostream>
#include <memory>

using namespace std;

void main()
{
	//int* p = new int();

	
	auto_ptr<double> rate(new double);
	*rate = 3.1415;
	cout << *rate << endl;
}
