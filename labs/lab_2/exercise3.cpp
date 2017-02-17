/*
Author: Eric Cassells
Student Number: 14706335

Write  a  program  that  simulates  the  rolling  of  two  dice.   The  program
should call rand to roll the  first die,  and call rand again to roll the second die.  The
sum of the two values should then be calculated.  Your program should roll the pair of
dice a user specified number of times, keeping track of the number of times each possible
total value occurs.  To do this it should use an array of 11 items (since there are only 11
possible outcomes i.e.  2 to 12).  At the end of the run the program should print out, in a
tabulated format, the percentage of times each possible total value occurs.
*/

#include <iostream>
#include <stdlib.h>
#include <iomanip> 		// set precision
using namespace std;

int main()
{
	int dice_1,			// die 1
		dice_2,			// die 2
		total_rolls,	// amount of rolls
		current_roll;	// sum of two die rolls

	int percentages[11]; // track number of summed rolls [2 - 12]

	// this is very neccessary to init all the elements to 0
	for(int i = 0; i < 11; i++)
		percentages[i] = 0;

	cout << "Enter the number of rolls you wish to take...\n";
	cin >> total_rolls;

	// loop the number of rolls producing random numbers
	for(int i = 0; i < total_rolls; i++)
	{
		dice_1 = rand() % 6 + 1;
		dice_2 = rand() % 6 + 1;

		// get the sum of the current rolls
		current_roll = dice_1 + dice_2;

		// increment the percentages array
		// current_roll - 2 -> to keep the array within bounds
		// 2 - 12  but we really have 0 - 10 [11] elements
		++percentages[current_roll - 2];
	}

	for(int i = 0; i < 11; i++)
	{
		// calculate the current percentage of all the numbers between 2 - 12
		double current_percentage = ((double) percentages[i] / (double) total_rolls) * 100;
		// i + 2 is to get the number between 2 - 12
		// setprecision(2) ensures that there is on 2 decimal places
		cout << i + 2 << " : " << setprecision(2)  << current_percentage  << "%\n";
	}
}