/*

author : david gilbert
problem :https://open.kattis.com/problems/almostperfect

*/

#include <iostream>
#include <cmath>


using namespace std;



int divisorSum(int n) 
{

    int sum = 0;
 

    for (int i=2; i<=sqrt(n); i++)
    {

        if (n%i==0)
        {

            if (i==(n/i))
                sum += i;
            else
                sum += (i + n/i); 
                // adds both divisor found ex : n=12 i=2 => (2,6)
        }
    }
 
  
    return (sum + 1);
}

int main()
{
   
    int p; 
    int sum;
    
    while ( cin >> p) 
    {
        

        sum = divisorSum(p);
        
        if(sum == p)
        {
            cout << p << " perfect"<<endl;
        }
        else if( sum <= p+2 && sum >= p-2)
        {
            cout << p << " almost perfect"<<endl;
        }
        else
        {
            cout << p << " not perfect"<<endl;
        }
    }
   

    return 0;
}


