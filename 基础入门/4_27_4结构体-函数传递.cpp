#include <iostream>
#include <string>
using namespace std;

struct Student {
	string name;
	int age;
	int score;
};

void printStudentByValue(Student student);
void printStudentByAddress(Student* student);

void printStudentByValue(Student student) {
	cout << "ֵ���ݣ�" << endl;
	cout << "������" << student.name << " ���䣺" << student.age << " ������" << student.score << endl;
	student.score = 100;
};

void printStudentByAddress(Student* student) {
	cout << "��ַ���ݣ�" << endl;
	cout << "������" << student->name << " ���䣺" << student->age << " ������" << student->score << endl;
	student->score = 90;
};

int main() {
	struct Student s1;
	s1.name = "����";
	s1.age = 20;
	s1.score = 98;

	printStudentByValue(s1);
	cout << "ִ�к�" << endl;
	cout << "������" << s1.name << " ���䣺" << s1.age << " ������" << s1.score << endl;
	printStudentByAddress(&s1);
	cout << "ִ�к�" << endl;
	cout << "������" << s1.name << " ���䣺" << s1.age << " ������" << s1.score << endl;


}