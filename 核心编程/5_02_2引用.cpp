#include <iostream>

using namespace std;

void swapByValue(int a, int b);
void swapByAddress(int* a, int* b);
void swapByCite(int& a, int& b);
int& functionTest();

int main() {
	int a = 10;
	int& b = a;
	cout << a << "," << b << endl;

	b = 100;
	cout << a << "," << b << endl;

	a = 20;
	cout << a << "," << b << endl;


	int c = 50;
	cout << a << "," << c << endl;
	swapByValue(a, c);
	cout << a << "," << c << endl;

	swapByAddress(&a, &c);
	cout << a << "," << c << endl;

	swapByCite(a, c);
	cout << a << "," << c << endl;

	int& ref = functionTest();
	cout << ref << endl;
	functionTest() = 30;
	cout << ref << endl;

}

//ֵ����,�޷�ʵ�ֹ���
void swapByValue(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

//��ַ����
void swapByAddress(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

//���ô���
void swapByCite(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int& functionTest() {
	static int a = 10;
	return a;
}