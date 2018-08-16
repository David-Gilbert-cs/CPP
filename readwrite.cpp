/*

author :david gilbert
read file by char / line / word

*/

#include <iostream>
#include <fstream>

using namespace std;

int main() 
{

    cout << "enter the file name";
    string fileName ; 
    cin >> fileName ;
    
    ifstream fin; // file in 
    fin.open(fileName, ios::in);
    
    if(!fin) 
    {
    cout << "Cannot open input file.\n";
    return 1;
    }
    
    char c ;
    
    //reads every char in c
	while (!fin.eof() ) 
	{
        
    	fin.get(c); 
        
		
	}


    //reads every line in string
    /*
    string str;
    while (getline(fin, str)) 
    {

    

    }
    
    /*
    
    string word;
    while (fin >> word)
    {
    //manipulate word
    }
    
    */

}