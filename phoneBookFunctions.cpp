#include <iostream>
#include <string>
#include "phoneBookHead.h"

using namespace std;

void showMenu(PhoneBook* phoneBook) {
	cout << "=======================" << endl;
	cout << "==== 1.添加联系人 =====" << endl;
	cout << "==== 2.显示联系人 =====" << endl;
	cout << "==== 3.删除联系人 =====" << endl;
	cout << "==== 4.查找联系人 =====" << endl;
	cout << "==== 5.修改联系人 =====" << endl;
	cout << "==== 6.清空联系人 =====" << endl;
	cout << "=== 当前：" << phoneBook->contact_Size << "位联系人 ===" << endl;
	cout << "==== 0.退出通讯录 =====" << endl;
	cout << "=======================" << endl;
}

void quitMenu() {
	cout << "==欢迎下次使用通讯录==" << endl;
}

//添加
void addNewContact(PhoneBook* phoneBook) {
	if (phoneBook->contact_Size == MAX) {
		cout << "通讯录已满，无法添加！" << endl;
		system("pause");
		system("cls");
		return;
	}
	string contactName;
	string contactGender;
	int contactAge;
	string contactTel;
	string contactAddress;

	cout << "请输入联系人姓名：" << endl;
	cin >> contactName;
	phoneBook->contactArray[phoneBook->contact_Size].contactName = contactName;
	cout << "请输入联系人性别：" << endl;
	cin >> contactGender;
	phoneBook->contactArray[phoneBook->contact_Size].contactGender = contactGender;
	cout << "请输入联系人年龄：" << endl;
	cin >> contactAge;
	phoneBook->contactArray[phoneBook->contact_Size].contactAge = contactAge;
	cout << "请输入联系人电话：" << endl;
	cin >> contactTel;
	phoneBook->contactArray[phoneBook->contact_Size].contactTel = contactTel;
	cout << "请输入联系人地址：" << endl;
	cin >> contactAddress;
	phoneBook->contactArray[phoneBook->contact_Size].contactAddress = contactAddress;

	cout << "联系人添加成功！" << endl;
	phoneBook->contact_Size++;

	system("pause");
	system("cls");
}

//展示
void showAllContacts(PhoneBook* phoneBook) {
	if (phoneBook->contact_Size == 0) {
		cout << "无联系人记录！" << endl;
		system("pause");
		system("cls");
		return;
	}

	//cout << "联系人\t" << "性别\t" << "年龄\t" << "电话\t\t" << "住址" << endl;

	for (int i = 0; i < phoneBook->contact_Size; i++)	{
		cout << "姓名：" << phoneBook->contactArray[i].contactName << "\t";
		cout << "性别：" << phoneBook->contactArray[i].contactGender << "\t";
		cout << "年龄：" << phoneBook->contactArray[i].contactAge << "\t";
		cout << "电话：" << phoneBook->contactArray[i].contactTel << "\t";
		cout << "住址：" << phoneBook->contactArray[i].contactAddress << endl;
	}

	system("pause");
	system("cls");
}

//查找
int findContact(PhoneBook* phoneBook, string name) {
	int contactExist[1000];
	int index = 0;
	for (int i = 0; i < phoneBook->contact_Size; i++){
		if (phoneBook->contactArray[i].contactName == name) {
			contactExist[index] = i;
			index++;
		}
	}
	if (index == 0) {
		cout << "没有该联系人！" << endl;
		system("pause");
		system("cls");
		return 0;
	}

	for (int i = 0; i < index; i++){
		cout << "编号: " << i + 1 << "\t";
		cout << "姓名：" << phoneBook->contactArray[contactExist[i]].contactName << "\t";
		cout << "性别：" << phoneBook->contactArray[contactExist[i]].contactGender << "\t";
		cout << "年龄：" << phoneBook->contactArray[contactExist[i]].contactAge << "\t";
		cout << "电话：" << phoneBook->contactArray[contactExist[i]].contactTel << "\t";
		cout << "住址：" << phoneBook->contactArray[contactExist[i]].contactAddress << endl;
	}

	int selectToDelete = 0;
	cout << "是否进入删除功能？（是 1 / 否 0）" << endl;
	cin >> selectToDelete;
	if (selectToDelete == 1) {
		cout << "请输入想要删除的联系人编号：" << endl;
		int num = 0;
		cin >> num;
		deleteContact(phoneBook, num - 1, contactExist, index);

	}
	system("pause");
	system("cls");
	return 1;
}

//删除功能
int findContact(PhoneBook* phoneBook, string name, int factor) {
	int contactExist[1000];
	int index = 0;
	for (int i = 0; i < phoneBook->contact_Size; i++) {
		if (phoneBook->contactArray[i].contactName == name) {
			contactExist[index] = i;
			index++;
		}
	}
	if (index == 0) {
		cout << "没有该联系人！" << endl;
		system("pause");
		system("cls");
		return 0;
	}

	for (int i = 0; i < index; i++) {
		cout << "编号: " << i + 1 << "\t";
		cout << "姓名：" << phoneBook->contactArray[contactExist[i]].contactName << "\t";
		cout << "性别：" << phoneBook->contactArray[contactExist[i]].contactGender << "\t";
		cout << "年龄：" << phoneBook->contactArray[contactExist[i]].contactAge << "\t";
		cout << "电话：" << phoneBook->contactArray[contactExist[i]].contactTel << "\t";
		cout << "住址：" << phoneBook->contactArray[contactExist[i]].contactAddress << endl;
	}

	cout << "请输入想要删除的联系人编号：" << endl;
	int num = 0;
	cin >> num;
	deleteContact(phoneBook, num - 1, contactExist, index);

	system("pause");
	system("cls");
	return 1;
}

