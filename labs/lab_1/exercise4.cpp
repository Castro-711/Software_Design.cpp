/*
Eric Cassells
14706335
*/

#include <iostream>
using namespace std;

/*
1. account number (an integer);
2. balance at the beginning of the month;
3. total of all items charged by the customer this month;
4. total of all credits applied to the customer’s account this month;
5. allowed credit limit
*/

int main()
{
	int accountNum, 		
		balance,
		charges,
		credits,
		credit_limit,
		new_entry = 0; 		// tracks if user wishes to enter another customers deets


	while(new_entry != -1)
	{
		// prompt user for input and store in declared variables
		cout << "Enter customer’s deets:" << endl;
		cout << "Account number: " << endl;
		cin >> accountNum;

		cout << "Beginning balance: " << endl;
		cin >> balance;

		cout << "Monthly charges: " << endl;
		cin >> charges;

		cout << "Monthly credits: " << endl;
		cin >> credits;

		cout << "Credit limit: " << endl;
		cin >> credit_limit;

		int new_balance = (balance + charges) - credits;

		// output expected deets
		cout << "Account number: " << accountNum << endl;
		cout << "Credit limit: " << credit_limit << endl;
		cout << "New balance: " << new_balance << endl;

		// check if new balance is greater than credit limit and if necessary output message
		if(new_balance > credit_limit)
			cout << "Credit limit exceeded" << endl;
		
		// prompt user to quit or enter another customers deets
		cout << endl << "Enter -1 to quit, or anyother integer to enter a new customer's deets: " << endl;
		cin >> new_entry;
		cout << endl << endl;

	}

}
