// Chapter 10 of C++ How to Program
// vehicle.h
#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

#include <string>

using std::string;
using namespace std;

// class Vehicle definition
class Vehicle
{
	public:
	   Vehicle( const int doors, const int cylinders,
		  string color, double initialFuel,
				  const int transmission );

	   /* a good rule of thumb is to make
		* everything apart from the constructor
		* virtual in a polymorphic hierarchial setup. */
	   virtual ~Vehicle();

	   void setColor( string color );
	   string getColor() const;

	   void setFuelLevel( double amount );
	   double getFuelLevel() const;

	   int getTransmissionType() const;
	   int getNumberOfDoors() const;
	   int getNumberOfCylinders() const;

	   virtual string getClassName() const;

	   /* The following is a pure virtual function
		  this makes the Vehicle class abstract and
		  it means we cannot instantiate it directly */
	   virtual void horn() const = 0;

	   /* This is a standard virtual function
		  it forces the compiler to check any child
		  classes for the same func definition and if
		  found to use that.   */
	   virtual void print() const;

	private:
	   const int numberOfDoors;
	   const int numberOfCylinders;
	   string vehicleColor;
	   string name;
	   double fuelLevel;
	   const int transmissionType;

}; // end class Vehicle

#endif // VEHICLE_H



/**************************************************************************
 * (C) Copyright 1992-2003 by Deitel & Associates, Inc. and Prentice      *
 * Hall. All Rights Reserved.                                             *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
