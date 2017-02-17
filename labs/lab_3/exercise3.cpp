/*
Author: Eric Cassells
Student Number: 14706335

Write a program,  using struct's,  that reads in the name and age of a
list  of  people,  and  again,  prints  them  out  in  reverse.   The  program  should  store  the
above details using an array of structs.  Initially the program should ask the user for
the number of people that will be input.
*/

#include <iostream>
using namespace std;

// create a struct
struct person
{
	string name;
	int age;
};

void reverse_people(person array[], int size)
{
	for(int i = size - 1; i >= 0; i--)
		cout << "\nName: " << array[i].name << "\nAge: " << array[i].age << "\n";
}

int main()
{
	int num_people;
	// prompt user for the number of people they wish to enter
	cout << "How many peoples details to you wish to add?\n";
	cin >> num_people;

	// declare a person array to add the peoples data to
	person *p_array = new person[num_people];

	for(int i = 0; i < num_people; i++)
	{
		cout << "Enter person " << i + 1 << "'s name:\n";
		cin >> p_array[i].name;

		cout << "Enter " << p_array[i].name << "'s age:\n";
		cin >> p_array[i].age;
	}

	reverse_people(p_array, num_people);
}