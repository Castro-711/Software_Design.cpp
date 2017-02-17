/*
Eric Cassells
14706335	
*/

#include <iostream>
using namespace std;

int main()
{
	// declare ints to store input
	int a, b;

	// take in values for a and b
	cin >> a;
	cin >> b;

	if(a % b == 0)
		cout << a << " is a multiple of " << b << endl;
	else if(b % a == 0)
		cout << b << " is a multiple of " << a << endl;
	else
		cout << a << " is not a multiple of " << b << endl;

	return 0;
}