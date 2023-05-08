#include <iostream>

using namespace std;

class Phone
{
public:
	Phone(string name);
	string m_Name;
};

Phone::Phone(string name)
{
	m_Name = name;
}


class Person
{
public:
	Person(string name, string pName):m_Name(name), m_phone(pName)
	{

	}

	string m_Name;
	Phone m_phone;
private:
};

void test01() 
{
	Person p("Íõ", "MI");
}

int main() 
{

}