/*

author : david gilbert
problem : https://open.kattis.com/problems/tarifa


*/

#include <iostream>

using namespace std;

int main()
{
    int x ; 
    int y ;
    int n ;
    cin >> x;
    cin >> y;
    cin >> n;
    for(int i= 1 ; i < n+1 ; i++)
    {
        
        if(i % x != 0 && i % y!= 0)
        {
            cout << i;
        }
        else
        {
            if( i % x ) // if > 0 nothing
            {
            
            }
            else
            {
                cout << "Fizz";    
            }
            if( i % y )
            {
                
            }
            else
            {
                cout << "Buzz";    
            }
        }
        cout << endl ; 
        
    }
    
    
    
    return 0;
}
