#include <iostream>
#include <string>

using namespace std;

int main() {
	for (int i = 1; i <= 100; i++) {
		bool flag = 0;
		if (i % 7 == 0) {
			flag = 1;
		}
		if (i % 10 == 7) {
			flag = 1;
		}
		if (i / 10 == 7) {
			flag = 1;
		}
		if (flag == 1) {
			cout << "PaPaPaPaPa~" << endl;
		}
		else {
			cout << i << endl;
		}
	}
}
