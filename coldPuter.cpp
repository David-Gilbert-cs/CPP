/*

author : david gilbert
problem :https://open.kattis.com/problems/cold 

*/

#include <iostream>

using namespace std;

int main()
{
    
    int n;
    int t; 
    int counter =0 ; 
    
    cin >> n ;
    
    for(int i =0 ; i<n ; i++)
    {
    cin >> t ;
    
        if(t < 0 )
        {
            counter++;    
        }
        
    }
    
    cout<< counter ; 

    return 0;
}
