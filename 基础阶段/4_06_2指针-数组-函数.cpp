#include <iostream>
using namespace std;

void bubbleSort(int* p, int length);

int main() {
	int arr[10] = { 29,32,63,12,34,72,34,68,46,65 };
	int length = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	bubbleSort(arr, length);
	
}

void bubbleSort(int* p,int length) {
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length - i - 1; j++)
		{
			if (p[j] > p[j + 1]) {
				int temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < length; i++)
	{
		cout << p[i] << " ";
	}
}
