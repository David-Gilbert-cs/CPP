/*

author: david gilbert
problem : https://open.kattis.com/problems/planina


*/



#include <iostream>


using namespace std;

int main() 
{
  int n;
  cin >> n;
  int x = 1;
  
  for (int i = 0; i < n; i++)
  {
    x *= 2;
  }
  
  cout << (x + 1) * (x + 1) << endl;
}






/*#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n ;
    cin >> n ; 
    
    cout<< pow(pow(2,n)+1,2) ;

    return 0;
}
*/