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
		case 1: //�����ϵ��
			system("cls");
			break;
		case 2: //��ʾ��ϵ��
			system("cls");
			break;
		case 3: //ɾ����ϵ��
			system("cls");
			break;
		case 4: //������ϵ��
			system("cls");
			break;
		case 5: //�޸���ϵ��
			system("cls");
			break;
		case 6: //�����ϵ��
			system("cls");
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