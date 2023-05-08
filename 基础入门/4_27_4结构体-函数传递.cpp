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
	cout << "值传递：" << endl;
	cout << "姓名：" << student.name << " 年龄：" << student.age << " 分数：" << student.score << endl;
	student.score = 100;
};

void printStudentByAddress(Student* student) {
	cout << "地址传递：" << endl;
	cout << "姓名：" << student->name << " 年龄：" << student->age << " 分数：" << student->score << endl;
	student->score = 90;
};

int main() {
	struct Student s1;
	s1.name = "张三";
	s1.age = 20;
	s1.score = 98;

	printStudentByValue(s1);
	cout << "执行后：" << endl;
	cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;
	printStudentByAddress(&s1);
	cout << "执行后：" << endl;
	cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;


}