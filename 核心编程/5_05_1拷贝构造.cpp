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
	cout << "Ĭ�Ϲ������" << endl;
}

Person::Person(int age) {
	this->age = age;
	cout << "�вι������" << endl;
}

Person::Person(const Person& person) {
	this->age = person.age;
	cout << "�����������" << endl;

}

Person::~Person()
{
	cout << "��������" << endl;
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
	//��Ƶ������p1 Ĭ��-> �������� -> ���� p
	Person p = doWork2();
}

int main() {
	//test01();
	//test02();
	test03();
}