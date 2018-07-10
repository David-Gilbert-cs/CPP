/*

author : david gilbert
problem : https://open.kattis.com/problems/armystrengthhard


*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    
    int n ;
    cin >> n ; // test cases
    
    for(int i = 0 ; i < n ; i++)
    {
        
        int ng; // number godzilla
        vector<int> armyG ;
        int nm; // number mecha
        vector<int> armyM;
        
        
        cin >> ng ; 
        cin >> nm ;
        
        armyM.resize(0);
        armyG.resize(0);
        

        // fill up armies
        for(int j = 0 ; j < ng ; j++)
        {
            int x ;
            cin >> x;
            armyG.insert(armyG.begin()+j, x);
        }
        
        for(int j = 0 ; j < nm ; j++)
        {
            int x ;
            cin >> x;
            armyM.insert(armyM.begin()+j, x);
        }
        
        // find strongest from both armies
        
        int a = *max_element(armyG.begin(),armyG.end());
        int b = *max_element(armyM.begin(),armyM.end());
        
        if( a >= b)
        {
            cout << "Godzilla"<<endl;
        }
        else 
        {
            cout << "MechaGodzilla"<<endl;
        }
        
        
    }



    return 0;
}
