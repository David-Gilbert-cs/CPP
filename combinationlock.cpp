/*

author : david gilbert
problem : https://open.kattis.com/problems/combinationlock

*/

#include <iostream>

using namespace std;

//each number has 9 degree difference
int main()
{
    
    //get input 
    
    int init;
    int first;
    int second;
    int third;
    
    cin >> init; 
    cin >> first; 
    cin >> second; 
    cin >> third; 
    
    int count = 0 ; 
    
    // turn the dial clockwise 2 full turns
    
    count += 40*2;
    
    // stop at the first number of the combination
    
    if(first > init)
    {
        count += 40 + ( init - first )  ; 
       
    }
    else
    {
        count += init - first ; 
    }
    
    // turn the dial counter-clockwise 1 full turn
    
    count += 40 ;
    
    // continue turning counter-clockwise until the 2nd number is reached
    
    if(second > first)
    {
        count += second - first; 
    }
    else
    {
        count +=  second - first + 40; 
    }
    
    //turn the dial clockwise again until the 3rd number is reached
    
    if(second > third)
    {
        count += second - third  ; 
       
    }
    else
    {
        count += second - third + 40 ; 
    }
    
    //pull the shanck
    //count += 0 ;
    
    //transform into degrees
    
    count *= 9 ; 
    
    cout << count << endl ;

    return 0;
}
