#include<iostream>
using namespace std;

int main()
{
	int index = 0;

	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 4; col++)
		{
			cout << "index = " << index << "   has row , column = "
				<< row << " " << col << endl;
			index++;
		}
	}
	return 0;
}
