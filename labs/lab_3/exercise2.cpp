/*
Author: Eric Cassells
Student Number: 14706335

Now  write  a  program  that  extends  the  functionality  of  the  above
program such that it keeps reading the sequence until it reads -1.  That is, the program
should not intially ask for the length of the sequence.

HINT: In  designing  a  solution  to  this  problem  you  will  need  a  list  that  can  keep
growing arbitrarily.  This can be achieved by allocating an array of a fixed length and
then reading numbers until the array becomes full.  At this point a new array can be
allocated which has a size of the original array plus some  fixed amount.  Once allocated,
the  contents  of  the  first  array  should  be  copied  to  the  second  array  (at  which  point
the  first array should be freed).To copy the contents of one array to the other you can
either implement your own routine or use memcpy (full detail of which can be found on cplusplus.com)

*/

#include <iostream>
#include <string.h>
using namespace std;

const int size = 10; // size of single capacity before it doubles

void print_reversed(double toReverse[], int size)
{
	// loop from the end of the double array
	// printing each double followed by a space
	for(int i = size - 1; i >= 0; i--)
		cout << toReverse[i] << " ";

	cout << "\n"; // line break for beauty
}

void array_copy(double dest[], double src[], int cur_size)
{
	for(int i = 0; i < cur_size; i++)
		dest[i] = src[i];
}

int main()
{
	// static memory refers to variables on the stack
	// stack stores all the variables currently in scope
	// the heap can grow as you need it and so its dynamic
	// to put something on the heap you use the new keyword 
	// 	->	this returns a pointer
	
	// create the array dynamically
	// this is an approach to access stuff on the heap
	// it is very powerful if you wish to add many of the
	// desired primitive types you are using
	double* original = new double[size]; 

	double current = 0; // track current double
	int input_counter = 0; // track the number of entries

	while(current != -1)
	{
		// prompt user for input
		cout << "Enter double " << input_counter + 1 << "(-1 to quit):\n";
		cin >> current; // store latest double to check if -1

		// store current in next available slot of array
		original[input_counter] = current; 
		input_counter++;

		// check if we are near the edge of the array [size - 1]
		// as arrays begin from 0 - 9


		// *********************************************
		// % 10 will always return values between 0 - 9
		// *********************************************
		if(input_counter == size - 1)
		{
			// input_counter + 1 on first run will be 10, 
			// second will be 20, then 30 and so on...
			int input_plus_one = input_counter + 1;

			double* temp = new double[input_plus_one];
			// void * memcpy ( void * destination, const void * source, size_t num );
			array_copy(temp, original, input_plus_one);

			// now temp holds the value of original we can free that memory
			delete[] original;

			// reassign some memory to original and perform the swap again
			original = new double[input_plus_one + size]; // increase the array by size [10]

			// now copy back the data from temp into our new original
			array_copy(original, temp, input_plus_one);

			// now we can free up the data stored in temp
			delete[] temp;

			cout << "I am in the if statement..!\n";
		} // if
	} // while

	// input_counter - 1 to remove the (-1) in the output
	print_reversed(original, input_counter - 1);

} // main
