#include <iostream>

using namespace std;

class Person
{
public:
	static int personNum;
	static void personNumAdd()
	{
		personNum++;
	}
};

int Person::personNum = 0;

int main() {
	Person p1;0
	Person p2;
	//通过对象访问静态成员
	cout << p1.personNum << endl;
	cout << p2.personNum << endl;
	p2.personNum = 2;
	cout << p1.personNum << endl;
	cout << p2.personNum << endl;

	//通过类名访问静态成员(不能访问私有静态成员)
	cout << Person::personNum << endl;

	//通过对象访问静态函数
	p1.personNumAdd();
	cout << p1.personNum << endl;


}