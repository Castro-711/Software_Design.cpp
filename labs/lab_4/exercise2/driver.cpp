#include "MyComplex.h"

int main()
{
	// create two MyComplex objects
	MyComplex mc1(2, 50);
	MyComplex mc2(7, 2);

	cout << "mc1 real : " << mc1.getReal() << "\n";
	cout << "mc1 imag : " << mc1.getImag() << "\n\n";

	cout << "mc2 real : " << mc2.getReal() << "\n";
	cout << "mc2 imag : " << mc2.getImag() << "\n\n";

	mc2.add(mc1);

	// create a new MyComplex object, mc3,
	//  resulting from adding mc1 with mc2
	MyComplex mc3 = mc1.add(mc2);

	cout << "mc3 = mc1.add(mc2);\n";
	cout << "mc3 real : " << mc3.getReal() << "\n";
	cout << "mc3 imag : " << mc3.getImag() << "\n\n"; 

	// create a new MyComplex object, mc4, 
	// resulting from subtracting mc3 with mc1
	MyComplex mc4 = mc1.subtract(mc3);

	cout << "mc4 = mc1.subtract(mc3);\n";
	cout << "mc4 real : " << mc4.getReal() << "\n";
	cout << "mc4 imag : " << mc4.getImag() << "\n\n"; 

	// create a new MyComplex object, mc5,
	//  resulting from multiplying mc1 with mc2
	MyComplex mc5 = mc1.multiply(mc2);

	cout << "mc5 = mc1.multiply(mc2);\n";
	cout << "mc5 real : " << mc5.getReal() << "\n";
	cout << "mc5 imag : " << mc5.getImag() << "\n\n"; 

	// now to used there print functions
	cout << "Our 5 complex numbers are: \n";
	cout << "mc1 | ";
	mc1.print();
	cout << "mc2 | ";
	mc2.print();
	cout << "mc3 | ";
	mc3.print();
	cout << "mc4 | ";
	mc4.print();
	cout << "mc5 | ";
	mc5.print();


}