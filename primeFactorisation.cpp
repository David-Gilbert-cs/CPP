/*

author : David Gilbert
problem : prime factorisation 


*/

#include <iostream>
#include <vector>
#include <cmath> 


using namespace std;

vector<long> primeFacto(long n)
{
    long limit = n ;
    vector<long> factorList ;
    
    for(int i = 2 ; i <= sqrt(limit) ; i++)
    {
        
        if(n == 1)
        {
            return factorList ; 
        }
        else if ( n % i == 0 )
        {
            factorList.push_back(i);
            n /= i;
        }
        else
        {
            //nothing
        }
        
        
    }
    
    return factorList ; 
}


int main()
{
    
    int n;
    cin >> n ; 
    
    vector<long> factorList = primeFacto(n);
    
    for (auto i: factorList)
    {
        cout << i << ' ';
    }
    
    
    return 0;
}
