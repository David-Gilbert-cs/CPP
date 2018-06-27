/*

author : david gilbert
problem : https://open.kattis.com/problems/tarifa


*/

#include <iostream>

using namespace std;

int main()
{
    int total = 0 ; 
    int n ;
    int x ;
    cin >> x;
    cin >> n;
    for(int i = 0 ; i<n ; i++)
    {
        int used ;
        
        cin >> used ;
        
        total +=  used;
    }

    cout << (n+1)*x - total;
    
    return 0;
}
