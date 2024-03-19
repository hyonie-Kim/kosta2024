#include<iostream>
#include<string.h>

using namespace std;

class String // 1. 클래스의 이름은 String
{
	//2. 생성자 소멸자
public:
	String(char ch, int nSize)
	{
		// 4. 어떤 특정문자가 들어오고,

		// 문자열은 null 값까지 계산
		nLength = nSize;
		pBuffer = new char[nSize + 1]; // 문자열은 null 값까지 계산
		memset(pBuffer, ch, nLength);
		pBuffer[nLength] = '\0';
		cout << "pBuffer : " << pBuffer << endl;

		//프로토타입을 보면 Dst 대상의 약자, 
		// 대상이 되는 메모리의 초기화값을 넣고,사이즈 넣음
	}
	~String() {
		delete[] pBuffer;
	}

	// 연산자는 이름을 붙여준다.
	// 예시로 더하기기능은 operator+, operator- 이런식으로씀
	// 전달인자는 자기 자신의 String 타입의 & 레퍼런스(메모리 공유)를 넣으면됨
	void operator=(const String& s)
	{
		delete this -> pBuffer;

		// 메모리를 복사할거임
		// 메모리 사이즈는 s 가 알고있음
		this->nLength = s.nLength;
		// 사이즈를 알았으니.
		// 해당사이즈랑 똑같은 메모리를 만들것임
		this -> pBuffer = new char[this->nLength + 1];
		// 복사할거임
		strcpy_s(this->pBuffer, this ->nLength+1, s.pBuffer);
	}

	void SetData()
	{
		cout << "pBuffer: " << this->pBuffer << endl;
	}

private:
	char* pBuffer; // 포인터가 복사가 된다는 것은 같은주소를 가르키게된다는 뜻
	int nLength; // 3. 문자열의 길이.


};

void main()
{
	// A라는 문자를 3개 만든다는 str 객체생성
	// 전달인자가 2개인 생성자를 호출
	String str1('A', 3);
	String str2('B', 5);

	// 같은 타입끼리 대입(복사)이 가능함
	// str2 = str1;
	str2.operator=(str1); // 위에 코드랑 똑같음.
	str2.SetData();
}