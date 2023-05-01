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

void showMenu(PhoneBook* phoneBook);
void quitMenu();
void addNewContact(PhoneBook* phoneBook);
void showAllContacts(PhoneBook* phoneBook);
int findContact(PhoneBook* phoneBook, string name);
int findContact(PhoneBook* phoneBook, string name, int factor);
int deleteContact(PhoneBook* phoneBook, int index, int* contactExist, int length);
int modifyContact(PhoneBook* phoneBook, string name);
void cleanPhoneBook(PhoneBook* phoneBook);