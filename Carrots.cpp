/*

author : david gilbert
problem :https://open.kattis.com/problems/carrots


*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n ; 
    int ans ;
    string temp;
    
    cin >> n;
    cin >> ans;
    
    
    for(int i=0 ; i<n; i++) //read the "useless" input
    {
        cin >> temp;
    }

    cout<<ans;
    
    return 0;
}
