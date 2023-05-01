#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main() {
	int arr[5];
	int arr2[5] = { 100,120,30,140,75 };
	int arr3[5] = { 5,3,1,2,6 };

	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		if (max <= arr2[i]) {
			max = arr2[i];
		}
	}
	cout << max << endl;

	//数组顺序反转
	int start = 0;
	int end = sizeof(arr3) / sizeof(arr3[0]) - 1;
	int temp = 0;

	for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++)
	{
		if (i < end)
		{
			temp = arr3[start];
			arr3[start] = arr3[end];
			arr3[end] = temp;
			start++;
			end--;
		}
		cout << arr3[i] << " - ";
	}

	cout << endl;
	//冒泡排序
	int bubbleArr[10] = { 51,70,5,23,26,98,15,12,64,54 };
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0 ; j < 10 - i - 1; j++) {
			if (bubbleArr[j] > bubbleArr[j+1]) {
				int temp = bubbleArr[j];
				bubbleArr[j] = bubbleArr[j+1];
				bubbleArr[j+1] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << bubbleArr[i] << " - ";
	}
	
}
