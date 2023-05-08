#include <iostream>
#include <string>
#include "phoneBookHead.h"

using namespace std;

void showMenu(PhoneBook* phoneBook) {
	cout << "=======================" << endl;
	cout << "==== 1.�����ϵ�� =====" << endl;
	cout << "==== 2.��ʾ��ϵ�� =====" << endl;
	cout << "==== 3.ɾ����ϵ�� =====" << endl;
	cout << "==== 4.������ϵ�� =====" << endl;
	cout << "==== 5.�޸���ϵ�� =====" << endl;
	cout << "==== 6.�����ϵ�� =====" << endl;
	cout << "=== ��ǰ��" << phoneBook->contact_Size << "λ��ϵ�� ===" << endl;
	cout << "==== 0.�˳�ͨѶ¼ =====" << endl;
	cout << "=======================" << endl;
}

void quitMenu() {
	cout << "==��ӭ�´�ʹ��ͨѶ¼==" << endl;
}

//���
void addNewContact(PhoneBook* phoneBook) {
	if (phoneBook->contact_Size == MAX) {
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		system("pause");
		system("cls");
		return;
	}
	string contactName;
	string contactGender;
	int contactAge;
	string contactTel;
	string contactAddress;

	cout << "��������ϵ��������" << endl;
	cin >> contactName;
	phoneBook->contactArray[phoneBook->contact_Size].contactName = contactName;
	cout << "��������ϵ���Ա�" << endl;
	cin >> contactGender;
	phoneBook->contactArray[phoneBook->contact_Size].contactGender = contactGender;
	cout << "��������ϵ�����䣺" << endl;
	cin >> contactAge;
	phoneBook->contactArray[phoneBook->contact_Size].contactAge = contactAge;
	cout << "��������ϵ�˵绰��" << endl;
	cin >> contactTel;
	phoneBook->contactArray[phoneBook->contact_Size].contactTel = contactTel;
	cout << "��������ϵ�˵�ַ��" << endl;
	cin >> contactAddress;
	phoneBook->contactArray[phoneBook->contact_Size].contactAddress = contactAddress;

	cout << "��ϵ����ӳɹ���" << endl;
	phoneBook->contact_Size++;

	system("pause");
	system("cls");
}

//չʾ
void showAllContacts(PhoneBook* phoneBook) {
	if (phoneBook->contact_Size == 0) {
		cout << "����ϵ�˼�¼��" << endl;
		system("pause");
		system("cls");
		return;
	}

	//cout << "��ϵ��\t" << "�Ա�\t" << "����\t" << "�绰\t\t" << "סַ" << endl;

	for (int i = 0; i < phoneBook->contact_Size; i++)	{
		cout << "������" << phoneBook->contactArray[i].contactName << "\t";
		cout << "�Ա�" << phoneBook->contactArray[i].contactGender << "\t";
		cout << "���䣺" << phoneBook->contactArray[i].contactAge << "\t";
		cout << "�绰��" << phoneBook->contactArray[i].contactTel << "\t";
		cout << "סַ��" << phoneBook->contactArray[i].contactAddress << endl;
	}

	system("pause");
	system("cls");
}

//����
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
		cout << "û�и���ϵ�ˣ�" << endl;
		system("pause");
		system("cls");
		return 0;
	}

	for (int i = 0; i < index; i++){
		cout << "���: " << i + 1 << "\t";
		cout << "������" << phoneBook->contactArray[contactExist[i]].contactName << "\t";
		cout << "�Ա�" << phoneBook->contactArray[contactExist[i]].contactGender << "\t";
		cout << "���䣺" << phoneBook->contactArray[contactExist[i]].contactAge << "\t";
		cout << "�绰��" << phoneBook->contactArray[contactExist[i]].contactTel << "\t";
		cout << "סַ��" << phoneBook->contactArray[contactExist[i]].contactAddress << endl;
	}

	int selectToDelete = 0;
	cout << "�Ƿ����ɾ�����ܣ����� 1 / �� 0��" << endl;
	cin >> selectToDelete;
	if (selectToDelete == 1) {
		cout << "��������Ҫɾ������ϵ�˱�ţ�" << endl;
		int num = 0;
		cin >> num;
		deleteContact(phoneBook, num - 1, contactExist, index);

	}
	system("pause");
	system("cls");
	return 1;
}

