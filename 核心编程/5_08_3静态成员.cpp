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
	//ͨ��������ʾ�̬��Ա
	cout << p1.personNum << endl;
	cout << p2.personNum << endl;
	p2.personNum = 2;
	cout << p1.personNum << endl;
	cout << p2.personNum << endl;

	//ͨ���������ʾ�̬��Ա(���ܷ���˽�о�̬��Ա)
	cout << Person::personNum << endl;

	//ͨ��������ʾ�̬����
	p1.personNumAdd();
	cout << p1.personNum << endl;


}