/*

author : david gilbert

alternate classy

*/

#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


// upper class will be 3 , middle 2 and lower 1
int
main ()
{
  int t;;
  cin >> t;
  int n;
  cin >> n;
  string input; // trash first input line
  getline (cin, input);

  for (int i = 0; i < t; i++)	// each test case
    {
      string classes[n];
      string names[n];

          for (int j = 0; j < n; j++)	// each person
    	{
    
    	  getline (cin, input);
    	  int gotName = 0;	// do we have all the char in the name
    	  int classReady = 0;	// can we read another class
    	  string name = "";
    	  string clas = "";
    	  char prevChr = ' ';
    	  classes[j] = "0";
    
    	for (char& c:input)
    	{
    	      if (c == ' ' && stoi(classes[j]) > 0)	// if we get a space after getting  class value (end of input for that person)
    		{
    		  break;
    		}
    	      if (c == ':')
    		{
    		  gotName++;
    		}
    	      // get the names
    	      if (gotName == 0)
    		{
    		  name += c;
    		}
    	      else if (c == 'u')	// upper class
    		{
    		  clas += '3';
    		}
    	      else if (c == 'm')	// middle class
    		{
    		  clas += '2';
    		}
    	      else if (c == 'o' && prevChr == 'l')	// lower class
    		{
    		  clas += '1';
    		}
    
    	      prevChr = c;
    
    	    }
    
    
    	  names[j] = name;
    	  classes[j] = clas;
    
    	}
    
        //find max length equilize the rest with zeros
    
        int maxLength =  (*max_element (classes, classes + sizeof(classes) / sizeof(classes[0]))).length();
        
        for(int j = 0; j < n; j++)
        {
            while(classes[j].length() < maxLength)
            {
                classes[j] += '0';
            }
        }
        
        for(int j = 0; j < n; j++)
        {
            int index = max_element(classes, classes + sizeof(classes) / sizeof(classes[0])) - classes; // returns position of max element
            
            cout << names[index] <<endl;
            names[index]='0';
            classes[index]='0';
        }
    
	cout << "==============================" << endl;
        
    }


  return 0;
}
