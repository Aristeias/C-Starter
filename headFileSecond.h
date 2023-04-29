#pragma once
#include <iostream>
#include <string>
using namespace std;

struct Hero {
	string heroName;
	string heroGender;
	int age;
};

void sortHeroByAge(Hero heroArray[], int length);
void printInfo(Hero heroArray[], int length);