#include <iostream>
#include <string>
#include "phoneBookHead.h"

using namespace std;

int main() {
	int userSelect = 0;
	while (true) {
		showMenu();
		cin >> userSelect;
		switch (userSelect)
		{
		case 1: //添加联系人
			system("cls");
			break;
		case 2: //显示联系人
			system("cls");
			break;
		case 3: //删除联系人
			system("cls");
			break;
		case 4: //查找联系人
			system("cls");
			break;
		case 5: //修改联系人
			system("cls");
			break;
		case 6: //清空联系人
			system("cls");
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