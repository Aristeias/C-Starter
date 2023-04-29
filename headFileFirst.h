#pragma once
#include <iostream>
#include <string>
using namespace std;

struct Student {
	string studentName;
	int studentScore;
};

struct Teacher {
	string teacherName;
	Student studentWithTeacher[5];
};

void initialTeacherArray(Teacher teacherArray[], int length);
void printInfo(Teacher teacherArray[], int length);

