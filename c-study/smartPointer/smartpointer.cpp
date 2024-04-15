#include <iostream>
#include <memory>

using namespace std;

void main()
{
	/*
	double* rate = new double;

	*rate = 3.1415;
	cout << *rate << endl;
	delete rate;
	*/

	
	auto_ptr<double> rate(new double);
	*rate = 3.1415;
	cout << *rate << endl;
	
}
