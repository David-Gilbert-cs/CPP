/*

author :  david gilbert
problem :https://open.kattis.com/problems/speedlimit

*/

#include <iostream>

using namespace std;

int main()
{
    
    int n = 0 ;
    cin >> n ; 
    while(n != -1)
    {
        int s;
        int prevt=0;
        int t;
        int sum =0 ;
        
        for(int i =0 ;i < n ; i++)
        {
        
        cin >> s;
        cin >> t;
        
        sum += s*(t - prevt);
        
        prevt = t ;
        
        }
        
        cout << sum<< " miles"<<endl;
        
        cin >> n ; 
    }

    return 0;
}
