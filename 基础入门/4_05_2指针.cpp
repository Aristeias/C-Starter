#include <iostream>
using namespace std;

int main() {
	int a = 19;
	int* p;

	//��ֵ
	p = &a;

	cout << "p�ĵ�ַ " << p << endl;
	cout << "p��ֵ " << *p << endl;
	cout << "a�ĵ�ַ " << &a << endl;

	// ������
	*p = 100; 

	cout << "p�ĵ�ַ " << p << endl;
	cout << "p��ֵ " << *p << endl;
	cout << "a��ֵ " << a << endl;

	const int* p2 = &a;
	int b = 200;
	//*p2 = 100; ����ָ�벻���޸�ֵ
	p2 = &b;

	int* const p3 = &a;
	*p3 = 399;
	//p3 = &b;	ָ�볣�������޸�ָ���ַ

	const int* const p4 = &a;
	//ָ�벻���޸�ֵ�������޸ĵ�ַ

}