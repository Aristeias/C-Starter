#include <iostream>
#include <string>
using namespace std;

int main() {
	short num1 = 10;	// -32768 - 32767
	int num2 = 10;		// 
	long num3 = 10;
	long long num4 = 10;

	cout << num1 << "," << sizeof(short) << endl;
	cout << num2 << "," << sizeof(int) << endl;
	cout << num3 << "," << sizeof(long) << endl;
	cout << num4 << "," << sizeof(long long) << endl;

	float f1 = 3.14159265f; //��˫����Ĭ�϶�����λ��Ч����
	double d1 = 3.14159265;

	cout << f1 << "," << sizeof(float) << endl;
	cout << d1 << "," << sizeof(double) << endl;

	float f2 = 3e2;  //3 * 10 ^ 2
	double f3 = 3e-2; //3 * 0.1 ^ 2

	char ch = 'a';
	cout << ch << "," << sizeof(char) << endl;
	cout << (int)ch << endl;

	//�����ַ�
	char chA = 'A';
	cout << (int)chA << endl;

	//�ַ���
	char str[] = "1231311";		//C
	string strString = "12312312312";	//C++,��Ҫ#include <string>ͷ�ļ�

	bool flag = true;
	bool flag2 = false;

	return 0;
}