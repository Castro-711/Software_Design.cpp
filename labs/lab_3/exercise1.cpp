/*
Author: Eric Cassells
Student Id: 14706335

Write a program which allows the user to input an sequence of doubles
and then prints that sequence in reverse.  The length of the sequence should be speci ed
by the user at run-time. Hence, initially the program should ask the user to input how
many numbers the sequence will contain.

*/

#include <iostream>
using namespace std;

void print_reversed(double toReverse[], int size)
{
	// loop from the end of the double array
	// printing each double followed by a space
	for(int i = size - 1; i >= 0; i--)
		cout << toReverse[i] << " ";

	cout << "\n"; // line break for beauty
}

int main()
{
	// prompt user to enter the size of the array
	int size;

	cout << "Enter the number of doubles you wish to enter:\n";
	cin >> size;

	// static memory refers to stuff on the stack
	// stack stores all the variables currently in scope
	// the heap can grow as you need it and so is dynamic
	// to put something on the heap you use the new keyword 
	// 	->	this returns a pointer
	
	// create the array dynamically
	// this is an approach to access stuff on the heap
	// it is very powerful if you wish to add many of the
	// desired primitive types you are using
	double *userDoubles = new double[size];

	// take in the doubles
	for(int i = 0; i < size; i++)
	{
		// prompt user
		cout << "Enter double " << i + 1 << ":\n";
		cin >> userDoubles[i]; // store their input
	} 

	// make call to function, passing the correct params
	print_reversed(userDoubles, size);
}
