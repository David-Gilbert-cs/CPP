#include <iostream>
#include <cstdlib>
#include <cstdio>
#include<ctime>
#include <string>
using namespace std;




void test()
{
	cout << "13 % 3 == 1: \n";
	cout << (13 % 3 == 1)<< '\n';
}


int vowelCounter(string text)
{
	int count = 0;
	for (int i = 0; text[i] != NULL;i++)
	{
		char vowels[6] = { 'a','e','i','o','u','y' };

		for (int k = 0; k < 6; k++) 
		{
			if (text[i] == vowels[k])
			{
				count++;
				cout << (text[i]) << '\n';
			}
		}
	}
	cout << "there was " << count << "vowels\n";
	return count;
}

int main()
{
	test();

	//char text[50];
	//string text;
	//getline(cin, text);
	//vowelCounter(text);


	int x = 5;
	cout << "&x adress is " << &x << "| x  value is " << x<<"\n";

	int* ptr = &x;
	cout << ptr << "<=ptr | *ptr=>" <<*ptr;


	char close = 'a';
	cout << "\n press enter to close terminal \n";
	cin >> close; // keeps the terminal open until prompted to close
}


