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
	s1.name = "张三";
	s1.age = 20;
	s1.score = 98;

	struct Student s2 = { "李四", 22, 100 };

	cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;
	cout << "姓名：" << s2.name << " 年龄：" << s2.age << " 分数：" << s2.score << endl;

}