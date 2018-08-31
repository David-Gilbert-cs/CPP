/*

author : david gilbert

problem : Pythagorean triplet alt
          prints triplet (a,b,c) which respect a^2+b^2+c^2 = input int


*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int value ; 
    cin >> value ; 
    
    
    for(int i = 1 ; i < sqrt(value); i++)
    {
        
        for(int j = i+1 ; j < sqrt(value); j++)
        {
        
    
            for(int k = j+1 ; k < sqrt(value); k++)
            {
        
                if(pow(i,2)+pow(j,2)+pow(k,2) == value)
                {
                    cout << i<< " " <<j<< " " <<k << endl ; 
                }
        
        
            }
        
        }
        
        
    }
    
    

    return 0;
}
