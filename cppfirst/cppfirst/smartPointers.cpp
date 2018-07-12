/*
Q1: C++ has 3 types of smart pointer 
	1_ auto_ptr : is a pointer that automatically destroy allocated memory when out of bound
				  copying it will empty its content and move it to a new pointer
	2_ unique_ptr : cannot be copied, can only change the ownership (explicit)
	3_ shared_ptr : can have many pointerpointing to the same object and the object is destroyed only when 
				    every pointer pointing to it is destroyed. it can also count reference
	4_ weak_ptr : are copies of a shared_ptr but unlike shared_ptr their creation or destruction will not	
				  affect , if all shared_ptr related to the weak one are destroyed then the weak one will become empty
*/




#include <cstdlib>
#include<iostream>
using namespace std;

template <class T>
class SmartPointer
{
	T* ptr = new T();
	int size = 0;
public:

	SmartPointer() 
	{
		try
		{
		*ptr = 0 ; 
		}
		catch (bad_alloc ex) { cerr << "out of memory error message"; }

	}
	SmartPointer(T v)
	{
		try
		{
			if (v < 0) throw  std::invalid_argument("negative_value");
			*ptr = v; 
		}
		catch (bad_alloc ex) { cerr << "out of memory error message"; }
		catch (const std::invalid_argument& e) { cerr << "negative value was passed, only positives are accepted \n"; }

	}

	// Destructor
	~SmartPointer()
	{ 
		cout << "destructor called \n";
		if (size == 0)
		{
			delete this->ptr;
		}
		else
		{
			//delete this->ptr; problem with array destructor
		}
	}

	// Overloading dereferencing operator
	T &operator *() { return *ptr; }

	friend  SmartPointer<T> operator+( SmartPointer<T>& first, SmartPointer<T>& Second) //->SmartPointer<T>
	{
		T sum = (T)(first.getValue() + Second.getValue()) ;
		return SmartPointer(sum);
		//return new SmartPointer<T>(first.getValue() + Second.getValue());
	}


	T getValue()
	{
		return *ptr;
	}

	void setValue(T arr[], int pSize)
	{
		this->size = pSize;
		for (int i = 0;i<pSize;i++)
		{
			ptr[i] = arr[i];
		}
	}
	void setValue(T v)
	{
		try
		{
			if (v < 0) throw  std::invalid_argument("negative_value");
			
			*ptr = v;
		}
		catch (bad_alloc e) { cerr << "out of memory error message" << e.what()<<"\n"; }
		catch (const std::invalid_argument& e) { cerr << "negative value was passed, only positives are accepted \n"; }
	}
	void print(T arr[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			cout << *(ptr+i);
		}

	}
	void print(T ptr)
	{
		cout << *ptr;
	}

};

int main()
{
	//Q.2 ... the smart pointer definition for int only is commented at the end 
	if (true)
	{
		cout << "Q2 \n";
		SmartPointer<int> sPointer(11);
		cout << sPointer.getValue() << "\n";

		SmartPointer<int> sPointer2;
		sPointer2.setValue(133);
		cout << sPointer2.getValue() << "\n";
		//Q.3

		cout << "Q3 negative test \n";
		cout << "setvalue test :";
		sPointer2.setValue(-133);
		cout << "constructor test :";
		SmartPointer<int> sPointer3(-11);
		cout << "test out of bound automatic destructor \n";
	}
	//Q.4
	cout << "Q4 <T> ptr : \n";

	SmartPointer<float> sPointer4;
	sPointer4.setValue(13.31);
	cout << sPointer4.getValue()<< endl;

	//Q5.
	cout << "Q5 operator overload  : \n";
	SmartPointer<float> sPointer_1;
	sPointer_1.setValue(1.5);
	SmartPointer<float> sPointer_2;
	sPointer_2.setValue(2.5);
	SmartPointer<float> sPointer_3 = sPointer_1 + sPointer_2;
	cout << sPointer_3.getValue() << endl; // prints 4

	
	//Q6
	if (true)
	{
		cout << "Q6 array: \n";

		SmartPointer<int> sPointer_array;
		int arr[3] = { 1, 2, 3 };
		sPointer_array.setValue(arr, 3);
		sPointer_array.print(arr, 3);
		cout << "start  array destruction ";
	}
	cout << " end destruction \n";
	//end
	cout << "\npress anything and enter to exit \n";
	int done; 
	cin >> done;
	return 0;

}





//**************************************************************************//

//**************************************************************************//
//**************************************************************************//

//**************************************************************************//




/* int only smart pointer

class SmartPointer
{
	int* ptr = new int();
public:

	SmartPointer()
	{
		try
		{
			*ptr = 0;
		}
		catch (bad_alloc ex) { cerr << "out of memory error message"; }

	}
	SmartPointer(int v)
	{
		try
		{
			if (v < 0) throw  std::invalid_argument("negative_value");
			*ptr = v;
		}
		catch (bad_alloc ex) { cerr << "out of memory error message"; }
		catch (const std::invalid_argument& e) { cerr << "negative value was passed, only positives are accepted \n"; }

	}

	// Destructor
	~SmartPointer() { delete(ptr); }

	// Overloading dereferencing operator
	int &operator *() { return *ptr; }

	int getValue()
	{
		return *ptr;
	}
	void setValue(int v)
	{
		try
		{
			if (v < 0) throw  std::invalid_argument("negative_value");

			*ptr = v;
		}
		catch (bad_alloc e) { cerr << "out of memory error message" << e.what() << "\n"; }
		catch (const std::invalid_argument& e) { cerr << "negative value was passed, only positives are accepted \n"; }
	}

};

*/