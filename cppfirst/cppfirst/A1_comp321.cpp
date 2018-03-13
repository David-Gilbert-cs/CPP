#include <iostream>
#include <cstdlib>
#include <cstdio>
#include<ctime>
#include <string>

const int rows = 5;
const int cols = 5;

void fillMatrix(int matrix[rows][cols])
{
	int x = 5
		cout << "Hello World" << " I just went down a line with the following two characters\n";
	cout << x << " " << "Printed out variable x" << endl;


	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			srand(time(NULL));
			matrix[i][j] = rand() % 100;
			cout << matrix[i][j] << ' '<< endl;
		}
		cout <<'\n'; 
	}

}



int main()
{
	int matrix[rows][cols];
	fillMatrix(matrix);

}