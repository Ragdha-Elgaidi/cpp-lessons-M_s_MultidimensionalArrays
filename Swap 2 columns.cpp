/*
● Read integers N, M, then Read matrix NxM.
- Then read 2 indices of columns.
- Swap the 2 columns together. 
- Print the new matrix.
● Input: 3 4
○ 8 16 9 52
○ 3 15 27 6
○ 14 25 2 10
○ 0 3
● Output
○ 52 16 9 8
○ 6 15 27 3
○ 10 25 2 14
*/

#include<iostream>
using namespace std;

int main() 
{
	int arr[100][100];

	int rows, cols;
	cin >> rows >> cols;

	for (int i = 0; i < rows; ++i)
		for (int j = 0; j < cols; ++j)
			cin >> arr[i][j];

	int c1, c2;
	cin >> c1 >> c2;

	for (int i = 0; i < rows; ++i)
	{
		// swap [i][c1] with [i][c2]
		int tmp = arr[i][c1];
		arr[i][c1] = arr[i][c2];
		arr[i][c2] = tmp;
	}
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j)
			cout << arr[i][j] << " ";
		cout << "\n";
	}

	return 0;
}
