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

void print_customers(customer &head);