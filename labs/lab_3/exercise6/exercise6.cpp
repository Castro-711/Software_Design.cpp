/*
Author: Eric Cassells
Student Number: 14706335

Finally,  using the above set of  les as a base,  extend functionality of
the customers api such that it provides all of the functionality necessary to construct
a linked list of people to input by the user.  To do this you should add the following
routines:

customer *create_list(string name);
void insert_name(customer* head, string name);
int list_length(customer* head);
void print_customers(customer *head);

Demonstrate  the  functionality  by  writing  a  program  which  allows  the  user  to  in-
put an aribtrary number of customers.  The program should store these customers in
a  linked  list.   The  program  should  keep  inputting  customers  until  the  user  inputs  a
user with the name end at which point all the user details should be printed to the screen.
*/

#include "customers.h"
using namespace std;

int main()
{
	string curName = "start";
	customer *head; // track the head of the list
	 // track the current customer

	while(curName != "end")
	{
		cout << "Enter the name of your next customer...\n";
		
		if(curName == "start") // first iteration
		{
			cin >> curName; // get the current name
			head = create_list(curName); // create list, store in head
		}
		else // second + iterations
		{
			cin >> curName;
			if(curName != "end") // we don't want to add end
				insert_name(head, curName); // add name and link to previous
		}
		
		// break for beauty
		cout << "\n";
		
	} // while

	// print all the customers
	cout << "\nA list of customers:\n";
	print_customers(head);

	cout << "\nList length:\n" << list_length(head) << "\n";

	return 0;
}

