#include<iostream>
#include<set>

using namespace std;

void main()
{
	int arr[] = { 1,2,6,3,4,9 };
	// set 컨테이너로 객체&반복자 생성
	set<int> scon;
	set<int>::iterator it;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		scon.insert(arr[i]);
	}

	for (it = scon.begin(); it != scon.end(); it++)
	{
		cout << *it << endl;
	}
}