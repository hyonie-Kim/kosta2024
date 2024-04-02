
#include<iostream>
#include<set>

using namespace std;

void main()
{
	const char* str = "dfhsmowfgl";

	set<char> scon(&str[0], &str[9]);
	set<char>::iterator it;



	for (it = scon.begin(); it != scon.end(); it++)
	{
		cout << *it << endl;
	}
}