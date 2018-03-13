/*
name:david gilbert
id: 260748860

Q.11: not clear if im suppose to answer this, i made max/min private attribute and update them when needed
instead of finding it every time its asked.

Q.12: for classes which haven pointers for attribute the default copy constructor will not necessarly 
copy whatever the pointer points to (shallow copy).
for a linked list to have what they point at is mandadory for it to make sense of a copy
we want to have a deep copy.


note : I think (bubble) sort might contain very occasional bug probably size related, but i might also have fixed it 
	it too late to test properly and figure it out.

*/

#include <cstdlib>
#include <iostream>

using namespace std;

class Node {

public:

	int data;

public:

	Node * next;

	Node* previous;

	Node() : data(0) {};
	Node(int pdata, Node*pprevious, Node* pnext):data(pdata),previous(pprevious), next(pnext) {};
	~Node();

};

Node::~Node() { }

class DLLStructure {

public:

	DLLStructure(); // default constructor

	DLLStructure(int array[], int size)
	{
		Node* currentNode = new Node(array[0],NULL,NULL);
		this->head = currentNode;  // initialize ddl
		this->tail = currentNode;
		currentNode->previous = currentNode;
		this->size = size;
		int min = array[0];
		int max = array[0];

		for (int i = 1; i < size; i++)
		{
			currentNode ->next = new Node(array[i],currentNode,NULL);
			
			if (min > currentNode->data)//finds min and max
			{
				min = currentNode->data;
			}
			else if (max < currentNode->data)
			{
				max = currentNode->data;
			}

			if (i == size - 1)
			{
				this->tail = currentNode->next; // if last node make it the tail
			}
			else
			{
				currentNode = currentNode->next; // iterate trough 
			}
		}

		this->min = min;
		this->max = max;

	}

	void PrintDLL();
	void InsertAfter(int valueToInsertAfter, int valueToBeInserted);
	void InsertBefore(int valueToInsertBefore, int valueToBeInserted);
	void Delete(int value);
	void Sort();
	bool IsEmpty();
	int getSize()
	{
		return this->size;
	}
	int getHead()
	{
		return this->head->data; 
	}
	int getTail()
	{
		return this->tail->data;
	} 
	int getMax()
	{
		if (this->max != NULL)
		{
			return this->max;
		}
		else
		{
			
			Node* current = this->head;
			int max= current ->data;
			while (current->next !=NULL) //find max
			{
				if (current->data > max)
				{
					max = current->data;
					continue;
				}

				current = current->next; 
			}
			this->max = max; 
			return this->max;
		}
	}
	int getMin()
	{
		if (this->max != NULL)
		{
			return this->min;
		}
		else
		{
			Node* current = this->head;
			int min = current->data;
			while (current->next != NULL) //find max
			{
				if (current->data < min )
				{
					min = current->data;
					continue;
				}

				current = current->next;
			}
			this->min = min;
			return this->min;
		}
	}
	DLLStructure(DLLStructure& dlls);
	
	~DLLStructure(); // default destructor

private:

	Node * head;

	Node* tail;

	int size;
	int max;
	int min;
};

DLLStructure::DLLStructure() 
{

	this->head = NULL;

	this->tail = NULL;

	this->size = 0;

	this->min = NULL;
	this->max = NULL;

}
DLLStructure::~DLLStructure() 
{

	while (this->head) 
	{

		Node* next = this->head->next;

		delete this->head;

		this->size = this->size - 1;

		this->head = next;

	}

}

void DLLStructure::PrintDLL() 
{
	Node* current = this->head;
	
	while (true) 
	{

		cout << current->data;

		current = current->next;

		if (current->next == NULL)
		{
			cout << endl;
			break;
		}
		else
		{
			cout << ", ";
		}
	}

	return;
}

void DLLStructure::InsertBefore(int valueToInsertBefore, int valueToBeInserted)
{
	Node* current = this->head;

	while (current->next != NULL)
	{

		if (current->data == valueToInsertBefore) // if true start insertion
		{
			Node* n = current; // future next of added node
			Node* p = current->previous; // future previous of added node


			Node* toInsert = new Node(valueToBeInserted, p, n); // create node in between

			this->size = this->size + 1;

			if (valueToBeInserted > this->max)
			{
				this->max = valueToBeInserted;
			}
			if (valueToBeInserted < this->min)
			{
				this->min = valueToBeInserted;
			}

			n->previous = toInsert; // actualy link the new node to the list
			p->next = toInsert;
			break; // get ride of break; to allow add value after all instance of valuetoinsertafter
		}
		else
		{
			current = current->next; // go to next one
		}

	}
	return;
}

