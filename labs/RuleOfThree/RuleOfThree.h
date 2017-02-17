#ifndef RULEOFTHREE_H_INCLUDED
#define RULEOFTHREE_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class GCharacter
{
	friend ostream& operator << (ostream& os, const GCharacter &gc);

	public:

		static const int DEFAULT_CAPACITY = 5;

		// ctor
		GCharacter(string name = "John", int capacity = DEFAULT_CAPACITY);

		// copy ctor
		// the param is the reference to the GCharacter obj we wish to copy from
		GCharacter(const GCharacter &source);

		// overloaded assignment
		GCharacter& operator = (const GCharacter &source);

		// dtor
		~GCharacter();

		// insert a new tool into tool holder
		void insert(const string &toolName);

	private:

		// data members
		string name;
		int capacity;
		int used;
		string *toolHolder;
};


#endif //RULEOFTHREE_H_INCLUDED
