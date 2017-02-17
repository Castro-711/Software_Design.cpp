#include <iostream>
#include <vector>
using namespace std;

/* templates should be declared directly
above the function intending to use them,
the are extremely handy when needing to write
many functions with same functionality but
just deal with different I/O types */
template<typename T1, typename T2> 
void printArray(vector<T1> array, T2 size)
{
	for(int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}

	cout << "\n";
}

/* 
CONTAINERS: for holding data i.e. vectors
ALGORITHMS: for controlling data i.e. sorting
ITERATORS:	for interfacing between containers
and algorithms.

These help make up the STL - 
	Standard Template Library
*/

template <typename T>
void printIterator(vector<T> v)
{
	// typename keyword here helps to 
	// avoid idiosyncrasy, in other words
	// confusing the compiler with type issues
	// like whether its a function, bool, int etc
	typename vector<T>::const_iterator i;
	// by removing typename I got mega errors 

	// iterate through the vector printing
	// out each of the elements as they come
	for(i = v.begin(); i != v.end(); ++i)
		cout << *i << " ";

	// adding a breakline for beauty
	cout << "\n";
}

int main()
{
	// declare vector of type int
	vector<int> vec(20);

	// populate it with values
	for(int i = 0; i < 20; i++)
		vec[i] = i + 1;

	cout << "Integer array:\n";
	// call function
	printArray(vec, 20);

	// to show it works I will repeat 
	// but using doubles this time

	// declare vector of type double
	vector<double> doubVec(20);

	// populate it with values
	for(int i = 0; i < 20; i++)
		doubVec[i] = (i + 1) * 2;

	cout << "Double array:\n";
	// call function
	printArray(doubVec, 20);

	cout << "Iterator print of the vectors:\n";
	// provide call to the type iterator func
	printIterator(vec);
	printIterator(doubVec);
}