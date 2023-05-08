#include <iostream>
#include <string>
#include "phoneBookHead.h"

using namespace std;

int main() {
	PhoneBook pb;
	pb.contact_Size = 0;
	int userSelect = 0;
	while (true) {
		showMenu(&pb);
		cin >> userSelect;
		switch (userSelect)
		{
		case 1: //�����ϵ��
			addNewContact(&pb);
			break;
		case 2: //��ʾ��ϵ��
			showAllContacts(&pb);
			break;
		case 3: //ɾ����ϵ��
		{

			string contactName;
			cout << "��������ϵ��������" << endl;
			cin >> contactName;
			findContact(&pb, contactName,1);
			break;
		}
			break;
		case 4: //������ϵ��
		{

			string contactName;
			cout << "��������ϵ��������" << endl;
			cin >> contactName;
			findContact(&pb, contactName);
			break;
		}
		case 5: //�޸���ϵ��
		{
			string contactName;
			cout << "��������ϵ��������" << endl;
			cin >> contactName;
			modifyContact(&pb, contactName);
			break;
		}
		case 6: //�����ϵ��
			cleanPhoneBook(&pb);
			break;
		case 0: //�˳�ͨѶ¼
			quitMenu();
			return 0;
		default: 
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}