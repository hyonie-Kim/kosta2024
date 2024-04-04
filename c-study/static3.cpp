#include <iostream>

using namespace std;

// ���� ���� Ŭ���� ����
class Deposit {
public:
	Deposit(){
		nCount++;
		cout << "��ü ���� ���� :" << nCount << endl; 
	}
	~Deposit(){
		nCount--; 
		cout << "��ü �Ҹ� ���� :" << nCount << endl; 
	}

	Deposit(char* name, double balance) {
		// ������ �����ε�
		strName = name;
		dBalance = balance;
	}

	void BanckBalance() {
		// ���� ���� �ܾ�: dBalance
		dBalance = dBalance * (dBalance * dInterestRate);
	}

	static void SetInterestRate(double dNewRate) {
		// ������ ����
		dInterestRate = dNewRate;

	}
	static double GetInterestRate() {
		// ������ ��ȯ
		return dInterestRate;
	}


private:
	char* strName; // �̸�
	double dBalance; // ���ݰ���

	static double dInterestRate; // ������
	static int nCount; // ��ü�� ����

};

double Deposit::dInterestRate = 0.05;
int Deposit::nCount = 0;

void main()
{
	Deposit Kim, Lee; //���� ����
	Deposit::SetInterestRate(0.06);

	cout << Deposit::GetInterestRate() << endl;
}