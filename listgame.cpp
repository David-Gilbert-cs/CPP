/*

author : david gilbert

problem :https://open.kattis.com/problems/listgame
*/


#include <iostream>
#include <cmath> 

using namespace std;

int main()
{
    int n ;
    cin >> n ; 
    int size = 0 ;
    // find size of prime factorization of n
    int y =n;
    int m=2;
    
    while(n>=m*m && y>1)
    {
        while(y%m==0)
        {
            y=y/m;
            size++;
        }
        m++;
    }
    
    if( y >1 )
    {
        size++;
    }
    
    cout << size ;

    return 0;
}



/*


if(n ==1 )
    {
        cout << 1 ;
    }
    else
    {
        while (n%2 ==0)
        {
            size ++;
            n = n/2; 
            
        }
        
        for(int i = 3 ; i < sqrt(n) ; i +=2)
        {
            if(n % i == 0)
            {
                size ++;
                n = n/i;
               
            }
            
            
        }
        
        if(n > 1)
        {
            size ++ ;
        }
        
        cout << size ;
    }
    
    */