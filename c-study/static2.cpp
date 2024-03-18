
// 예금계좌 클래스 생성 - 외부 코드
class Deposit
{
// 변수 생성
public:
	Deposit() {} // 디폴트 생성자
	Deposit(char* name, double balance)
	{
		// 생성자 오버로딩
		strName = name;
		dBalance = balance;
	}
	void BankBalance() {
		// 예금 잔액을 나타내는 함수
		// 원금 * 이자율
		// 실제 예금 잔액: dBalance
		dBalance = dBalance * (dBalance * dInterestRate);

	}
	static void SetInterestRate(double dNewRate)
	{
		// 클래스를 통해서 스태틱함수에 접근함
		// 일반함수는 객체가 생성되야 쓸수있음
		dInterestRate = dNewRate;
	}

private:
	char* strName; // 이름 변수
	double	dBalance; // 예금 계좌
	static double dInterestRate; // 이자율

	/*
	목적 1:  내부에서 공유
	static이 붙은 static 변수는 객체가 생성될때마다 
	하나씩 생성되는 것이 아니라 하나가 생성되서 공유하는 것

	목적2 : 클래스 내부에서 생성되기때문에 외부에서 접근 할수 없게함 
	*/
};

// 소속을 정해주면 0.05의 값을 갖음
double Deposit::dInterestRate = 0.05;


// 내부 코드
void main()
{
	Deposit kim, lee; // 계좌 생성(디폴트 생성자 호출)
	// kim.dInterestRate = 0.05; 이렇게 쓰면 안됨
	// Deposit::dInterestRate = 0.06; 이방법도 아님

	Deposit::SetInterestRate(0.06);


}