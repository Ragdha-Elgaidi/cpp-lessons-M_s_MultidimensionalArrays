/*
● Read 2 integers for the rows and columns of a matrix ( <= 100).
Then read rows x cols integer value.
● Print the following 4 values
○ The sum of the left diagonal & The sum of the right diagonal
○ The sum of the last row & The sum of the last column
● Input: 3 4
○ 8 16 9 52
○ 3 15 27 6
○ 14 25 2 10
● Output
○ 25 104
○ 51 68
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

	int i = 0, j = 0;

	int left_diagonal = 0;
	while (i < rows && j < cols)
		left_diagonal += arr[i++][j++];

	int right_diagonal = 0;
	i = 0, j = cols - 1;
	while (i < rows && j >= 0)
		right_diagonal += arr[i++][j--];

	int last_row = 0;
	j = 0;
	while (j < cols)
		last_row += arr[rows - 1][j++];

	int last_col = 0;
	i = 0;
	while (i < rows)
		last_col += arr[i++][cols - 1];

	cout << left_diagonal << " " << right_diagonal << "\n";
	cout << last_row << " " << last_col << "\n";

	return 0;
}/*
● Read 2 integers for the rows and columns of a matrix ( <= 100).
Then read rows x cols integer value.
● Print the following 4 values
○ The sum of the left diagonal & The sum of the right diagonal
○ The sum of the last row & The sum of the last column
● Input: 3 4
○ 8 16 9 52
○ 3 15 27 6
○ 14 25 2 10
● Output
○ 25 104
○ 51 68
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

	int i = 0, j = 0;

	int left_diagonal = 0;
	while (i < rows && j < cols)
		left_diagonal += arr[i++][j++];

	int right_diagonal = 0;
	i = 0, j = cols - 1;
	while (i < rows && j >= 0)
		right_diagonal += arr[i++][j--];

	int last_row = 0;
	j = 0;
	while (j < cols)
		last_row += arr[rows - 1][j++];

	int last_col = 0;
	i = 0;
	while (i < rows)
		last_col += arr[i++][cols - 1];

	cout << left_diagonal << " " << right_diagonal << "\n";
	cout << last_row << " " << last_col << "\n";

	return 0;
}
