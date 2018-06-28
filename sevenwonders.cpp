/*

author :  david gilbert
problem :https://open.kattis.com/problems/sevenwonders

*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string input;
    int t=0;
    int g=0;
    int c=0;
    
    getline(cin, input);
    
    for(char& ch : input)
    {
        
        if(ch == 'T')
        {
           t++; 
        }
        else if(ch=='G')
        {
            g++;
        }
        else if(ch == 'C')
        {
            c++;
        }
        else
        {
            cerr << "improper input";
        }
    
    }
    
    int set = 0 ;
    
    //find min value of tgc
    
    if(t <= g)
    {
        set = t;
    }
    else
    {
        set = g; 
    }
    if(c <= set)
    {
        set = c;   
    }
    
    
    cout << t*t +g*g+ c*c + 7*set ;

    return 0;
}
