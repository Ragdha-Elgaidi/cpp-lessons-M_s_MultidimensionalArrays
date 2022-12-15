/*
● Read integer (N<100), then Read Square matrix NxN. Then, print 2 values.
The sum of the lower triangle matrix and the upper triangle.
● Input
○ 3
○ 8 16 9
○ 3 15 27
○ 14 25 29
● Output
○ 94 (8+15+29+3+25+14)
○ 104 (8+15+29+16+27+9)
*/

#include<iostream>
using namespace std;

int main()
{
	int n, upper = 0, lower = 0, val;
	// No need to create matrix!
	cin >> n;
	for (int i = 0; i < n; ++i) 
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> val;

			if (i <= j)
				lower += val;

			if (i >= j)
				upper += val;
		}
	}

	cout << lower << "\n";
	cout << upper << "\n";

	return 0;
}
