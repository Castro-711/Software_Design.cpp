#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::vector <std::string> names;

	names.push_back("Eric");
	names.push_back("Funknebula");

	for(int i = 0; i < names.size(); i++)
		std::cout << names[i] << "\n";


	std::cin.get();
	return 0;


}