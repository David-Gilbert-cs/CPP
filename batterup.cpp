/*

author : david gilbert
problem : https://open.kattis.com/problems/batterup

*/

#include <iostream>

using namespace std;

int main()
{
    
    int n;
    float hit;
    float counter =0;
    float sum =0 ;
    cin >> n ; 
    

    
    for(int i =0 ; i<n ;i++)
    {
        
        cin >> hit;
        
        if(hit == -1)
        {
            //nothing
        }
        else
        {
            sum += hit ; 
            counter ++;
        }
    }
    
    cout << sum/counter << endl;
    



    return 0;
}
