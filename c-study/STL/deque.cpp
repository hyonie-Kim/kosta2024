#include<iostream>
#include<deque>

using namespace std;

void main()
{
	// deque 클래스 선언
	deque<int> num;

	num.push_back(5);
	num.push_back(6);
	num.push_front(2);
	num.push_front(1);
}