#include <iostream>
#include <string>
#include <ctime>
#include "headFileSecond.h"

int main() {
	Hero heroArray[5] = {
		{"刘备","男",25},
		{"关羽","男",24},
		{"张飞","男",23},
		{"荆轲","男",20},
		{"小乔","女",22}
	};

	int length = sizeof(heroArray) / sizeof(heroArray[0]);
	cout << "排序前：" << endl;
	printInfo(heroArray, length);
	sortHeroByAge(heroArray, length);
	cout << "排序后：" << endl;
	printInfo(heroArray, length);
}

void sortHeroByAge(Hero heroArray[], int length) {
	for (int i = 0; i < length ; i++)
	{
		for (int j = 0; j < length - i - 1; j++)
		{
			if (heroArray[j].age > heroArray[j + 1].age) {
				Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}

void printInfo(Hero heroArray[], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << "英雄：" << heroArray[i].heroName << " 性别：" << heroArray[i].heroGender << " 年龄：" << heroArray[i].age << endl;
	}
}