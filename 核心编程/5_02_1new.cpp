#include <iostream>

using namespace std;

int* fun() {
	int* p = new int(100);
	return p;
}

int* fun2() {
	int* p = new int[10];
	return p;
}

int main() {
	int* p = fun();
	cout << *p << endl;
	cout << *p << endl;

	int* p2 = fun2();
	cout << *p2 << endl;
	cout << *p2 << endl;

	delete p;
	delete[] p2;
}