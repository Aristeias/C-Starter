#include <iostream>
using namespace std;

int main() {
	int a = 19;
	int* p;

	//赋值
	p = &a;

	cout << "p的地址 " << p << endl;
	cout << "p的值 " << *p << endl;
	cout << "a的地址 " << &a << endl;

	// 解引用
	*p = 100; 

	cout << "p的地址 " << p << endl;
	cout << "p的值 " << *p << endl;
	cout << "a的值 " << a << endl;

	const int* p2 = &a;
	int b = 200;
	//*p2 = 100; 常量指针不可修改值
	p2 = &b;

	int* const p3 = &a;
	*p3 = 399;
	//p3 = &b;	指针常量不可修改指向地址

	const int* const p4 = &a;
	//指针不可修改值，不可修改地址

}