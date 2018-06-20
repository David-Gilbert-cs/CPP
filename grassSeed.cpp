/*

author: david gilbert
problem :https://open.kattis.com/problems/grassseed

*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float price ;
    int lawnNum ;
    float area = 0 ;
    float totalCost ;
    
    cin >> price ; 
    cin >> lawnNum ;
    

    for(int i =0; i<lawnNum ; i++)
    {
    
        float x;
        float y;
        cin >> x;
        cin >> y; 
        
        area += x*y ;
    
    }
    
    totalCost = area * price ;
    
    cout << fixed << setprecision(7) << totalCost ; // 7 decimals ***
    
    return 0;
}