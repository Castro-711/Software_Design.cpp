#include "customers.h"
using namespace std;

void print_customers(customer &head)
{
	customer *cur = &head;

	while(cur != NULL)
	{
		// use -> 
		// to access members of an instantiated struct
		cout << cur -> name << endl;
		cur = cur -> next;
	}
}