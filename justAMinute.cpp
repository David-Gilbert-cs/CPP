/*

author : david gilbert
problem :https://open.kattis.com/problems/justaminute

*/

#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
    int n;
    double m;
    double s;
    double sumS = 0;
    double sumM = 0;
    cin >> n ;
    
    for(int i =0 ; i<n ; i++)
    {
        cin >> m ;
        cin >> s ; 
        
        sumS += s ;
        sumM += m ; 
        
    }
    
    double sl = sumS/60/sumM ;
    
    if(sl <= 1.0)
    {
        cout << "measurement error";
    }
    else
    {
        cout << setprecision(9) << sl ; 
    }
    
    return 0;
}
