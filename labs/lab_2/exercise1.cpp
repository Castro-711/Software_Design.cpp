/*
Author: Eric Cassells
Student Number: 14706335

Write  a  function,  called my_swap,  that  takes  two  integers  as  input  and
swaps their values.  To demonstrate that the function works you should write a program
that instructs the user to input two numbers.  The program should store those numbers
in two separate variables.  The program should then output the values stored in the two
variables to the screen, swap the two numbers by calling my_swap, and then again print
out the values stored in the two variables
*/

#include <iostream>
using namespace std;

// & -> ampersand is the reference char, to ensure your variables are not
// passed by value, & must be added to the parameters in the function signature
// pass by reference
void my_swap(int &a, int &b)
{
	int temp = a; // store a in a temp var so we don't overwrite the value
	a = b; 		  // store b in a
	b = temp;	  // store the original a in b

	// print out the values in the function
	cout << "\nIn the my_swap fuction:\n";
	cout << "A = " << a << "\tB = " << b;
}

int main()
{
	// declare ints 
	int a,
		b;

	cout << "Enter two numbers:\n"; // prompt user for input
	cin >> a >> b; // store user input in a and b

	// output the ints with a message sayings its in main
	cout << "In the main fuction:\n";
	cout << "A = " << a << "\tB = " << b;

	// call the my_swap function
	my_swap(a, b);

	// print another message to say control is back in main
	// if we done pass by value the values will still be there originals
	cout << "\nBack in the main fuction:\n";
	cout << "A = " << a << "\tB = " << b << "\n";

}

