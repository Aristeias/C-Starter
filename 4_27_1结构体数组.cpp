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
		cout << "������" << sArray[i].name << " ���䣺" << sArray[i].age << " ������" << sArray[i].score << endl;
	}

}