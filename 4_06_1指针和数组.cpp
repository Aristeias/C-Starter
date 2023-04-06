#include <iostream>
using namespace std;

int main() {
	int arr[4] = { 1,5,2,7 };
	int* p = arr;
	cout << *p << endl;
	p++;
	cout << *p << endl;

}