#include <iostream>
#include <string>
using namespace std;

struct Student{
	string name;
	int age;
	int score;
};
 
int main() {
	struct Student s1;
	s1.name = "����";
	s1.age = 20;
	s1.score = 98;

	struct Student s2 = { "����", 22, 100 };

	cout << "������" << s1.name << " ���䣺" << s1.age << " ������" << s1.score << endl;
	cout << "������" << s2.name << " ���䣺" << s2.age << " ������" << s2.score << endl;

}