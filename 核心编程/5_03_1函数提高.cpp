#include <iostream>

using namespace std;

//Ĭ��ֵ�����ظ�����
int func2(int a, int b = 20);

int func2(int a, int b) {
	return a + b;
}

//����Ĭ��ֵ
int func(int a, int b = 20, int c = 20) {
	return a + b + c;
}



int main() {
	cout << func(10) << endl;
	cout << func2(10) << endl;

}