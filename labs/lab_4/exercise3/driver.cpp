#include "MyComplex.h"

int main()
{
	MyComplex mc1(5, 7);
	MyComplex mc2(3, 11);

	cout << "mc1 | ";
	mc1.print();

	cout << "mc2 | ";
	mc2.print();

	MyComplex mc3 = mc1 + mc2;

	cout << "\nmc3 = mc1 + mc2:\n";
	cout << "mc3 | ";
	mc3.print();

	MyComplex mc4 = mc1 - mc2;

	cout << "\nmc4 = mc1 - mc2:\n";
	cout << "mc4 | ";
	mc4.print();

	MyComplex mc5 = mc1 * mc2;

	cout << "\nmc5 = mc1 * mc2:\n";
	cout << "mc5 | ";
	mc5.print();


}