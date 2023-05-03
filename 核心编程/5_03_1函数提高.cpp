#include <iostream>

using namespace std;

//默认值不可重复定义
int func2(int a, int b = 20);

int func2(int a, int b) {
	return a + b;
}

//函数默认值
int func(int a, int b = 20, int c = 20) {
	return a + b + c;
}



int main() {
	cout << func(10) << endl;
	cout << func2(10) << endl;

}