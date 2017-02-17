/*
Author: Eric Cassells
Student Number: 14706335

Create a class called MyComplex for performing 
arithmetic with complex numbers.  Write a 
driver program to test your class.  
Complex numbers have the form

z = a + ib where i = /-1

Use  double  variables  to  represent  the protected
members  of  the  class. Provide
a constructor function that enables an object of this 
class to be initialised when it is declared.  You 
should also de ne a default constructor which initialises both
a and b to be set equal to zero.

You  should  also  provide getter and setter
methods  for  both  the  real  and  imaginary components of the
MyComplex number:

double getReal()
void setReal(double)
double getImag()
void setImage(double)

In  this  question  you  should  implement  the  following  methods
without using  operator overloading. Addition of two MyComplex
numbers, using the following prototype:
MyComplex Add(const MyComplex &z)

Subtraction of two MyComplex numbers, using the following prototype:
MyComplex Subtract(const MyComplex &z)

Multiplication of two MyComplex numbers, using the following prototype:
MyComplex Multiply(const MyComplex &z)

For example given three objects,
a, b, and c, the code
c = a.Add(b);
should be equivalent to
c = a + b.

You  should  also  provide  a print
function  to  output  a  complex  number  to  the
screen  in  the  following  format:   
"2 + 4i".    
The  function  should  have  the  following prototype:
void print()
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

/*
I was having some trouble figuring out how to complete 
the add, subtract and multiply funtions...

one error when trying to access z.getReal():
"passing ‘const MyComplex’ as ‘this’ argument discards qualifiers [-fpermissive]"

Answer from stackoverflow
'When you try to call getReal() with the const object the compiler detects 
a problem, namelye you're calling a non-const member function on const object 
which is not allowed becuase non-const member functions make NO PROMISE not to
modify the object; so the compiler is going to make a safe assumption that
getReal() migth attempt to modify the object but at the same time, it also notices
that the object is const; so any attempt to modify the const object should be an error. 
Hence the compiler generates that error.'

A solution it to make the functions const or to directly call the value
like:
	z.real etc

but I have opted to make the getters const's so we can deal with the functions
*/

/*
My original functions looked liked this but after moving on
I remembered that I would be causing a memory leak, 
no pun intended. So I will change them to what you see below...

MyComplex MyComplex::add(const MyComplex &z)
{
	// create a new object on the heap
	MyComplex *zPtr = new MyComplex;

	// set its real value to the sum of the 
	// two objects the add is performing on
	zPtr -> setReal(z.getReal() + this -> getReal());

	// set its imag value to the sum of the 
	// two objects the add is performing on
	zPtr -> setImag(z.getImag() + this -> getImag());

	return *(zPtr); // dereference and return
}
*/

MyComplex MyComplex::add(const MyComplex &z)
{
	// create a new object 
	MyComplex fresh;

	// set its real value to the sum of the 
	// two objects the add is performing on
	fresh.setReal(z.getReal() + this -> getReal());

	// set its imag value to the sum of the 
	// two objects the add is performing on
	fresh.setImag(z.getImag() + this -> getImag());

	return fresh; // dereference and return
}

MyComplex MyComplex::subtract(const MyComplex &z)
{
	// create a new object 
	MyComplex fresh;

	// set its real value to the sum of the 
	// two objects the add is performing on
	fresh.setReal(z.getReal() - this -> getReal());

	// set its imag value to the sum of the 
	// two objects the add is performing on
	fresh.setImag(z.getImag() - this -> getImag());

	return fresh; // dereference and return
}

MyComplex MyComplex::multiply(const MyComplex &z)
{
	// create a new object 
	MyComplex fresh;

	// set its real value to the sum of the 
	// two objects the add is performing on
	fresh.setReal(z.getReal() * this -> getReal());

	// set its imag value to the sum of the 
	// two objects the add is performing on
	fresh.setImag(z.getImag() * this -> getImag());

	return fresh; // dereference and return
}

void MyComplex::print()
{
	cout << this -> getReal() << " + " << 
		this -> getImag() << "i\n";
}