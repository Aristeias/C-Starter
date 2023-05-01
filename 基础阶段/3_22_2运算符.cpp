#include <iostream>
#include <string>
using namespace std;

int main() {
	int a = 10, b = 29;
	cout << a - b << endl;
	cout << a + b << endl;
	cout << a * b << endl;
	cout << b / a << endl;
	cout << b % a << endl;

	double c = 29, d = 5;
	cout << c / d << endl;
	//小数不能做取模运算。

	int num1 = 1;
	int numA = num1++;
	cout << numA << endl;
	cout << num1 << endl;

	int num2 = 10;
	int numB = ++num2;
	cout << numB << endl;
	cout << num2 << endl;

	a *= 10;
	cout << a << endl;

	// == != < > <= >= 比较运算符
	// ! && ||	逻辑运算符
}