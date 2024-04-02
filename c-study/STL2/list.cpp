#include<iostream>
#include<list>

using namespace std;

void main()
{
	list<int> lst;

	for (int i =0; i < 5; i++)
	{
		lst.push_back(i);
	}
	/*for (int i =0; i < 5; i++)
	{
		cout << lst[i] << endl;
	}*/

	list<int>::iterator it;
	for (it = lst.begin(); it !=lst.end(); it++) 
	{
		cout << *it << endl;
	}

}