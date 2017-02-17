/*
Author: Eric Cassells
Student Number: 14706335

Take your solution to Exercise 1.3 of Lab 2 (i.e.  the dice problem) and
rewrite  it  using  C++  classes.   In  particular  define  a  new  class  
called die.   The  class should permit a die of any positive 
number of sides to be represented.  The class should also 
enforce a constraint that a die should have no less that 4 sides.  
If the client code tries to construct a die of less than 4 sides the die 
should default to 6 sided (and print a informational warning message 
to the standard error).

The class should provide three public methods 
(not including constructors, etc.):
int roll();
int getValue();
int getNumsides();

Using  the  resulting die class  create  a  
program  that  has  the  same  functionality
as required in Exercise 1.3 of Lab2
*/

#include "die.h"

// use scope operator to define ctors / dtors and functions
Die::Die(int inSides)
{
	if(inSides > 3)
		this -> numSides_ = inSides;
	else 
		this -> numSides_ = 6;
}

Die::~Die()
{

}

int Die::roll()
{
	// each roll we need to set the value
	// in order to be able to return it from getValue()
	this -> value_ = rand() % getNumsides() + 1;
	return value_;
}

int Die::getValue()
{
	return this -> value_;
}

int Die::getNumsides()
{
	return this -> numSides_;
}
