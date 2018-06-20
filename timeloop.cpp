/*

author: david gilbert
problem : https://open.kattis.com/problems/timeloop

*/
#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n ; 

    for(int i =0; i<n ; i++)
    {
        cout << i+1 ; 
        cout << " Abracadabra"<< endl;
    }

    return 0;
}
