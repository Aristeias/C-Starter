#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main() {
	int i = 1;
	while (i <= 10) {
		cout << i << ",";
		i++;
	} 

	cout << endl;
	for (int j = 11; j <= 20; j++) {
		cout << j << ",";
	}
	cout << endl;

	int k = 90;
	do {
		cout << k++ << endl;
	} while (k <= 97);


	srand((unsigned int)time(NULL));
	int randNum = rand() % 100 + 1;
	int userNum = 0;// 1
	while (userNum > 0) {
		cin >> userNum;
		if (userNum > randNum) {
			cout << "ด๓" << endl;
		}
		else if (userNum < randNum) {
			cout << "ะก" << endl;
		}
		else {
			cout << "บร" << endl;
			break;
		}
	}

	int testNum = 100;
	do {
		int num1 = testNum / 100;
		int num2 = testNum / 10 % 10;
		int num3 = testNum % 10;
		int sum = (num1 * num1 * num1) + (num2 * num2 * num2) + (num3 * num3 * num3);
		//cout << num1 << num2 << num3 << endl;
		if (sum == testNum) {
			cout << testNum << endl;
		}
		testNum++;
	} while (testNum <= 999);


}