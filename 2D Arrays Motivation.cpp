/*
Write a program that reads grades for students
○ 7 students
○ 4 subjects
● Notice
● All mostafa data has grades[0]
● All Asmaa data hasgrades[1]
● All mona data hasgrades[6]
● Notice all inces
○ 0-6 for rows
○ 0-3 for columns
*/

#include<iostream>
using namespace std;

int main()
{

	double grades[7][6] = { 0 };

	// Mostafa Grades
	grades[0][0] = 50, grades[0][1] = 33, grades[0][2] = 40, grades[0][3] = 30;

	// Asmaa Grades
	grades[1][0] = 35, grades[1][1] = 50, grades[1][2] = 40, grades[1][3] = 30;

	// And so on

	// Mona Grades
	grades[6][0] = 35, grades[6][1] = 30, grades[6][2] = 47, grades[6][3] = 16;

	return 0;
}
