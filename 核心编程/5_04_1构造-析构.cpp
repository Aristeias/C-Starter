#include <iostream>

using namespace std;

class MyClass
{
public:
	MyClass();
	MyClass(int num);
	MyClass(const MyClass& myClass);
	~MyClass();
	int num;
private:

};

MyClass::MyClass()
{
	num = 0;
	cout << "Ĭ�Ϲ���|�޲ι���" << endl;
}

MyClass::MyClass(int num)
{
	this->num = num;
	cout << "�вι���" << endl;
}

MyClass::MyClass(const MyClass& myClass)
{
	num = myClass.num;
	cout << "�������캯��" << endl;
}


MyClass::~MyClass()
{
	cout << "�������� " << num << endl;
}

int main() {
	MyClass myClass;
	MyClass myClass2(10);
	//MyClass myClass2 = MyClass(10);
	MyClass myClass3(myClass2);
	//MyClass myClass3 = MyClass(myClass2);

	MyClass(20); // ��������

	cout << myClass.num << endl;
	cout << myClass2.num << endl;
	cout << myClass3.num << endl;

}