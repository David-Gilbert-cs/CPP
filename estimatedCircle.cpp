/*

author : david gilbert

problem :https://open.kattis.com/problems/circle
*/


#include <iostream>

using namespace std;

int main()
{
    double r ;
    double m ;
    double c ;
    const double pi  = 3.14159265358979 ;
    
    
    
    // while the input isnt " 0 0 0 " 
    while (cin >> r && r !=0 && cin >> m && m !=0 && cin >> c && c !=0  )
    {
        
        cout << r*r*pi <<" " ; 
        cout << 4*r*r*(c/m) <<endl ;
    }
    


    return 0;
}
