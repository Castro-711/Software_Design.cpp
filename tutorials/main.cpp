#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

template <typename Iterator>
void printItems(Iterator start, Iterator stop, bool printIndex = false)
{
	int index = 1;

	for(Iterator i = start; i != stop; ++i)
	{
		if(printIndex == true)
			std::cout << index << ": ";

		std::cout << *i << " " << "\n";
		++index;
	}
}

bool readData(string text, vector<string> &v)
{
	std::fstream file;
	file.open(text, std::ios::in);

	if(!file.is_open())
	{
		std::cerr << "Error opening file.\n";
		return false;
	}

	while(!file.eof())
	{
		std::string s;
		std::getline(file, s);
		v.push_back(s);
	}

	file.close();

	return true;
}

int main()
{
	std::vector<std::string> vec;

	if(readData("~/CS264/labs/lab_1/exercise1.cpp", vec))
	{
		printItems(vec.begin(), vec.end(), true);
	}

	// before c++ 11
	// vector<string>::iterator i = vec.begin();

}