//ɾ������
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
		cout << "û�и���ϵ�ˣ�" << endl;
		system("pause");
		system("cls");
		return 0;
	}

	for (int i = 0; i < index; i++) {
		cout << "���: " << i + 1 << "\t";
		cout << "������" << phoneBook->contactArray[contactExist[i]].contactName << "\t";
		cout << "�Ա�" << phoneBook->contactArray[contactExist[i]].contactGender << "\t";
		cout << "���䣺" << phoneBook->contactArray[contactExist[i]].contactAge << "\t";
		cout << "�绰��" << phoneBook->contactArray[contactExist[i]].contactTel << "\t";
		cout << "סַ��" << phoneBook->contactArray[contactExist[i]].contactAddress << endl;
	}

	cout << "��������Ҫɾ������ϵ�˱�ţ�" << endl;
	int num = 0;
	cin >> num;
	deleteContact(phoneBook, num - 1, contactExist, index);

	system("pause");
	system("cls");
	return 1;
}

//ɾ������
int deleteContact(PhoneBook* phoneBook, int index, int* contactExist, int length) {
	if (index > length || index < 0) {
		cout << "��Ų����ڣ�" << endl;
		system("pause");
		system("cls");
		return 0;
	}
	cout << "����Ϊ��Ҫɾ������ϵ�ˣ�" << endl;
	cout << "������" << phoneBook->contactArray[contactExist[index]].contactName << "\t";
	cout << "�Ա�" << phoneBook->contactArray[contactExist[index]].contactGender << "\t";
	cout << "���䣺" << phoneBook->contactArray[contactExist[index]].contactAge << "\t";
	cout << "�绰��" << phoneBook->contactArray[contactExist[index]].contactTel << "\t";
	cout << "סַ��" << phoneBook->contactArray[contactExist[index]].contactAddress << endl;

	cout << "ȷ��ɾ������1/0)" << endl;
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
	cout << "ɾ���ɹ�" << endl;

	return 1;
}

//�޸Ĺ���
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
		cout << "û�и���ϵ�ˣ�" << endl;
		system("pause");
		system("cls");
		return 0;
	}

	for (int i = 0; i < index; i++) {
		cout << "���: " << i + 1 << "\t";
		cout << "������" << phoneBook->contactArray[contactExist[i]].contactName << "\t";
		cout << "�Ա�" << phoneBook->contactArray[contactExist[i]].contactGender << "\t";
		cout << "���䣺" << phoneBook->contactArray[contactExist[i]].contactAge << "\t";
		cout << "�绰��" << phoneBook->contactArray[contactExist[i]].contactTel << "\t";
		cout << "סַ��" << phoneBook->contactArray[contactExist[i]].contactAddress << endl;
	}



	string contactName;
	string contactGender;
	int contactAge;
	string contactTel;
	string contactAddress;

	int userSelectIndex = 0;
	int userSelect = 0;
	cout << "��ѡ��Ҫ�޸ĵ���ϵ�˱�ţ�" << endl;
	cin >> userSelectIndex;
	if (userSelect < 0 || userSelect >(sizeof(contactExist) / sizeof(contactExist[0]))) {
		cout << "�����Ч" << endl;
		system("pause");
		system("cls");
		return 0;
	}
	cout << "��ѡ��Ҫ�޸ĵ���ϵ����Ϣ��(1/2/3/4/5)" << endl;
	cin >> userSelect;
	switch (userSelect)
	{
	case 1:
		cout << "��������ϵ��������" << endl;
		cin >> contactName;
		phoneBook->contactArray[contactExist[userSelectIndex - 1]].contactName = contactName;
		break;
	case 2:
		cout << "��������ϵ���Ա�" << endl;
		cin >> contactGender;
		phoneBook->contactArray[contactExist[userSelectIndex - 1]].contactGender = contactGender;
		break;
	case 3:
		cout << "��������ϵ�����䣺" << endl;
		cin >> contactAge;
		phoneBook->contactArray[contactExist[userSelectIndex - 1]].contactAge = contactAge;
		break;
	case 4:
		cout << "��������ϵ�˵绰��" << endl;
		cin >> contactTel;
		phoneBook->contactArray[contactExist[userSelectIndex - 1]].contactTel = contactTel;
		break;
	case 5:
		cout << "��������ϵ�˵�ַ��" << endl;
		cin >> contactAddress;
		phoneBook->contactArray[contactExist[userSelectIndex - 1]].contactAddress = contactAddress;
		break;
	default:
		break;
	}
	cout << "��ϵ���޸ĳɹ���" << endl;
	system("pause");
	system("cls");
	return 1;
}

//���
void cleanPhoneBook(PhoneBook* phoneBook) {
	phoneBook->contact_Size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}