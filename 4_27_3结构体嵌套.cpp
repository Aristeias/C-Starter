#include <iostream>
#include <string>
using namespace std;

struct student {
	string name;
	int age;
	int score;
};

struct teacher {
	int teacherId;
	string name;
	int age;
	struct student stu;
};

int main() {
	teacher t;
	t.teacherId = 001;
	t.name = "Wang";
	t.age = 41;
	t.stu.age = 20;
	t.stu.name = "Zhang";
	t.stu.score = 100;
	cout << "老师姓名：" << t.name << " 老师年龄：" << t.age << " 老师工号：" << t.teacherId << endl;
	cout << "学生姓名：" << t.stu.name << " 学生年龄：" << t.stu.age << " 学生分数：" << t.stu.score << endl;
}