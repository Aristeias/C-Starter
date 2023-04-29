#include <iostream>
#include <string>
#include <ctime>
#include "headFileFirst.h"

int main() {
	//随机数种子
	srand((unsigned int)time(NULL));

	Teacher teacherArray[3];
	initialTeacherArray(teacherArray, sizeof(teacherArray) / sizeof(teacherArray[0]));
	printInfo(teacherArray, sizeof(teacherArray) / sizeof(teacherArray[0]));
}

void initialTeacherArray(Teacher teacherArray[], int length) {
	string nameSeed = "ABCDEFG";
	for (int i = 0; i < length; i++)
	{
		teacherArray[i].teacherName = "teacher_";
		teacherArray[i].teacherName += nameSeed[i];
		for (int j = 0; j < 5; j++)
		{
			teacherArray[i].studentWithTeacher[j].studentName = "Student_";
			teacherArray[i].studentWithTeacher[j].studentName += nameSeed[j];
			teacherArray[i].studentWithTeacher[j].studentScore = rand() % 60 + 40; 
		}
	}
}

void printInfo(Teacher teacherArray[], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << "老师：" << teacherArray[i].teacherName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生：" << teacherArray[i].studentWithTeacher[j].studentName << " 分数：" << teacherArray[i].studentWithTeacher[j].studentScore << endl;
		}
	}
}
