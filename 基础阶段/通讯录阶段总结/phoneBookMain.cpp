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
		case 1: //添加联系人
			addNewContact(&pb);
			break;
		case 2: //显示联系人
			showAllContacts(&pb);
			break;
		case 3: //删除联系人
		{

			string contactName;
			cout << "请输入联系人姓名：" << endl;
			cin >> contactName;
			findContact(&pb, contactName,1);
			break;
		}
			break;
		case 4: //查找联系人
		{

			string contactName;
			cout << "请输入联系人姓名：" << endl;
			cin >> contactName;
			findContact(&pb, contactName);
			break;
		}
		case 5: //修改联系人
		{
			string contactName;
			cout << "请输入联系人姓名：" << endl;
			cin >> contactName;
			modifyContact(&pb, contactName);
			break;
		}
		case 6: //清空联系人
			cleanPhoneBook(&pb);
			break;
		case 0: //退出通讯录
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