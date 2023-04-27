#include <iostream>
#include <string>
using namespace std;

struct student {
	string name;
	int age;
	int score;
};

int main() {
	student s = { "Zhang", 20, 100 };
	student* p = &s;
	cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
}