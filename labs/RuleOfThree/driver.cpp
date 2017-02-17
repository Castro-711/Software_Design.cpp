#include "RuleOfThree.h"

GCharacter exCopyConstructor(GCharacter tempGC)
{
	cout << "Copy constructor called twice..!\n";
	cout << "Once for the formal parameter being passed by value\n";
	cout << "Once for the return value.\n";

	return tempGC;
}

int main()
{
	GCharacter gc1;

	gc1.insert("potion");
	gc1.insert("crossbow");
	gc1.insert("candle");
	gc1.insert("coat");
	gc1.insert("book");

	cout << gc1 << "\n";


	GCharacter gc2("Bob",5);

	gc2.insert("axe");

	exCopyConstructor(gc2);

	// copy constructor being invoked
	// you dont need the object gc3 that gc2
	// is being assigned to does not have to exist
	GCharacter gc3 = gc2;

	// overloaded assignment operator
	// to use this the two objects must be in existence
	gc2 = gc1;

	cout << "gc1: " << gc1 << "\n";
	cout << "gc2: " << gc2 << "\n";
	cout << "gc3: " << gc3 << "\n";
}