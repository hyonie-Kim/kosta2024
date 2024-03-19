#include<iostream>
#include<string.h>

using namespace std;

class String // 1. Ŭ������ �̸��� String
{
	//2. ������ �Ҹ���
public:
	String(char ch, int nSize)
	{
		// 4. � Ư�����ڰ� ������,

		// ���ڿ��� null ������ ���
		nLength = nSize;
		pBuffer = new char[nSize + 1]; // ���ڿ��� null ������ ���
		memset(pBuffer, ch, nLength);
		pBuffer[nLength] = '\0';
		cout << "pBuffer : " << pBuffer << endl;

		//������Ÿ���� ���� Dst ����� ����, 
		// ����� �Ǵ� �޸��� �ʱ�ȭ���� �ְ�,������ ����
	}
	~String() {
		delete[] pBuffer;
	}

	// �����ڴ� �̸��� �ٿ��ش�.
	// ���÷� ���ϱ����� operator+, operator- �̷������ξ�
	// �������ڴ� �ڱ� �ڽ��� String Ÿ���� & ���۷���(�޸� ����)�� �������
	void operator=(const String& s)
	{
		delete this -> pBuffer;

		// �޸𸮸� �����Ұ���
		// �޸� ������� s �� �˰�����
		this->nLength = s.nLength;
		// ����� �˾�����.
		// �ش������� �Ȱ��� �޸𸮸� �������
		this -> pBuffer = new char[this->nLength + 1];
		// �����Ұ���
		strcpy_s(this->pBuffer, this ->nLength+1, s.pBuffer);
	}

	void SetData()
	{
		cout << "pBuffer: " << this->pBuffer << endl;
	}

private:
	char* pBuffer; // �����Ͱ� ���簡 �ȴٴ� ���� �����ּҸ� ����Ű�Եȴٴ� ��
	int nLength; // 3. ���ڿ��� ����.


};

void main()
{
	// A��� ���ڸ� 3�� ����ٴ� str ��ü����
	// �������ڰ� 2���� �����ڸ� ȣ��
	String str1('A', 3);
	String str2('B', 5);

	// ���� Ÿ�Գ��� ����(����)�� ������
	// str2 = str1;
	str2.operator=(str1); // ���� �ڵ�� �Ȱ���.
	str2.SetData();
}