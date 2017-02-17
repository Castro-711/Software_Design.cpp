/*
Eric Cassells
14706335
*/

#include <iostream>
using namespace std;

int main()
{
	int fiveDigits; // declare an int to store the input
	cout << "Enter a 5 digit number: " << endl;
	cin >> fiveDigits; // store the input in the int

	//-------------------------------------------------------------------------------------
	// -----------------              not asked in question            --------------------

	int count;	// to check the digit count
	int tempFive = fiveDigits; // to help check if five digits were entered

	while(tempFive > 0)
	{
		count++;
		tempFive = tempFive / 10;
	}

	// checks to see if the number of digits is 5
	if(count < 5 || count > 5)
	{
		cout << "not enough digits, enter a five digit number:" << endl;
		cin >> fiveDigits;
	} // if

	//------------------------------------------------------------------------------------

	int isolator = 10000; // isolator will be instrumental in isolating each digit

	// seperate digits and print with 3 spaces in between
	while(isolator > 0)
	{
		// start with the leftmost digit
		cout << fiveDigits / isolator << "   ";
		fiveDigits %= isolator; // remove the left most digit from fiveDigits
		isolator /= 10;	// divide isolator by 10 to ensure it is below the current amount in fiveDigits		
	}

	cout << endl;

}