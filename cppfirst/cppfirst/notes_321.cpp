#include<iostream>
using namespace std;


//operator overloading
//every operatorcan be overloaded execpt for  {:: , . , ?: , .*}
//usefull for user defined type (struc/class)

class MyVector
{
public:

	MyVector();
	MyVector(int a, int b, int c) { x(a), y(b), z(c); }

	char* toString()
	{
		return (this->x + ", " + this->y + ", " + this->z);
	}

	MyVector operator+ (const MyVector& Vec)
	{
		MyVector result; 
		result.x = this.x + vec.x;
		result.x = this.y + vec.y;
		result.x = this.z + vec.z;

		return result;
		//you can now use v1 + v2 to add vectors
	}

private:
	int x, y, z;
};


//polymorphism, virtual method
class Aircraft
{

public:
	Aircraft() { cout << "default aircraft constructor" << endl; }
	Aircraft(int i)
	{
		capacity = i;
		cout << "param aircraft constructor" << endl;
	}
	//pure virtual(=0) class have no implementation, needs to be implemented by inherited class 
	virtual void pureVFly()=0; // by existing this class becomes abstract
	virtual ~Aricraft();
	virtual void fly() // virtual mean this method is being reimplemented by inhereted classes
	{
		cout << "aricraft flying" << endl;
	}
protected:
{
	int capacity;
}

}

class Boeing : public Aircraft
{
public:
	Boeing() { cout << "default boeing constructor" << endl; }
	Boeing(int i)
	{
		capacity = i;
		cout << "param boeing constructor" << endl;
	}
	~Boeing();
	void fly() { cout << boeing flying << endl; }
	void pureVFly
	{
		cout << "mandatory "
	}

}




//funciton declaration;
int factoRec(int n);
int factoNRec(int n);
void print(int x);
void print(string x);

// array is constant pointer (cannot be reassigned, or change its size)
//array vs pointer notation : *x = x[0] | *(x+1) = x[1] 
// *(x+1) increments the adresss

//automatic memory = stack ||| dynamic memory = heap

// malloc calloc and realloc replaced with }-- "new" key word
// new allocate 1 element , new[] can allocate many 
//delete and delete[] to free the space #nogabargecollector#Simon
//while deleting only delete new pointer, if you have two pointer point at the same place only delete the one that uses new keyword
void stdioTest()
{
	int i;
	cout << "Please enter an integer value: ";
	cin >> i;
	cout << "The value you entered is " << i;
	cout << " and its double is " << i * 2 << ".\n";
	return ;

}


/*
reference variables 
int &x = var; 
cannot be null/better performance/
when passing in method testlargebject(somelargeobject O) => creates another object
but ifyou use reference it wont (slo &O)

*/


	// functions

int factoRec(int n)
{
	if (n = 1) return n;
	else return (factoRec(n-1)*n);
}

int factoNRec(int n)
{
	int answer = 1;
	for (; n = 1; n--)
	{
		answer *= n;
	}
	return answer;
}

// c++ now with overloading :)

void print(int x)
{
	cout << x;
	return;
}
void print(string x)
{
	std::cout << &x <<"\n"; // printing string ??? 8*****
	return;
}

//variable in c++
// name,type,address, scope,life span

/*
local / global/ static/ dynamic
scope vs life time 

local : scope = life time
global : life time = life time of program , scope = everywhere in program
dinamic : life time :keep living until killed  ,SCOPE :same as local
static (initialized only once) : life time :keep living 
*/

/*
pointer:


*/

void ptrtest()
{
	int var;
	int* ptr = &var;// from here on out ptr=&var
	//value at piinter is *ptr = var
}

void Stupidptr()
{
	int a = 7, b = 9; 
	int* ptr1;
	int* ptr2 = &b;
	ptr1 = &a;

	std::cout << *ptr2;
	std::cout << *ptr1;
	ptr1++;//increment adress to next byte (or sizeof(ptr type))
	*ptr2++;//increment value ? 8***
	std::cout << *ptr2;
	std::cout << *ptr1;


}

void garbageFunction()
{
	//scanning
	int x;
	cin >> x; //for name space sake use std::cin 
	std::cout << x;


	int y = 13 % 3;
	bool b = x == y;
	//bitwise op : &,|,&,<<,>> operation on bits

	//flow control
	if (x > y)
	{
		b = false;
	}
	else
	{
		b = true;
	}
	//switch arent good , maybe faster 

	//those are the same
	int max = (x > y) ? x : y;

	if (y > x)
		x;
	else
		y;
	//loops : for , while , do-while (first execution without condition)
}


int main()
{
	//stdioTest();
	//Stupidptr();
	//garbageFunction();

	//plane test

	Aircraft* plane1;
	Aircraft* plane2;
	plane1 = new Boeing(3000);
	//plane2 = new aircraft(); wouldnt compile since aircraft is abstract
	plane1->fly() ;
	delete plane1


	cout << "this is source.cpp";

	return 0;
}
