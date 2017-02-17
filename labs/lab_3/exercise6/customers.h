#pragma once
#include <iostream>
#include <string>
// class definitions must be include in header files
using namespace std;

struct customer
{
	string name;
	customer *next;
};

// void print_customers(customer &head);

// added for exercise6

customer* create_list(string name);
void insert_name(customer* head, string name);
int list_length(customer* head);
void print_customers(customer *head);