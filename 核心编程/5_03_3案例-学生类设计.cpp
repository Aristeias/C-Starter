#include <iostream>

using namespace std;

class Student {
public:
	int studentId;
	string studentName;

	void setStudentName(string name) {
		this->studentName = name;
	}

	void setStudentId(int id) {
		this->studentId = id;
	}

	void showInfo() {
		cout << "学生姓名：" << this->studentName << " 学号：" << this->studentId;
	}

};

int main() {
	Student s;
	s.setStudentId(100);
	s.setStudentName("张三");
	s.showInfo();

}