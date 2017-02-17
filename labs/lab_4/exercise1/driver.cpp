/*
Author: Eric Cassells
Student Number: 14706335

----** aim of lab_2 that we need to implement here in the driver file **----

Write  a  program  that  simulates  the  rolling  of  two  dice.   The  program
should call rand to roll the  first die,  and call rand again to roll the second die.  The
sum of the two values should then be calculated.  Your program should roll the pair of
dice a user specified number of times, keeping track of the number of times each possible
total value occurs.  To do this it should use an array of 11 items (since there are only 11
possible outcomes i.e.  2 to 12).  At the end of the run the program should print out, in a
tabulated format, the percentage of times each possible total value occurs.
*/

#include "die.h"

int main()
{
	// create variables to calculate the sum of the die etc
	int dieSum = 0; // init it to 0
	int numRolls = 0; // the number of rolls the user wants
	int dieSides = 0; // the number of die sides

	// prompt user for the size of die they wish to use
	cout << "What size die do you wish to use(How many sides)...?\n";
	cin >> dieSides;

	// create an array of length dieSides x 2 to calculate the 
	// number of times each sum appears
	int sumArray[dieSides * 2]; 

	// we need to populate the array with 0's to get desired calculations
	for(int i = 0; i <=	 dieSides * 2; i++)
		sumArray[i] = 0;

	// prompt user for the number of rolls they wish to perform
	cout << "How many rolls do you wish to perform...?\n";
	cin >> numRolls;

	// now create my two dies
	Die die1(dieSides);
	Die die2(dieSides);

	// perform the rolls
	for(int i = 0; i < numRolls; i++)
	{
		die1.roll();
		die2.roll();

		// store current sum of the rolls
		dieSum = die1.getValue() + die2.getValue();

		//cout << "Die sum: " << dieSum << "\n";

		sumArray[dieSum]++;
	} // for

	cout << "\n"; // line break for beauty
	// perform the percentage calculations
	for(int i = 2; i <= die1.getNumsides() * 2; i++)
	{
		// print each possible sum along with the 
		// percentage that they appear in these rolls
		double curPer = ((double)sumArray[i] / (double)numRolls) * 100;
		cout << i << " appeared\t" << curPer << "%\n";
	} // for
}