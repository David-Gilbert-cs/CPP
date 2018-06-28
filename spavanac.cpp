/*

author :  david gilbert
problem :https://open.kattis.com/problems/spavanac

*/

#include <iostream>

using namespace std;

int main()
{
    
    int h ;
    int m ;

    cin >> h ;
    cin >> m ;
    
    
    if(m >= 45)
    {
        cout << h <<" "<< m-45;
    }
    else if(h > 0)
    {
        cout << h-1 << " "<< 60 + (m-45);
    }
    else
    {
        cout << 23 << " "<< 60 + (m-45);
    }

    return 0;
}
