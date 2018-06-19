/*

author : david gilbert
problem :https://open.kattis.com/problems/r2


*/

#include <iostream>

using namespace std;

int main()
{
    int x ; 
    int y ;
    
    cin >> x ; 
    cin >> y ;

    if(x > 0 ) // 1 or 4
    {
        if(y>0) // 1 or 2
        {
            cout << 1;
        }
        else
        {
            cout << 4;
        }
    }
    else // 2 or 3
    {
        if(y>0)  // 1 or 2
        {
            cout << 2 ;
        }
        else
        {
            cout<< 3;
        }
    }
    
    
    return 0;
}
