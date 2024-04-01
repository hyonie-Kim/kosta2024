#include<iostream>
#include<vector>

using namespace std;

void main()
{
	int i = 0;
	int num = 0;

	cout << "배열의 크기 입력:";
	cin >> num;

	// 백터는 배열
	vector<int> arr(num);

	// 해당 배열의 사이즈 만큼 루프를 반복

	for (i = 0; i < arr.size(); i++)
	{
		arr[i] = i;
	}
	for (i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << endl;
	}
}