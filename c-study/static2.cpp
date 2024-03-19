
#include <iostream>

using namespace std;

// ���ݰ��� Ŭ���� ���� - �ܺ� �ڵ�
class Deposit
{
// ���� ����
public:
	Deposit() { // ����Ʈ ������
	
		nCount++; // 1����
		cout << "��ü ���� ���� :" << nCount << endl; // nCount��� 
	} 
	
	~Deposit() { // �Ҹ��� ������
		nCount--; // 1����
		cout << "��ü �Ҹ� ���� :" << nCount << endl; // nCount���
	}

	Deposit(char* name, double balance)
	{
		// ������ �����ε�
		strName = name;
		dBalance = balance;
	}
	void BankBalance() {
		// ���� �ܾ��� ��Ÿ���� �Լ�
		// ���� * ������
		// ���� ���� �ܾ�: dBalance
		dBalance = dBalance * (dBalance * dInterestRate);

	}
	static void SetInterestRate(double dNewRate)
	{
		// Ŭ������ ���ؼ� ����ƽ�Լ��� ������
		// �Ϲ��Լ��� ��ü�� �����Ǿ� ��������
		dInterestRate = dNewRate;
	}
	static double GetInterestRate()
	{
		return dInterestRate;
	}

private:
	char* strName; // �̸� ����
	double	dBalance; // ���� ����
	static double dInterestRate; // ������
	static int nCount; 

	/*
	���� 1:  ���ο��� ����
	static�� ���� static ������ ��ü�� �����ɶ����� 
	�ϳ��� �����Ǵ� ���� �ƴ϶� �ϳ��� �����Ǽ� �����ϴ� ��

	����2 : Ŭ���� ���ο��� �����Ǳ⶧���� �ܺο��� ���� �Ҽ� ������ 
	*/
};

// �Ҽ��� �����ָ� 0.05�� ���� ����
double Deposit::dInterestRate = 0.05;
int Deposit::nCount = 0; // nCount ����ƽ ���� �ʱ�ȭ 


// ���� �ڵ�
void main()
{
	Deposit kim, lee; // ���� ����(����Ʈ ������ ȣ��)
	// kim.dInterestRate = 0.05; �̷��� ���� �ȵ�
	// Deposit::dInterestRate = 0.06; �̹���� �ƴ�

	Deposit::SetInterestRate(0.06);
	cout << Deposit::GetInterestRate() << endl;


}