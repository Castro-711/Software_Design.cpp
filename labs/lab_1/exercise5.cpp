/*
Eric Cassells
14706335
*/

#include <iostream>
using namespace std;

int main()
{
	int primeCount = 0; // track the number of primes

	for(int y = 2; y <= 5000; y++) // check is this a prime
	{
		int multipleCount = 0; // track the number of multiples

		for(int x = 2; x <= y; x++) // work up to y
		{
			if(y % x == 0) // compare x to y 
				multipleCount++; // increment multipleCount
		}

		if(multipleCount < 2) // check if multipleCount is less than 1
		{
			cout << y << " "; // print the prime
			primeCount++; 	  // increment the prime count
		}
	} // for

	// print out the number of primes
	cout << endl << "there is " << primeCount << endl;
	return 0;
}



