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
should also define a default constructor which initialises both
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

#ifndef MYCOMPLEX_H_INCLUDED
#define MYCOMPLEX_H_INCLUDED

#include <iostream>
using namespace std;

class MyComplex
{
	protected:
		double real; 
		double imag;

	public:
		// ctors and dtors
		MyComplex(double, double); // 2 args ctor
		MyComplex(); // default ctor
		~MyComplex(); // dtor

		// getters and setters
		double getReal() const;
		void setReal(double p_real);
		double getImag() const;
		void setImag(double p_imag);

		// functions without operator overload
		MyComplex add(const MyComplex &z);
		MyComplex subtract(const MyComplex &z);
		MyComplex multiply(const MyComplex &z);

		// function to print complex number
		void print();
};

#endif // MYCOMPLEX_H_INCLUDED