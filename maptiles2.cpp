/*

author : david gilbert 
problem : https://open.kattis.com/problems/maptiles2

*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string input ; 
    getline(cin, input);
    int length = input.length();
    int x =0;
    int y =0;
    int counter =0 ;
    
    cout << length << " " ; 
    
    for(char& c : input)
    {
        
        long long incr = pow(2,length-counter-1) ;
        
        if(c == '0')
        {
            // nothing
        }
        else if(c == '1') // +x
        {
            x += incr ;
        }
        else if(c == '2') // +y
        {
            y += incr;
        }
        else if(c == '3') // +xy
        {
            x += incr ;
            y += incr;
        }
        else
        {
            cerr << "wrong input" ;
        }
        
        counter++;
        
    }
    
    cout << x << " " << y << endl;
    
    return 0;
}
