/*

author : david gilbert
problem :https://open.kattis.com/problems/r2


*/

// #include <cmath> for math function like pow
#include <iostream>

using namespace std;

int pow(int, int);



int main()
{
    int n ; // length of sum
    int rawNumber ;
    int value;
    int power ;

    int sum =0 ;
    
    cin >> n ; 
    
    for(int i =0 ; i < n ; i++)
    {
        
        cin >> rawNumber ; 

        value = rawNumber/10 ; 
        power = rawNumber%10 ;
        
        sum += pow(value,power); 
    }
    
   cout<< sum;
    
    return 0;
}

int pow(int a,int b)
{
    int ans =1 ;
    
 
    for(int i =0 ; i < b ; i++)
    {
        ans *= a;
    }
    
    return ans ;
    
}