/*
● Read 3 numbers: DEPTH, ROWS, COLS the dimensions of 3D array
● Then read integer either 1 (convert 3D to 1D) or 2 (1D to 3D)
● If input was 1, then read 3 integers d, r, c then convert to position in 1D array
● If input was 2, then read 1 integer position, then convert to 3D array position
● Input ⇒ Outputs
○ 3 4 5 1 1 0 0 ⇒ 20
○ 3 4 5 2 20 ⇒ 1 0 0
○ 3 4 5 1 1 1 1 ⇒ 26
○ 3 4 5 1 2 3 2 ⇒ 57
○ 3 4 5 1 2 0 0 ⇒ 40
○ 3 4 5 2 59 ⇒ 2 3 4
*/

#include<iostream>
using namespace std;

int main()
{
	int D, R, C, type;
	int d, r, c, idx;

	cin >> D >> R >> C >> type;

	int Db = R * C;
	int Rb = C;

	if (type == 1)
	{
		cin >> d >> r >> c;
		idx = d * Db + r * Rb + c * 1;
		cout << idx << "\n";
	}
	else
	{
		cin >> idx;

		// r * Rb + c * 1 < Db
		d = idx / Db;

		// Remove d part, then extract r
		r = (idx % Db) / Rb;

		c = (idx % Db) % Rb;

		cout << d << " " << r << " " << c << "\n";
	}

	return 0;
}
