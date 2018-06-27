/*

author : david gilbert
problem : https://open.kattis.com/problems/autori

*/

#include <iostream>

using namespace std;

int main()
{
    
    char c ;
    string input;
    cin >> c ; 
    cout << c ; 
    
    getline(cin, input); 
    
    for(char& c  : input) // for all char in string
    {
        if(c == '-')
        {
            c = *(&c+1);// increament adress and store value from increamented adress
            cout << c ;
        }
    }
    

    
   
    cout << endl;
    



    return 0;
}
