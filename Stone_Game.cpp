/*

author : david gilbert
problem : https://open.kattis.com/problems/twostones


*/

#include <iostream>

using namespace std;

int main()
{
    int n ;
    
    cin >> n ; 
    
    if(n%2) // if uneven
    {
        cout<<"Alice";
    }
    else
    {
           cout<<"Bob";
    }
    
    return 0;
}
