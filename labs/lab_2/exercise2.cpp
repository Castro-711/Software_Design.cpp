/*
Author: Eric Cassells
Student Number: 147076335

The greatest common divisor (GCD) of two integers is the largest integer
that evenly divides into each of the two integers.  Write a function called
gcd that returns the greatest common divisor of two integers.  The program should 
contain a function called gcd, with appropriate parameters and return type, 
that provide all of the logic for computing the gcd of the two inputted numbers
*/

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	int smallest, // track smallest of the two for our loops
		gcd;

	// determine the smallest
	if(a > b) smallest = b;
	else smallest = a;

	// loop from the smallest back to find an int that 
	// evenly divides a and b
	for(int i = smallest; i > 0; i--)
	{
		if(a % i == 0 && b % i == 0)
		{
			gcd = i;
			break;
		} 
	}

	return gcd;
}

int main()
{
	// declare vars
	int a, 
		b;

	// prompt user to enter two ints
	cout << "Enter two integers:\n";
	cin >> a >> b; // store the input in a and b

	// provide the output with the method call
	cout << "The GCD of " << a << " and " << b << " is:\n" << gcd(a, b) << "\n";


}