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
	cout << "默认构造|无参构造" << endl;
}

MyClass::MyClass(int num)
{
	this->num = num;
	cout << "有参构造" << endl;
}

MyClass::MyClass(const MyClass& myClass)
{
	num = myClass.num;
	cout << "拷贝构造函数" << endl;
}


MyClass::~MyClass()
{
	cout << "析构函数 " << num << endl;
}

int main() {
	MyClass myClass;
	MyClass myClass2(10);
	//MyClass myClass2 = MyClass(10);
	MyClass myClass3(myClass2);
	//MyClass myClass3 = MyClass(myClass2);

	MyClass(20); // 匿名对象

	cout << myClass.num << endl;
	cout << myClass2.num << endl;
	cout << myClass3.num << endl;

}