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
	cout << "��ʦ������" << t.name << " ��ʦ���䣺" << t.age << " ��ʦ���ţ�" << t.teacherId << endl;
	cout << "ѧ��������" << t.stu.name << " ѧ�����䣺" << t.stu.age << " ѧ��������" << t.stu.score << endl;
}