#include <iostream>
#include <string>

using namespace std;

int main() {
	int arr[3][3];
	int arr2[3][3] = 
	{ 
		{2,3,4},
		{4,2,3},
		{3,4,2} 
	};
	int arr3[3][3] = { 3,4,5,6 };
	int arr4[][4] = { 4,4,5,3,4 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}

	cout << sizeof(arr2) << endl;
	cout << sizeof(arr2[0]) << endl;
	cout << sizeof(arr2[0][0]) << endl;

}
 