/*

author:david gilbert
problem : https://open.kattis.com/problems/character


*/

// count the number of subset of any size for a given n

#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >>n;
    int count = 0 ;
    
    count = (1 << n) - n - 1; // 1<<n == 2^n
    
    
    cout << count ;
    
    return 0;
}
