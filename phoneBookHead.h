#pragma once
#include <iostream>
#include <string>

#define MAX 1000

using namespace std;

struct Contact {
	string contactName;
	string contactGender;
	int contactAge;
	string contactTel;
	string contactAddress;
};

struct PhoneBook {
	struct Contact contactArray[MAX];
	int contact_Size;
};

void showMenu();
void quitMenu();