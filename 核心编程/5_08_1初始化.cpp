#include <iostream>

using namespace std;

class Person
{
public:
	Person(int a, int b, int c);
	~Person();

	Person(int a, int b, int c) : m_a(a), m_b(b), m_c(c) 
	{
		//初始化函数
	}

	int m_a;
	int m_b;
	int m_c;

private:

};

Person::Person(int a, int b, int c)
{
	//传统初始化
	m_a = a;
	m_b = b;
	m_c = c;
}

Person::~Person()
{
}