#include <iostream>
using namespace std;

/*
Shallow copy constructor, most classes in c++ have pointers
We should not copy pointers, copy what is pointed to by pointers
If one clss's destructor is called it will corrupt other class object
*/

class MyClass
{
	int a;
	double b;
	string c;
};