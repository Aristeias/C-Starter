#include <iostream>
using namespace std;

int add(int num1, int num2);

int main() {
	int a = 10;
	int b = 20;
	int sum = add(a, b);
	cout << sum;
}

int add(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}