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
	cout << "������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;
}