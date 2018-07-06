/*

author : david gilbert
problem :https://open.kattis.com/problems/akcija

*/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    
    int n;
    int c;
    int price = 0 ;
    int counter =0 ;
    
    cin >> n ;
    int books[n] ;
    
    for(int i =0 ; i < n ; i++)
    {
        
        cin >> books[i] ;
        
    }
    
    sort(books, books + n);
    
    for(int i =0 ; i < n ; i++)
    {
        if(counter != 2)
        {
            price += books[n-i-1];
            counter++;
        }
        else
        {
            counter = 0;
        }
        
        
    }
    
    cout << price ;
    
    return 0;
}
