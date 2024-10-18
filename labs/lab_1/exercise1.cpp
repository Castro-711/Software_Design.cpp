/*
Eric Cassells
14706335
*/

#include <iostream>
using namespace std;

int main() 
{
	int a, b, c; // declare ints to store values
	int sum, average, product, smallest, largest; // declare ints to store outputs

	// take in the values
	cin >> a;
	cin >> b; 
	cin >> c;

	// perform calculations
	sum = a + b + c; 		
	average = sum / 3;
	product = a * b * c;

	// get the smallest
	if(a < b && a < c)
		smallest = a;
	else if(b < a && b < c)
		smallest = b;
	else
		smallest = c;

	// get the largest
	if(a > b && a > c)
		largest = a;
	else if(b > a && b > c)
		largest = b;
	else 
		largest = c;

	// output the your calculations
	cout << "Sum: " << sum << endl;
	cout << "Average: " << average << endl;
	cout << "Product: " << product << endl;
	cout << "Smallest: " << smallest << endl;
	cout << "Largest: " << largest << endl;

}
