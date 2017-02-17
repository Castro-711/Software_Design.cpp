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
		MyComplex operator+(const MyComplex &z);
		MyComplex operator-(const MyComplex &z);
		MyComplex operator*(const MyComplex &z);

		// function to print complex number
		void print();
};

#endif // MYCOMPLEX_H_INCLUDED