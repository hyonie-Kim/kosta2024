
// ���ݰ��� Ŭ���� ���� - �ܺ� �ڵ�
class Deposit
{
// ���� ����
public:
	Deposit() {} // ����Ʈ ������
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

private:
	char* strName; // �̸� ����
	double	dBalance; // ���� ����
	static double dInterestRate; // ������

	/*
	���� 1:  ���ο��� ����
	static�� ���� static ������ ��ü�� �����ɶ����� 
	�ϳ��� �����Ǵ� ���� �ƴ϶� �ϳ��� �����Ǽ� �����ϴ� ��

	����2 : Ŭ���� ���ο��� �����Ǳ⶧���� �ܺο��� ���� �Ҽ� ������ 
	*/
};

// �Ҽ��� �����ָ� 0.05�� ���� ����
double Deposit::dInterestRate = 0.05;


// ���� �ڵ�
void main()
{
	Deposit kim, lee; // ���� ����(����Ʈ ������ ȣ��)
	// kim.dInterestRate = 0.05; �̷��� ���� �ȵ�
	// Deposit::dInterestRate = 0.06; �̹���� �ƴ�

	Deposit::SetInterestRate(0.06);


}