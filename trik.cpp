/*

author :  david gilbert
problem :https://open.kattis.com/problems/trik

*/

#include <iostream>

using namespace std;

int main()
{
    
    string input ; 
    int current = 1 ; 
    getline(cin , input);
    
    for(char& c : input)
    {
        if(c == 'A')
        {
            
            if(current == 1)
            {
                current = 2 ;
            }
            else if(current == 2)
            {
                current =1;
            }
            //else nothing
            
        }
        else if(c == 'B')
        {
            if(current == 3)
            {
                current = 2 ;
            }
            else if(current == 2)
            {
                current =3;
            }
            //else nothing
        }
        else if(c=='C')
        {
            if(current == 1)
            {
                current = 3 ;
            }
            else if(current == 3)
            {
                current =1;
            }
            //else nothing
        }
        else
        {
            cerr << "improper input";
        }
        
    }
    
    cout << current ;

    return 0;
}
