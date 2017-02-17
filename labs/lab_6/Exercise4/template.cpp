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
}