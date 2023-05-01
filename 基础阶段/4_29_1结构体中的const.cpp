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
	cout << "地址传递：" << endl;
	cout << "姓名：" << student->name << " 年龄：" << student->age << " 分数：" << student->score << endl;
	//const使得传入参数无法修改，以用来防止函数体中对原数据的误操作
	//student->score = 90;
};

int main() {
	Student s = { "Zhang", 20, 100 };
	printStudentByAddress(&s);
}