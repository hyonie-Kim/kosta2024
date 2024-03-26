#include <iostream>

using namespace std;

// �λ�ý����� �������
// �̸�, �ּ� ������ ����
// Employee�� ���� �ֻ� �θ�.
class Employee {
public:
	Employee()
	{
	// ����Ʈ �����ڿ��� �ʱ�ȭ���ִ� ��
		strName = NULL; 
		strAddr = NULL;
		cout << "1. Employee ������ ȣ��" << endl;

	}
	Employee(const char* pName, const char* pAddr) 
	{
	// �������� ������ ���� ���ؼ� const�� ���(��������)
		cout << "1. ���ڰ� 2���� ������ ȣ��" << endl;
		
		// �̰� ���߿� ���� ���ٲ�
		// �ܺ� �޸� �ּҸ� �Ѱ���
		// const�� �����Ҽ� ����, ��� ������ const�� �ؾ��ϴµ�
		// �׷��� �ּҰ� ������ ������ ����
		//strName = pName;
		//strAddr = pAddr;
		
		// ���ο� �޸� ���� - ���纻 �����
		// String copy �� �ϸ� ��!!
		// pName�� ����� ������
		// strlen :: ���� �ּҰ��� ������ �ִ� string data
		// ���ڿ��� ���̸� �����ü� �ִ� ���ڿ� �����Լ�
		// �������� �ּҰ��� �����Ҽ� �־���ϱ� ������ �̰� ���.
		strName = new char[strlen(pName) + 1];
		strcpy_s(this->strName, strlen(pName) + 1, pName);

		strAddr = new char[strlen(pAddr) + 1];
		strcpy_s(this->strAddr, strlen(pAddr) + 1, pAddr);

	}
	~Employee()
	{
	// ���ο��� ���� �޸� ����
	// �迭 ǥ���� ������
	// ������ ������ ��ü�� �迭�̱� ����!!
		delete[] strName; 
		delete[] strAddr;
		cout << "1. Employee �Ҹ��� ȣ��" << endl;


	}
	void DisplayEmployee()
	{
	// ���� �Է��� �����͸� ������ִ� �Լ�
	// ���� �̸��� �ּ� ���

		cout << "�̸� : " << this->strName << endl;
		cout << "�ּ� : " << this->strAddr << endl;
		cout << "1. Employee �Ҹ��� ȣ��" << endl;

	}
	// �����Լ�
	virtual double PayCheck() const {
		return 0.0;
	}

//private:
protected:
	 char* strName;
	 char* strAddr;
};

// ���
// Employee�� �״�� ����Ѵ�.
// Regular�� �θ�� ���� ���� �Ӽ����� �״�� ����Ҽ� ����
class Regular : public Employee {
public:
	Regular(){}
	Regular(const char* pName, const char* pAddr, double dSalary)
	{

		// ������ �����ε� - 3���� ���ڸ� ���� ����
		cout << "2. ���ڰ� 3���� Regular ������ ȣ��" << endl;
		// strName = pName; const �� �ּҰ��� ���ٲ�..

		strName = new char[strlen(pName) + 1];
		strcpy_s(this->strName, strlen(pName) + 1, pName);

		strAddr = new char[strlen(pAddr) + 1];
		strcpy_s(this->strAddr, strlen(pAddr) + 1, pAddr);
		salary = dSalary;

	}
	~Regular(){
		cout << "2. Regular �Ҹ��� ȣ��" << endl;

	}
	double PayCheck() const {
		return salary;
	}
	void DisplayEmployee() {
		cout << "�̸� : " << this->strName << endl;
		cout << "�ּ� : " << this->strAddr << endl;
	}

private:
	double salary;
};

// Ŭ������ �������̵��� ���ؼ� Ŭ���� �߰�
// ���ַ��� ��ó ��� ����

class SalesMan :public Regular
{
	//������, �Ҹ��� �����
public:
	SalesMan() {

	}
	// ������� > ���ַ��� �ٶ󺸰� ���ַ��� > ���÷��̸� �ٶ�
	SalesMan(const char* pName, const char* pAddr, double dSalary, double allowance ) 
	:Regular(pName, pAddr, dSalary){
		cout << "3. ���ڰ� 4���� SalesMan ������ ȣ��" << endl;
		this->allowance = allowance;
	}
	~SalesMan() {
		cout << "3. SalesMan �Ҹ��� ȣ��" << endl;
	}
	double PayCheck() const {
		//  Temporary ���� �������̵� �ϰ����..
		// ������ ���ַ� �ȿ� �ִ� PayCheck �����
		// ���� ������ �ִ� ������ ���ؼ� ������.
		return Regular::PayCheck() + allowance;
	}
private:
	// ���� ������ ������ �������� �߰��ϰ�,
	// �������� ���÷���, ���ַ����� ������.
	double allowance;
};


// ����� ���� ����
class Temporary : public Employee {
	
	// ������
	// �Ҹ���
	// ������ �����ε�
public:
	// ����Ʈ ������ ����
	Temporary() {

	}
	Temporary(const char* pName, const char* pAddr, double dailyPayCheck, int days) {
		cout << "2. ���ڰ� 4�� Temporary ������ ȣ��" << endl;

		strName = new char[strlen(pName) + 1];
		strcpy_s(this->strName, strlen(pName) + 1, pName);

		strAddr = new char[strlen(pAddr) + 1];
		strcpy_s(this->strAddr, strlen(pAddr) + 1, pAddr);

		// �̸��� �����������Ϸ��� �򰥸��� ������ this  
		this -> dailyPayCheck = dailyPayCheck;
		this->days = days;

	}

	~Temporary(){
		cout << "2. Tempourary �Ҹ��� ȣ��" << endl;

	}

	double PayCheck() const{
		return dailyPayCheck * days;
	}
	void DisplayEmployee() {
		cout << "�̸� : " << this->strName << endl;
		cout << "�ּ� : " << this->strAddr << endl;
	}
private:
	// �ΰ��� �Լ� 
	// �ΰ��� ���ϸ� paychack?? 
	double dailyPayCheck;
	int days;

};

void main() 
{
	// �ܺ� �Լ�

	Employee emp("lee", "seoul"); // pName, pAddr �ּҰ��� �ѱ�
	emp.DisplayEmployee();
	Employee* emp = new Employee();

	// ��ü ����
	// emp �� ��Ӱ��� - �ڽ���..
	//Regular rgl("kim", "suwon", 300);
	Employee* rgl = new Regular("kim", "suwon", 300);
	//cout << "�޿�: " << rgl.PayCheck() << endl;
	cout << "�޿�: " << rgl -> PayCheck() << endl;


	// ��ü ����
	// �̸�, ����, �ϴ�, �ϼ�
	Temporary tmp("park", "jeju", 10, 30);
	tmp.DisplayEmployee();
	cout << "�޿�: " << tmp.PayCheck() << endl;

	// ������� ��ü ����
	// ����Ʈ �����ڸ� ������� �ְ�, ���ڸ� �޴� �����ڵ� ���������.
	SalesMan slm("jung", "gasan", 300, 50);
	cout << "�޿� : " << slm.PayCheck() << endl;


}

// ��ü�� ���� ����� �ٸ��� ����
// ��Ӱ��迡�� ��ü�� ����� ���� ���ΰ��� ���� ����� �ٸ�
// �̸��� ����..
// �������̵�

// Employee �߻�ȭ
// ��ü ���⿡���� �������� ��� �߼�ȭ�� ��.. 

