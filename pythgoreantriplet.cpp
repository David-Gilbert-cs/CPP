/*

author : david gilbert

problem : Pythagorean triplet
          Find all Pythagorean triple up to input value

*/

#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    int value ; 
    cin >> value ; 
    value = pow(value,2);
    int counter = 0 ;
    
    const clock_t begin_time = clock();
       
    for(int i = 1 ; i < sqrt(value); i++)
    {
        
        for(int j = i+1 ; j < sqrt(value); j++)
        {
        
    
            for(int k = j+1 ; k < sqrt(value); k++)
            {
        
                if(pow(i,2)+pow(j,2) == pow(k,2))
                {
                    cout << i<< " " <<j<< " " <<k << endl ; 
                    counter ++;
                }
        
        
            }
        
        }
        
        
    }
    
    cout << "time taken to compute : " << float( clock () - begin_time ) /  CLOCKS_PER_SEC << " seconds" << endl;
    
    cout << "counter = " <<counter ; 

    return 0;
}
