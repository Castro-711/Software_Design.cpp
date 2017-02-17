#include "RuleOfThree.h"

GCharacter::GCharacter(string n, int cap)
{
	name = n;
	capacity = cap;
	used = 0;
	toolHolder = new string[cap];
}

GCharacter::GCharacter(const GCharacter &source)
{
	cout << "Copy constructor call..!\n";

	name = source.name;
	capacity = source.capacity;
	used = source.used;
	// this ensure we are doing a deep copy instead of
	// a shallow copy as we are using the new keyword
	toolHolder = new string[source.capacity];

	copy(source.toolHolder, source.toolHolder + used, toolHolder);
	// above line could be acheived with the for loop below
	// for(int i = 0; i < used; i++)
	// 	tollHolder[i] = source.tollHolder[i];
}

// overloaded assignment operator
GCharacter& GCharacter::operator=(const GCharacter &source)
{
	cout << "Overloaded assignment called..!\n";

	// check for self assignment
	// gc1 = gc1; would be allowed but don't want more work 
	// than is necessary
	if(this == &source)
		return *this; // have to derefernce as this is a pointer

	name = source.name;
	capacity = source.capacity;
	used = source.used;

	copy(source.toolHolder, source.toolHolder + used, toolHolder);

	return *this; // derefence the new gc and return it
}

// destructor
// this only handles the dynamic memory
GCharacter::~GCharacter()
{
	cout << "Destructor called for " << this->name
		<< " @ this memory location " << this << "\n";

	delete[] toolHolder;
}


// insert a new tool into our toolHolder
void GCharacter::insert(const string &toolName)
{
	if(used == capacity)
		cout << "Tool holder is full. Cannot add addtional tools";
	else
	{
		toolHolder[used] = toolName;
		used++; // increment to ensure we don't overwrite added tools
	}
}

ostream& operator<<(ostream& os, const GCharacter &gc)
{
	os << "Game Character " << gc.name <<
		"\nhas the following tools: \n" << "| ";

	for(int i = 0; i < gc.used; i++)
		os << gc.toolHolder[i] + " | ";

	return os << "\n";

}