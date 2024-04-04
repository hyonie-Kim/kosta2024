#include <iostream>

using namespace std;

// 예금 계좌 클래스 생성
class Deposit {
public:
	Deposit(){
		nCount++;
		cout << "객체 생성 개수 :" << nCount << endl; 
	}
	~Deposit(){
		nCount--; 
		cout << "객체 소멸 개수 :" << nCount << endl; 
	}

	Deposit(char* name, double balance) {
		// 생성자 오버로딩
		strName = name;
		dBalance = balance;
	}

	void BanckBalance() {
		// 실제 예금 잔액: dBalance
		dBalance = dBalance * (dBalance * dInterestRate);
	}

	static void SetInterestRate(double dNewRate) {
		// 이자율 설정
		dInterestRate = dNewRate;

	}
	static double GetInterestRate() {
		// 이자율 반환
		return dInterestRate;
	}


private:
	char* strName; // 이름
	double dBalance; // 예금계좌

	static double dInterestRate; // 이자율
	static int nCount; // 객체의 개수

};

double Deposit::dInterestRate = 0.05;
int Deposit::nCount = 0;

void main()
{
	Deposit Kim, Lee; //계좌 생성
	Deposit::SetInterestRate(0.06);

	cout << Deposit::GetInterestRate() << endl;
}