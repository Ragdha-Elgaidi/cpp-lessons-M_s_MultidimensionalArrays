/*
● Read integers N, M represents a matrix. A robot start at cell (0, 0).
● Read integer K, then K commands. Each command is 2 values
○ Direction from 1 to 4: up, right, down, left
○ Steps: a number to number of steps to take in the direction. Steps [1, 1000000000]
○ If the robot hits the wall during the move, it circulates in the matrix.
○ For every command, print where is the robot now
● Input
○ 3 4 4 2 1 3 2 4 2 1 3
■ 2 1 means to right 1 step - 3 2 means down 2 steps
● Output
○ (0, 1) (2,1) (2, 3) (2, 3)
*/

#include<iostream>
using namespace std;

int main()
{
	int n, m, k, r = 0, c = 0;

	cin >> n >> m >> k;

	// Direction from 1 to 4: up, right, down, left
	int rd[4] = { -1, 0, 1, 0 };
	int cd[4] = { 0, 1, 0, -1 };

	while (k--) 
	{
		int dir, steps;
		cin >> dir >> steps;
		--dir;
		// mod for handling large number of Steps [1, 1000000000]
		r = (r + rd[dir] * steps) % n;
		c = (c + cd[dir] * steps) % m;

		if (r < 0)
			r += n;
		if (c < 0)
			c += m;

		cout << r << " " << c << "\n";
	}

	return 0;
}