void DLLStructure::InsertAfter(int valueToInsertAfter, int valueToBeInserted)
{

	Node* current = this->head;

	while (current->next != NULL )
	{

		if (current->data == valueToInsertAfter) // if true start insertion
		{
			Node* n = current->next; // future next of added node
			Node* p = current; // future previous of added node
			

			Node* toInsert = new Node(valueToBeInserted,p,n); // create node in between
			this->size = this->size + 1;

			if (valueToBeInserted > this->max)
			{
				this->max = valueToBeInserted;
			}
			if (valueToBeInserted < this->min)
			{
				this->min = valueToBeInserted;
			}

			n->previous = toInsert; // actualy link the new node to the list
			p->next = toInsert; 
			break; // get ride of break; to allow add value after all instance of valuetoinsertafter
		}
		else
		{
			current = current->next; // go to next one
		}

	}
	return;
}

void DLLStructure::Delete(int value)
{
	Node* current = this->head;
	while (current->next != NULL)
	{
		if (current->data == value) // if true start insertion
		{
			Node* n = current->next; // future next of added node
			Node* p = current->previous; // future previous of added node

			
			if (current == head) // if deleting head
			{
				current->next->previous = n;
				this->head = current->next; // after deleting head adding new one
				//current->next->next = n->next; //useless
			}
			else if (current == tail) // if deleting tail
			{
				current->previous->next = NULL;
				this->tail = current->previous;
			}
			else //else
			{
				current->next->previous = p;
				current->previous->next = n;
			}
			
			if (current->data == this->max)
			{
				this->max = NULL;
			}
			if (current->data == this->min)
			{
				this->min = NULL;
			}

			delete current;
			this->size = this->size - 1; // reduce length by one
			break; // get ride of break; to allow add value after all instance of valuetoinsertafter
		}
		else
		{
			current = current->next; // go to next one
		}
	}
	return;
}

bool DLLStructure::IsEmpty()
{
	if (this->size == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void DLLStructure::Sort() 
{
	int size = this->size;


	Node* current = this->head; 
	for (int i =0 ; i<size-1;i++) // iterate trough the entire list (size-1) time
	{

		for (int j = 0; j<size-2; j++)// partial sort 2 node at the time
		{
			if (current->data > current->next->data)
			{
				InsertAfter(current->next->data,current->data);
				current = current->next;
				Delete(current->previous->data);
				continue;
			}

			//PrintDLL(); for debugging
			current = current->next;
		}
		current = this->head;
	}

}

DLLStructure::DLLStructure(DLLStructure& dlls)
{
	Node* ccurrent = dlls.head;
	Node* currentNode = new Node(ccurrent->data, NULL, NULL);
	this->head = currentNode;  // initialize ddl
	this->tail = currentNode;
	currentNode->previous = currentNode;
	int size = dlls.getSize();
	int min = ccurrent->data;
	int max = ccurrent->data;

	for (int i = 1; i < size; i++)
	{
		currentNode->next = new Node(ccurrent->next->data, currentNode, NULL);

		if (min > currentNode->data)//finds min and max
		{
			min = currentNode->data;
		}
		else if (max < currentNode->data)
		{
			max = currentNode->data;
		}

		if (i == size - 1)
		{
			this->tail = currentNode->next; // if last node make it the tail
		}
		else
		{
			currentNode = currentNode->next; // iterate trough 
			ccurrent = ccurrent->next;
		}
	}

	this->min = min;
	this->max = max;


}

int main()
{

	
	int array[5] = { 11, 2, 7, 22, 4 };
	DLLStructure dll(array, 5); // note that 5 is the size of the array
	
	dll.PrintDLL();
	
	dll.InsertAfter(7, 13); // To insert 13 after the first occurence of 7
	dll.PrintDLL(); // the output should be: 11, 2, 7, 13, 22, 4
	
	dll.InsertBefore(7, 26); // To insert 26 before the first occurence of 7
	dll.PrintDLL(); // the output should be: 11, 2, 26, 7, 13, 22, 4
	
	dll.Delete(22);
	dll.PrintDLL(); // the output should be: 11, 2, 26, 7, 13, 4
	dll.Sort();
	dll.PrintDLL(); // the output should be: 2, 4, 7, 11, 22
	cout << dll.getMax() << endl;
	cout << dll.getMin() << endl;

	
	DLLStructure dll1(array, 5); // note that 5 is the size of the array
	dll1.PrintDLL(); // the output should be: 11, 2, 7, 22, 4
	DLLStructure dll2(dll1);
	dll2.PrintDLL(); // the output should be: 11, 2, 7, 22, 4

	return 0;
}

