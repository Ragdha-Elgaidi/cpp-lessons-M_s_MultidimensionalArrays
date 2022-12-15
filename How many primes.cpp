/*
● Read 2 integers N and M, then Read matrix NxM.
● Then read integer Q, for Q queries.
● For each query read 4 integers: i j r c
○ Represents a grid (submatrix): top left (i, j) and (r, c) for (# rows, # cols)
● For each query, print how many prime numbers in the requested grid.
○ Each query should be answered using nested loops maximum not more
● Input ⇒ Output
○ 3 4
○ 8 2 9 5
○ 3 2 27 6
○ 7 8 29 22
○ 2
○ 1 0 2 2 ⇒ 3 (primes 3, 2, 7 in rectangle (0, 1) (2, 1) )
○ 0 1 2 3 ⇒ 3 (primes 2, 5, 2 in rectangle (0, 1) (1, 3) )

*/
#include<iostream>
using namespace std;

int main() 
{
	bool is_prime[100][100] = { 0 };
	int n, m, val;

	cin >> n >> m;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
		{
			cin >> val;

			// let's compute is prime once NOT with every query. Also no need for main array
			if (val <= 1)
				continue;

			is_prime[i][j] = 1;
			for (int k = 2; k < val; ++k)
			{
				if (val % k == 0)
				{
					is_prime[i][j] = 0;
					break;
				}
			}
		}

	int q, si, sj, rs, cls;
	cin >> q;

	while (q--) 
	{
		cin >> si >> sj >> rs >> cls;
		int cnt = 0;

		for (int i = si; i <= si + rs - 1; ++i)
		{
			for (int j = sj; j <= sj + cls - 1; ++j)
				cnt += is_prime[i][j];
		}
		cout << cnt << "\n";
	}

	return 0;
}
