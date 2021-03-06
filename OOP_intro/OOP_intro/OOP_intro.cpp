// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

//classes in c++
#include "stdafx.h";
#include <iostream>;

/*
struct Person2  // ussually use when every data is public and there are no method
{
	int age;
	char sex;
};*/

class Person
{
public:
	//Person(int pAge, char pSex); // declare constructor
	//Person():aAge(0), aSex('u') // automatic initialization , more efficient 
	//{}
	~Person() // object gets destroyed as soon as the object gets out of scope
	{

		delete[] this;
	}
	bool uslessMethod(); // this declares a function to be implemented later in the file
	bool canVote()
	{
		if (aAge >= 18)
			return true;
		return false;
	}
	void setAge(int pAge)
	{
		this->aAge = pAge;
	}
	void setSex(char pSex)
	{
		this->aSex = pSex;
	}
private: // makes the field private (no inherited) , acces is then restricted ex : cant use mike.sex // protected class and inherited only // friends can use function ***
	int aAge;
	char aSex;
};
//implementing constructor
/*
Person::Person(int pAge, char pSex)
{
	this->aSex = pSex;
	this->aAge = pAge;
}
*/
bool Person::uslessMethod()
{
	std::cout << " you called a useless function using" << this;
	return false;
}


int main()
{
	Person Mike;
	Mike.setAge(24);
	Mike.setSex('m');

	if (Mike.canVote())
	{
		std::cout << "Mike can vote";
	}
	else
	{
		std::cout << "mike can't vote";
	}
	return 0;
}

