/*
Author: Eric Cassells
Student Number: 14706335

Write two functions with the following function prototypes:
int my_string_len(char str[])
void my_string_cat(char dest[], char src[], int destsize)

Both functions should take zero-terminated strings as input.  The  first function should
return the length of the string to the calling function.  The second function should take
a source and a destination string and the total size of the array pointed to by
dest. It should then concatenate the source string onto the end of the destination string,
if and only  if  the  destination  string  has  the  capacity  to  store  both  strings. 
If the destination string does not have the capacity it should not alter either, print and error,
and return to the calling function.
*/

#include <iostream>
using namespace std;

int my_string_len(char str[])
{
	int length = 0; // track the current element of the var

	// loop using a while until we reach the null char
	while(str[length] != '\0')
		length++;

	// return the length which is i
	return length;
}

void my_string_cat(char dest[], char src[], int destsize)
{
	// calculate their lengths
	int src_len = my_string_len(src);
	int dest_len = my_string_len(dest);

	cout << src_len + dest_len << "\n";
	cout << destsize << "\n";

	// determine if the concatenation should be performed
	if(src_len + dest_len < destsize)
		// start at last char of dest string, loop src_len times
		for(int i = dest_len; i < dest_len + src_len; i++)
			// add the src to the rest of the dest
			// i - dest_len == 0, to get us to the beginning of src
			dest[i] = src[i - dest_len]; 
	else
		cout << "The destination is not big enough..!";

}

int main()
{
	// create two zero terminated strings to pass 
	// to the my_str_cat function
	// one will be the dest, and so a length must be 
	// added in order to allow them to be concatenated
	char one[22] = "Liverpool ";

	// two will represent the src and it does'nt 
	// not need the length to be specified when declaring
	// and initializing the char array (zero terminated string)
	char two[] = "are beast!";

	// call the my_string_cat function passing the correct 
	// arguments, in this case, I have passed the size of
	// dest as a value as I have no functions to determine len
	// a call for my_string_len(one) will yield 9 as 
	// it does not include the empty elements
	my_string_cat(one, two, 22);

	cout << one << "\n";
}
