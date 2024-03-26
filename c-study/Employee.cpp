#include <iostream>

using namespace std;

// 인사시스템을 만들것임
// 이름, 주소 정보만 기입
// Employee가 가장 최상 부모.
class Employee {
public:
	Employee()
	{
	// 디폴트 생성자에서 초기화해주는 것
		strName = NULL; 
		strAddr = NULL;
		cout << "1. Employee 생성자 호출" << endl;

	}
	Employee(const char* pName, const char* pAddr) 
	{
	// 데이터의 변질을 막기 위해서 const를 사용(엄격해짐)
		cout << "1. 인자가 2개인 생성자 호출" << endl;
		
		// 이건 나중에 값을 못바꿈
		// 외부 메모리 주소만 넘겨줌
		// const는 변경할수 없음, 멤버 변수도 const로 해야하는데
		// 그러면 주소값 자제도 변경을 못함
		//strName = pName;
		//strAddr = pAddr;
		
		// 새로운 메모리 생성 - 복사본 만들기
		// String copy 만 하면 됨!!
		// pName의 사이즈를 가져옴
		// strlen :: 현재 주소값이 가지고 있는 string data
		// 문자열의 길이를 가져올수 있는 문자열 전용함수
		// 언제든지 주소값을 변경할수 있어야하기 때문에 이걸 사용.
		strName = new char[strlen(pName) + 1];
		strcpy_s(this->strName, strlen(pName) + 1, pName);

		strAddr = new char[strlen(pAddr) + 1];
		strcpy_s(this->strAddr, strlen(pAddr) + 1, pAddr);

	}
	~Employee()
	{
	// 내부에서 동적 메모리 삭제
	// 배열 표시한 이유는
	// 실제로 생성된 객체가 배열이기 때문!!
		delete[] strName; 
		delete[] strAddr;
		cout << "1. Employee 소멸자 호출" << endl;


	}
	void DisplayEmployee()
	{
	// 내가 입력한 데이터를 출력해주는 함수
	// 현재 이름과 주소 출력

		cout << "이름 : " << this->strName << endl;
		cout << "주소 : " << this->strAddr << endl;
		cout << "1. Employee 소멸자 호출" << endl;

	}
	// 가상함수
	virtual double PayCheck() const {
		return 0.0;
	}

//private:
protected:
	 char* strName;
	 char* strAddr;
};

// 상속
// Employee를 그대로 상속한다.
// Regular는 부모로 부터 받은 속성들을 그대로 사용할수 있음
class Regular : public Employee {
public:
	Regular(){}
	Regular(const char* pName, const char* pAddr, double dSalary)
	{

		// 생성자 오버로딩 - 3개의 인자를 전달 받음
		cout << "2. 인자가 3개인 Regular 생성자 호출" << endl;
		// strName = pName; const 로 주소값을 못바꿈..

		strName = new char[strlen(pName) + 1];
		strcpy_s(this->strName, strlen(pName) + 1, pName);

		strAddr = new char[strlen(pAddr) + 1];
		strcpy_s(this->strAddr, strlen(pAddr) + 1, pAddr);
		salary = dSalary;

	}
	~Regular(){
		cout << "2. Regular 소멸자 호출" << endl;

	}
	double PayCheck() const {
		return salary;
	}
	void DisplayEmployee() {
		cout << "이름 : " << this->strName << endl;
		cout << "주소 : " << this->strAddr << endl;
	}

private:
	double salary;
};

// 클래스의 오버라이딩을 위해서 클래스 추가
// 레귤러로 부처 상속 받음

class SalesMan :public Regular
{
	//생성자, 소멸자 만들기
public:
	SalesMan() {

	}
	// 세일즈는 > 레귤러를 바라보고 레귤러는 > 임플로이를 바라봄
	SalesMan(const char* pName, const char* pAddr, double dSalary, double allowance ) 
	:Regular(pName, pAddr, dSalary){
		cout << "3. 인자가 4개인 SalesMan 생성자 호출" << endl;
		this->allowance = allowance;
	}
	~SalesMan() {
		cout << "3. SalesMan 소멸자 호출" << endl;
	}
	double PayCheck() const {
		//  Temporary 것을 오버라이딩 하고싶음..
		// 기존의 레귤러 안에 있던 PayCheck 결과에
		// 내가 가지고 있는 수당을 더해서 리턴함.
		return Regular::PayCheck() + allowance;
	}
private:
	// 수당 정보만 세일즈 정보에서 추가하고,
	// 나머지는 임플로이, 레귤러에서 가져옴.
	double allowance;
};


// 계약직 직원 구현
class Temporary : public Employee {
	
	// 생성자
	// 소멸자
	// 생성자 오버로딩
public:
	// 디폴트 생성자 생성
	Temporary() {

	}
	Temporary(const char* pName, const char* pAddr, double dailyPayCheck, int days) {
		cout << "2. 인자가 4개 Temporary 생성자 호출" << endl;

		strName = new char[strlen(pName) + 1];
		strcpy_s(this->strName, strlen(pName) + 1, pName);

		strAddr = new char[strlen(pAddr) + 1];
		strcpy_s(this->strAddr, strlen(pAddr) + 1, pAddr);

		// 이름이 같을시컴파일러가 헷갈리기 때문에 this  
		this -> dailyPayCheck = dailyPayCheck;
		this->days = days;

	}

	~Temporary(){
		cout << "2. Tempourary 소멸자 호출" << endl;

	}

	double PayCheck() const{
		return dailyPayCheck * days;
	}
	void DisplayEmployee() {
		cout << "이름 : " << this->strName << endl;
		cout << "주소 : " << this->strAddr << endl;
	}
private:
	// 두개의 함수 
	// 두개를 곱하면 paychack?? 
	double dailyPayCheck;
	int days;

};

void main() 
{
	// 외부 함수

	Employee emp("lee", "seoul"); // pName, pAddr 주소값을 넘김
	emp.DisplayEmployee();
	Employee* emp = new Employee();

	// 객체 생성
	// emp 와 상속관계 - 자식임..
	//Regular rgl("kim", "suwon", 300);
	Employee* rgl = new Regular("kim", "suwon", 300);
	//cout << "급여: " << rgl.PayCheck() << endl;
	cout << "급여: " << rgl -> PayCheck() << endl;


	// 객체 생성
	// 이름, 지역, 일당, 일수
	Temporary tmp("park", "jeju", 10, 30);
	tmp.DisplayEmployee();
	cout << "급여: " << tmp.PayCheck() << endl;

	// 세일즈맨 객체 생성
	// 디폴트 생성자를 만들수도 있고, 인자를 받는 생성자도 만들수있음.
	SalesMan slm("jung", "gasan", 300, 50);
	cout << "급여 : " << slm.PayCheck() << endl;


}

// 객체에 따라 결과가 다르게 나옴
// 상속관계에서 객체가 어떤것이 들어가는 것인가에 따라 결과가 다름
// 이름이 같음..
// 오버라이딩

// Employee 추상화
// 객체 지향에서는 공통점을 묶어서 추성화를 함.. 

