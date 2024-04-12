#include<iostream>
#include<vector>

using namespace std;

void main()
{
	vector <int> vec1;

	for (int i = 0 ; i < 5; i++) {
		vec1.push_back(i);
		
	}

	for (int i = 0; i < 5; i++) {
		cout << vec1[i] << endl;
	}

}