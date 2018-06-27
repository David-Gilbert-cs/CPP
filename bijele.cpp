/*

author : david gilbert
problem : https://open.kattis.com/problems/bijele

*/

#include <iostream>

using namespace std;

int main()
{
    
    int n;
    
    cin >> n ; // king;
    cout << 1-n << " ";
    
    cin >> n ; // queen;
    cout << 1-n << " ";
    
    cin >> n ; // rooks;
    cout << 2-n << " ";
    
    cin >> n ; // bishops;
    cout << 2-n << " ";
    
    cin >> n ; // knights;
    cout << 2-n << " ";
    
    cin >> n ; // pawns;
    cout << 8-n << endl;
    



    return 0;
}
