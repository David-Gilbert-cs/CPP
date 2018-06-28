/*

author :  david gilbert
problem :https://open.kattis.com/problems/sibice

*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n ;
    float x ;
    float y ;
    
    cin >> n ; 
    cin >> x ; 
    cin >> y ; 
    
    float size = sqrt( x*x + y*y );
    
    for(int i =0 ; i < n ; i++ )
    {
        
        float length;
        cin >> length; 
        if(length <= size )
        {
            // fits
            cout << "DA"<< endl; 
        }
        else
        {
            cout << "NE"<< endl;
        }
        
        
    }
    
    

    return 0;
}
