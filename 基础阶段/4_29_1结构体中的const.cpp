#include <iostream>
#include <string>
using namespace std;

struct Student {
	string name;
	int age;
	int score;
};

void printStudentByAddress(const Student* student);

void printStudentByAddress(const Student* student) {
	cout << "��ַ���ݣ�" << endl;
	cout << "������" << student->name << " ���䣺" << student->age << " ������" << student->score << endl;
	//constʹ�ô�������޷��޸ģ���������ֹ�������ж�ԭ���ݵ������
	//student->score = 90;
};

int main() {
	Student s = { "Zhang", 20, 100 };
	printStudentByAddress(&s);
}