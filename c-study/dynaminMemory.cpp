#include<iostream>

using namespace std;

void main()
{
	int stLen = 0;
	cout << "학생 수를 입력하세요 :" << endl;
	// 스캔에프?? cout은 출력 디바이스랑 연결
	// cin은 키보드가 연결되어 있음 
	// 키보드로 입력한 값을 stLen 으로 보내줌
	// cin 입력 디바이스랑 연결
	cin >> stLen; 
	
	// 포인터는 주소값만 저장하는애, 타입은 정수
	// 포인터 변수 생성
	// new가 등장하면 힙메모리에 동적메모리에 할당한다는 의미
	// 4바이트가  new에 타입이 나오면 힙메모리에 4바이트 할당한다는 의미
	// 힙메모리에 할당된 주소값을 pMem에 넘긴다는 의미
	// 포인터는 스택임
	int* pMem = new int[3];


	for (int i = 0; i < 3; i++)
	{
		pMem[i] = i+1;

	}

	//pMem[0] = 1;
	//pMem[1] = 2;
	//pMem[2] = 3;

	for (int i = 0; i < 3; i++)
	{
		cout << pMem[i] << endl;


	}

	delete[] pMem; //ㅃㅇ...
	
}