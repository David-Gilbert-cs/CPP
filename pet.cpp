
/*

author : david gilbert
problems : https://open.kattis.com/problems/pet

*/

#include <iostream>


using namespace std;

int main() 
{

  int max = 0 ;
  int winner = 0;
  int participant = 0;
  
  for (int i = 0; i < 5; i++)
  { 
    participant ++;   // next participnt
    
    int sum =0;
    
    for (int i = 0; i < 4; i++)
    {
        
    int current;
    cin >> current;
    sum += current;
    

    } 
    
    if(sum > max)
    {
        max = sum ; 
        winner = participant;
    }
    
  }
  
  cout <<winner;
  cout << " ";
  cout <<max;
  return 0 ; 
  
}

