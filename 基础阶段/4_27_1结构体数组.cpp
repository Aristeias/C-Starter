#include <iostream>
#include <string>
using namespace std;

struct Student {
	string name;
	int age;
	int score;
};

int main() {
	struct Student sArray[2] =
	{
		{"Zhang", 23, 100},
		{"Wang", 20, 100}
	};

	for (int i = 0; i < sizeof(sArray) / sizeof(sArray[0]); i++)
	{
		cout << "姓名：" << sArray[i].name << " 年龄：" << sArray[i].age << " 分数：" << sArray[i].score << endl;
	}

}