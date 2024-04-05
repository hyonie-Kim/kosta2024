//#include <stdio.h>
#include <iostream>

//int nTemp = 10;
//
//
//using namespace std;
//void main()
//{
//
//	 
//	// 전역변수가 지역안에서 출력
//	{
//		int nTemp = 20;
//		cout << "nTemp = " << nTemp << endl;
//		// 변수 앞에 스코프 연산자를 붙인다.
//		// 특정 영역 결정 연산자
//		cout << "nTemp = " << ::nTemp << endl;
//
//	}
//
//}


//using namespace std;
// c기반은 전달인자와 상관없이 함수 이름 기준으로 호출
// c기반은 오버로딩이 안되기 때문에 같은 기능의 함수를 만들더라도
// 이름을 달리해서 만들어야한다.

//int Addi(int a, int b)
//{
//	return a + b;
//}
//
//double AddD(int a, int b)
//{
//	return a + b;
//}
//
//char AddC(int a, int b)
//{
//	return a + b;
//}
//
//void main()
//{
//	printf("Addi : %d\n", Addi(10, 20));
//	printf("Addi : %f\n", AddD(3.14, 1.59));
//	printf("Addi : %c\n", AddC('A', 1));
//
//}


//c++ 기반으로 오버로딩

/*
int Add(int a, int b)
{
	return a + b;
}

double Add(double a, double b)
{
	return a + b;
}

char Add(char a, char b)
{
	return a + b;
}

void main()
{
	char ch = '1' - '0';
	cout << Add(10, 20) << endl;
	cout << Add(3.14, 1.59) << endl;
	cout << Add('A', ch) << endl;


}

*/


/*
* C언어에서는 오버로딩이 안됨.
int Add(int a, int b) {
	return a + b;
}

double Add(double a, double b) {
	return a + b;
}

char Add(char a, char b) {
	return a + b;
}

void main()
{
	
	printf(" %d\n", Add(10, 20));
	printf(" %f\n", Add(3.14, 1.59));

}

*/