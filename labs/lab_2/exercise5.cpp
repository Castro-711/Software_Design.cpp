/*
Author: Eric Cassells
Student Number: 14706335

function prototypes:
void print string_array(char str[])
void print string_ptr(char *str)

Both  of  the  above  functions  should  print zero-terminated c-strings  to  the  screen
character by character i.e. by stepping through the string one character at a time and
returning once a '\0' character is encountered.  The  first function should use the array
indexing operator to achieve this, whilst the second should use a pointer to traverse the
characters of the string.
*/

#include <iostream>
using namespace std;

/*
In this exercise it is very important to remember:

& -> this is the reference operator, read as "address of"
* -> is the derefence operator, read as "value pointed by"

int v;  -> defines variable v of type int
int* p; -> defines p as a pointer to int
p = &v; -> assigns address of variabl v to pointer p
v = 3;  -> assigns 3 to v
*p = 4; -> assigns 4 to v using indirect addressing, refering
to the same variable (v) using its address
*/

void print_string_array(char str[])
{
	int current_char = 0; 

	while(str[current_char] != '\0')
	{
		cout << str[current_char];
		current_char++; // increment to the next character of the string
	}

	// add a line break for readability
	cout << "\n";
}

// remember the name of an array is its address
// *(arrayname + i) -> gives the i'th element of the array
void print_string_ptr(char *str)
{
	int i = 0; // this will track the current element number
	char current_char = *(str + i); // gives the i'th element of the array

	while(current_char != '\0')
	{
		cout << current_char; // print the char
		i++; // increment i 
		current_char = *(str + i); // store next char in c_c
	}

	// line break for beauty :)
	cout << "\n"; 
}

int main()
{
	// declare a C-string (char array)
	char smash[] = "I am gonna smash this interview today..!";
	// call the index pointed print function
	print_string_array(smash);
	// call the pointer traversal print function
	print_string_ptr(smash);	
}

