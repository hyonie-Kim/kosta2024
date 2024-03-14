#include <iostream>
// iostream 입출력

// 네임스페이스 키워드로 공간이 나눠짐
namespace A
{
	void func()
	{
		std::cout << "A학급 주성" << std::endl;
	}
}

namespace B
{
	void func()
	{
		std::cout << "B학급 주성" << std::endl;

	}
}

// std 간소화하기
// 1. using namespace 선언하고
// 2. cout << b << std::endl; 사용
using namespace std;



void main()
{
	/*int a = 10;

	std::cout << "Hello C++" << std::endl;
	std::cout << a << std::endl;*/
	// endl 개행하겠다는 뜻(역슬래시와 같음)

	// 컴파일러 입장에서는 함수가 똑같기 때문에 
	// 누구를 호출할지 모른다.
	// func();

	
	// A::func();
	// B::func();

	//=================================================

	int b = 10;
	cout << b << std::endl;

}
