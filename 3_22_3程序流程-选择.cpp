#include <iostream>
#include <string>
using namespace std;

int main() {
	do {
		int pigA = 0, pigB = 0, pigC = 0;
		cin >> pigA >> pigB >> pigC;
		if (pigA > pigB) {
			if (pigA > pigC) {
				cout << "A最重" << endl;
			}
			else if (pigA < pigC) {
				cout << "C最重" << endl;
			}
			else {
				cout << "A和C最重" << endl;
			}
		}
		else if (pigA < pigB) {
			if (pigB > pigC) {
				cout << "B最重" << endl;
			}
			else if (pigB < pigC) {
				cout << "C最重" << endl;
			}
			else {
				cout << "B和C最重" << endl;
			}
		}
		else {
			if (pigA < pigC) {
				cout << "C最重" << endl;
			}
			else if (pigA > pigC) {
				cout << "A和B最重" << endl;
			}
			else {
				cout << "三只小猪一样重" << endl;
			}
		}
	} while (0);

	int a = 0, b = 0, c = 0;
	cin >> a >> b;
	c = a > b ? a : b;
	cout << c << endl;

	int isMovieGood = 0;
	cout << "这部电影的分数：";
	cin >> isMovieGood;
	switch (isMovieGood) {
		case 10:
		case 9:
		case 8:
			cout << "好电影" << endl;
			break;
		case 7:
		case 6:
		case 5:
			cout << "一般电影" << endl;
			break;
		default:
			cout << "烂片" << endl;
 	}
}