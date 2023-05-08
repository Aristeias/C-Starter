#include <iostream>

using namespace std;

class Person
{
public:
	Person();
	Person(int age);
	Person(const Person& person);
	~Person();

	int age;

private:

};

Person::Person()
{
	this->age = 0;
	cout << "默认构造调用" << endl;
}

Person::Person(int age) {
	this->age = age;
	cout << "有参构造调用" << endl;
}

Person::Person(const Person& person) {
	this->age = person.age;
	cout << "拷贝构造调用" << endl;

}

Person::~Person()
{
	cout << "析构调用" << endl;
}


void test01() {
	Person p1(20);
	Person p2(p1);
}

void doWork(Person person)
{

}

void test02()
{
	Person p;
	doWork(p);
}

Person doWork2()
{
	Person p1;
	return p1;
}

void test03()
{
	//视频所讲：p1 默认-> 拷贝匿名 -> 赋给 p
	Person p = doWork2();
}

int main() {
	//test01();
	//test02();
	test03();
}