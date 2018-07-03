/*

author : david gilbert
problem : https://open.kattis.com/problems/onechicken

*/ 

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;


int main()
{
    int n;
    int m;
    
    cin >> n; 
    cin >> m;
    
    if(n > m )
    {
        cout << "Dr. Chaz needs "<<n-m<<" more pieces of chicken!" ;
    }
    else if (n <= m)
    {
        cout << "Dr. Chaz will have " << m-n  <<" pieces of chicken left over!";
    }
 

    return 0;
}
