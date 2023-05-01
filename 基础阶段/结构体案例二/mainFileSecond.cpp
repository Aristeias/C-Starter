#include <iostream>
#include <string>
#include <ctime>
#include "headFileSecond.h"

int main() {
	Hero heroArray[5] = {
		{"����","��",25},
		{"����","��",24},
		{"�ŷ�","��",23},
		{"����","��",20},
		{"С��","Ů",22}
	};

	int length = sizeof(heroArray) / sizeof(heroArray[0]);
	cout << "����ǰ��" << endl;
	printInfo(heroArray, length);
	sortHeroByAge(heroArray, length);
	cout << "�����" << endl;
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
		cout << "Ӣ�ۣ�" << heroArray[i].heroName << " �Ա�" << heroArray[i].heroGender << " ���䣺" << heroArray[i].age << endl;
	}
}