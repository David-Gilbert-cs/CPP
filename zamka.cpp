/*

author : david gilbert
problem : https://open.kattis.com/problems/zamka

*/

#include <iostream>

using namespace std;

int digitSum(int n)
{
    int sum =0 ;
    
    while( n > 0 )
    {
        sum += n%10 ;
        n=n/10;

    }

    return sum ;
}

int main()
{
    
   int l ;
   int d ;
   int x ;
   
   cin >> l ; 
   cin >> d ; 
   cin >> x ; 
   
   
   for(int i = l ; i<10001; i++) // brute force
   {
       
       if(digitSum(i) == x) 
       {
           cout << i << endl;
           break;
       }
       
   }
    
   for(int i =d ; i>0; i--) 
   {
       
        if(digitSum(i) == x) 
       {
           cout << i << endl;
           break;
       }
       
   }
    
   
    cout << endl;
    



    return 0;
}
