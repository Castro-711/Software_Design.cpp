#include "customers.h"
using namespace std;

customer *create_list(string p_name)
{
	customer* newCust = new customer; // declare
	newCust -> name = p_name; // set name
	newCust -> next = NULL; // set next

	return newCust; 
}

void insert_name(customer* head, string p_name)
{
	// create new customers pointers to acheive function goals
	customer* current;	// track current 
	customer* latest = new customer;	// add latest

	// at beginning we want current to start with head
	current = head; 

	// cycle through list changing current to next
	while(current -> next != NULL)
		current = current -> next;

	// set up latest members
	latest -> name = p_name;
	latest -> next = NULL;

	// add latest to the end of the list
	current -> next = latest;
}

int list_length(customer* head)
{
	int length = 0; // track length of list

	// create a current so we dont override the head
	customer* current = head;

	// cycle through the list
	while(current != NULL)
	{
		current = current -> next;
		length++;
	}

	return length;
}

void print_customers(customer* head)
{
	// let current be head in beginning so we don't 
	// lose its value.
	customer* current = head;

	while(current != NULL)
	{
		cout << current -> name << "\n";
		current = current -> next;
	}
}