#include<iostream>
#include<vector>

using namespace std;

void main()
{
	int i = 0;
	int num = 0;

	cout << "�迭�� ũ�� �Է�:";
	cin >> num;

	// ���ʹ� �迭
	vector<int> arr;

	// push_back �޼ҵ�
	for (i = 0; i < num; i++)
	{
		arr.push_back(i);
	}
	for (i = 0; i <num; i++)
	{
		cout << arr[i] << endl;
	}
}