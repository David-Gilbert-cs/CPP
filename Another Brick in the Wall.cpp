/*

author :David Gilbert
problem : https://open.kattis.com/problems/anotherbrick

*/

#include <iostream>

using namespace std;

int main()
{
    int h; 
    int w; 
    int n;
    int hcounter = 0 ; 
    int brickWidth ; 
    int currentWidth =0 ;
    
    cin >> h;
    cin >> w;
    cin >> n;
    
    
    for(int i = 0 ; n > i ;i++) 
    {

        cin >> brickWidth; // get brick size
        
        currentWidth += brickWidth;
        
        if(currentWidth == w) 
        {
            hcounter++; // icnrease curent height by one (new row)
            currentWidth =0; // start with empty row
            
            if(hcounter == h)// height h reached, wall built
            {
                cout<<"YES";
            }
        }
        else if(currentWidth > w) // cant build the wall
        {
            cout<<"NO";
            break;
        }
        // if currentWidth < w then nothing    
        
    }
    
    
    
    
    


    return 0;
}
