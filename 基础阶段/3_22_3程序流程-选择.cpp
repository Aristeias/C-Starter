#include <iostream>
#include <string>
using namespace std;

int main() {
	do {
		int pigA = 0, pigB = 0, pigC = 0;
		cin >> pigA >> pigB >> pigC;
		if (pigA > pigB) {
			if (pigA > pigC) {
				cout << "A����" << endl;
			}
			else if (pigA < pigC) {
				cout << "C����" << endl;
			}
			else {
				cout << "A��C����" << endl;
			}
		}
		else if (pigA < pigB) {
			if (pigB > pigC) {
				cout << "B����" << endl;
			}
			else if (pigB < pigC) {
				cout << "C����" << endl;
			}
			else {
				cout << "B��C����" << endl;
			}
		}
		else {
			if (pigA < pigC) {
				cout << "C����" << endl;
			}
			else if (pigA > pigC) {
				cout << "A��B����" << endl;
			}
			else {
				cout << "��ֻС��һ����" << endl;
			}
		}
	} while (0);

	int a = 0, b = 0, c = 0;
	cin >> a >> b;
	c = a > b ? a : b;
	cout << c << endl;

	int isMovieGood = 0;
	cout << "�ⲿ��Ӱ�ķ�����";
	cin >> isMovieGood;
	switch (isMovieGood) {
		case 10:
		case 9:
		case 8:
			cout << "�õ�Ӱ" << endl;
			break;
		case 7:
		case 6:
		case 5:
			cout << "һ���Ӱ" << endl;
			break;
		default:
			cout << "��Ƭ" << endl;
 	}
}