#include <iostream>
#include "4_05_1.h"
using namespace std;



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