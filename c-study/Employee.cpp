#include <iostream>

using namespace std;

// �λ�ý����� �������
// �̸�, �ּ� ������ ����
class Employee {
public:
	Employee()
	{
	// ����Ʈ �����ڿ��� �ʱ�ȭ���ִ� ��
		strName = NULL; 
		strAddr = NULL;

	}
	Employee(const char* pName, const char* pAddr) 
	{
	// �������� ������ ���� ���ؼ� const�� ���(��������)
		cout << "���ڰ� 2���� ������ ȣ��" << endl;
		
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

	}
	void DisplayEmployee()
	{
	// ���� �Է��� �����͸� ������ִ� �Լ�
	// ���� �̸��� �ּ� ���

		cout << "�̸� : " << this->strName << endl;
		cout << "�ּ� : " << this->strAddr << endl;
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
		cout << "���ڰ� 3���� Regular ������ ȣ��" << endl;
		// strName = pName; const �� �ּҰ��� ���ٲ�..

		strName = new char[strlen(pName) + 1];
		strcpy_s(this->strName, strlen(pName) + 1, pName);

		strAddr = new char[strlen(pAddr) + 1];
		strcpy_s(this->strAddr, strlen(pAddr) + 1, pAddr);
		salary = dSalary;

	}
	~Regular(){}
	double PayCheck() const {
		return salary;
	}

private:
	double salary;
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
		cout << "���ڰ� 4�� Temporary ������ ȣ��" << endl;

		strName = new char[strlen(pName) + 1];
		strcpy_s(this->strName, strlen(pName) + 1, pName);

		strAddr = new char[strlen(pAddr) + 1];
		strcpy_s(this->strAddr, strlen(pAddr) + 1, pAddr);

		// �̸��� �����������Ϸ��� �򰥸��� ������ this  
		this -> dailyPayCheck = dailyPayCheck;
		this->days = days;

	}

	~Temporary(){}

	double PayCheck() const{
		return dailyPayCheck * days;
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
	//Employee* emp = new Employee();

	// ��ü ����
	// emp �� ��Ӱ��� - �ڽ���..
	Regular rgl("kim", "suwon", 300);
	cout << "�޿�: " << rgl.PayCheck() << endl;

	// ��ü ����
	// �̸�, ����, �ϴ�, �ϼ�
	Temporary tmp("park", "jeju", 10, 30);
	cout << "�޿�: " << tmp.PayCheck() << endl;

}

// ��ü�� ���� ����� �ٸ��� ����
// ��Ӱ��迡�� ��ü�� ����� ���� ���ΰ��� ���� ����� �ٸ�
// �̸��� ����..
// �������̵�

// Employee �߻�ȭ
// ��ü ���⿡���� �������� ��� �߼�ȭ�� ��.. 

