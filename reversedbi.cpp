/*

author : david gilbert
problem : 

*/ 

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;


string toBinary(int x)
{
    
    string ans = "" ; 
    
    while (x > 0 ) 
    {
        if(x%2 == 1)
        {
            ans += "1" ; 
        }
        else if(x%2 == 0)
        {
            ans += "0" ;
        }
        else
        {
            cerr << "wrong input in toBinary"; 
        }
        
        x = x/2 ;
        
    }
    
    return ans;
    
}

/* wrong kind of reverse
string revBinary(string x)
{
    
    string ans = "";
    
    
    for(char& c : x)
    {
        
        if(c == '1')
        {
            ans += '0'; 
        }
        else if(c == '0')
        {
            ans += '1'; 
        }
        else
        {
            cerr << "wrong input in revBinary"; 
        }
    }
    
    return ans ; 
}
*/



int toBaseTen(string x)
{
    int ans = 0;
    int counter = x.length()-1 ;
    
    for(char& c : x )
    {
        if(c == '1')
        {
            ans += pow(2,counter); 
        }
        else if(c == '0')
        {
            //nothing
        }
        else
        {
            cerr << "wrong input in toBaseTen"; 
        }
        counter--; 
    }
    
    return ans;
}


int main()
{
    int x ; 
    
    cin >>x ; 
    string str = toBinary(x); // also reverse

    cout << toBaseTen(str)<< endl ;

    return 0;
}