//删除功能
int deleteContact(PhoneBook* phoneBook, int index, int* contactExist, int length) {
	if (index > length || index < 0) {
		cout << "编号不存在！" << endl;
		system("pause");
		system("cls");
		return 0;
	}
	cout << "以下为想要删除的联系人：" << endl;
	cout << "姓名：" << phoneBook->contactArray[contactExist[index]].contactName << "\t";
	cout << "性别：" << phoneBook->contactArray[contactExist[index]].contactGender << "\t";
	cout << "年龄：" << phoneBook->contactArray[contactExist[index]].contactAge << "\t";
	cout << "电话：" << phoneBook->contactArray[contactExist[index]].contactTel << "\t";
	cout << "住址：" << phoneBook->contactArray[contactExist[index]].contactAddress << endl;

	cout << "确认删除：（1/0)" << endl;
	int confirm = 0;
	cin >> confirm;
	if (confirm == 0)
		return 0;
	if (contactExist[index] == phoneBook->contact_Size - 1) {
		phoneBook->contactArray[contactExist[index]].contactName = "";
		phoneBook->contactArray[contactExist[index]].contactGender = "";
		phoneBook->contactArray[contactExist[index]].contactAge = 0;
		phoneBook->contactArray[contactExist[index]].contactTel = "";
		phoneBook->contactArray[contactExist[index]].contactAddress = "";
		phoneBook->contact_Size--;
		return 1;
	}
	for (int i = contactExist[index]; i < phoneBook->contact_Size; i++)
	{
		phoneBook->contactArray[i].contactName = phoneBook->contactArray[i + 1].contactName;
		phoneBook->contactArray[i].contactGender = phoneBook->contactArray[i + 1].contactGender;
		phoneBook->contactArray[i].contactAge = phoneBook->contactArray[i + 1].contactAge;
		phoneBook->contactArray[i].contactTel = phoneBook->contactArray[i + 1].contactTel;
		phoneBook->contactArray[i].contactAddress = phoneBook->contactArray[i + 1].contactAddress;
		
	}
	phoneBook->contact_Size--;
	cout << "删除成功" << endl;

	return 1;
}

//修改功能
int modifyContact(PhoneBook* phoneBook, string name) {
	int contactExist[1000];
	int index = 0;
	for (int i = 0; i < phoneBook->contact_Size; i++) {
		if (phoneBook->contactArray[i].contactName == name) {
			contactExist[index] = i;
			index++;
		}
	}
	if (index == 0) {
		cout << "没有该联系人！" << endl;
		system("pause");
		system("cls");
		return 0;
	}

	for (int i = 0; i < index; i++) {
		cout << "编号: " << i + 1 << "\t";
		cout << "姓名：" << phoneBook->contactArray[contactExist[i]].contactName << "\t";
		cout << "性别：" << phoneBook->contactArray[contactExist[i]].contactGender << "\t";
		cout << "年龄：" << phoneBook->contactArray[contactExist[i]].contactAge << "\t";
		cout << "电话：" << phoneBook->contactArray[contactExist[i]].contactTel << "\t";
		cout << "住址：" << phoneBook->contactArray[contactExist[i]].contactAddress << endl;
	}



	string contactName;
	string contactGender;
	int contactAge;
	string contactTel;
	string contactAddress;

	int userSelectIndex = 0;
	int userSelect = 0;
	cout << "请选择要修改的联系人编号：" << endl;
	cin >> userSelectIndex;
	if (userSelect < 0 || userSelect >(sizeof(contactExist) / sizeof(contactExist[0]))) {
		cout << "编号无效" << endl;
		system("pause");
		system("cls");
		return 0;
	}
	cout << "请选择要修改的联系人信息：(1/2/3/4/5)" << endl;
	cin >> userSelect;
	switch (userSelect)
	{
	case 1:
		cout << "请输入联系人姓名：" << endl;
		cin >> contactName;
		phoneBook->contactArray[contactExist[userSelectIndex - 1]].contactName = contactName;
		break;
	case 2:
		cout << "请输入联系人性别：" << endl;
		cin >> contactGender;
		phoneBook->contactArray[contactExist[userSelectIndex - 1]].contactGender = contactGender;
		break;
	case 3:
		cout << "请输入联系人年龄：" << endl;
		cin >> contactAge;
		phoneBook->contactArray[contactExist[userSelectIndex - 1]].contactAge = contactAge;
		break;
	case 4:
		cout << "请输入联系人电话：" << endl;
		cin >> contactTel;
		phoneBook->contactArray[contactExist[userSelectIndex - 1]].contactTel = contactTel;
		break;
	case 5:
		cout << "请输入联系人地址：" << endl;
		cin >> contactAddress;
		phoneBook->contactArray[contactExist[userSelectIndex - 1]].contactAddress = contactAddress;
		break;
	default:
		break;
	}
	cout << "联系人修改成功！" << endl;
	system("pause");
	system("cls");
	return 1;
}

//清空
void cleanPhoneBook(PhoneBook* phoneBook) {
	phoneBook->contact_Size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}