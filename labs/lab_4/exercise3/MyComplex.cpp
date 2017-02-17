/*

Author: Eric Cassells
Student Number: 14706335

For  this  exercise  you  should  start  by  copying  the  source 
files from the previous exercise into the Ex3 directory. 
Starting from this point the objective of this  exercise  is  
then  to  reimpliment  the  operations  from  Exercise  1.2  using 
operator overloading. In  particular  you  should  provide  
implementations  for  the  following operators:

+, -, *.

*/


#include "MyComplex.h"

MyComplex::MyComplex(double p_real, double p_imag)
{
	this -> real = p_real;
	this -> imag = p_imag;
}

MyComplex::MyComplex()
{
	this -> real = 0;
	this -> imag = 0;
}

MyComplex::~MyComplex()
{

}

double MyComplex::getReal() const
{
	return real;
}

void MyComplex::setReal(double newReal)
{
	this -> real = newReal;
}

double MyComplex::getImag() const
{
	return imag;
}

void MyComplex::setImag(double newImag)
{
	this -> imag = newImag;
}

/**
 I was having some trouble figuring out how to complete 
 the add, subtract and multiply funtions...

 one error when trying to access z.getReal():
 "passing ‘const MyComplex’ as ‘this’ argument discards qualifiers [-fpermissive]"

 Answer from stackoverflow
 'When you try to call getReal() with the const object the compiler detects 
 a problem, namely you're calling a non-const member function on const object 
 which is not allowed becuase non-const member functions make NO PROMISE not to
 modify the object; so the compiler is going to make a safe assumption that
 getReal() might attempt to modify the object but at the same time, it also notices
 that the object is const; so any attempt to modify the const object should be an error. 
 Hence the compiler generates that error.'

 A solution is to make the functions const or to directly call the value
 like:
 	z.real etc

 but I have opted to make the getters const's so we can deal with the functions
*/

MyComplex MyComplex::operator+(const MyComplex &z)
{
	// create a new object 
	MyComplex fresh;

	fresh.setReal(this -> getReal() + z.getReal());

	fresh.setImag(this -> getImag() + z.getImag());

	return fresh;
}

MyComplex MyComplex::operator-(const MyComplex &z)
{
	// create a new object to return
	MyComplex fresh;

	// set the real value for zPtr by subtracting
	// z's real from this's real
	fresh.setReal(this -> getReal() - z.getReal());

	// set the imag value for zPtr by subtracting
	// z's imag from this's imag
	fresh.setImag(this -> getImag() - z.getImag());

	return fresh;
}

MyComplex MyComplex::operator*(const MyComplex &z)
{
	// create a new object to return
	MyComplex fresh;

	// set the real value for zPtr by subtracting
	// z's real from this's real
	fresh.setReal(this -> getReal() * z.getReal());

	// set the imag value for zPtr by subtracting
	// z's imag from this's imag
	fresh.setImag(this -> getImag() * z.getImag());

	return fresh;
}


void MyComplex::print()
{
	cout << this -> getReal() << " + " << 
		this -> getImag() << "i\n";
}