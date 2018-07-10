/*

author : david gilbert
problem : https://open.kattis.com/problems/armystrengtheasy


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
        
        
        sort(armyG.begin(),armyG.end());
        sort(armyM.begin(),armyM.end());
        
        
        
        // fight
        while(! armyM.empty() && !armyG.empty())
        {
            
            
            int m = armyM.front();
            int g = armyG.front();
            
            if(m <= g)
            {
                armyM.erase(armyM.begin());
                
            }
            else if(g < m)
            {
                armyG.erase(armyG.begin());
            }
     
            
        }
        
        // who won 
        if(!armyG.empty())
        {
            cout << "Godzilla"<<endl;
        }
        else if (!armyM.empty())
        {
            cout << "MechaGodzilla"<< endl;
        }
        else
        {
            cerr << "error";
        }
        
        
    }



    return 0;
}
