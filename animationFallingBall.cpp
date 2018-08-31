/*

author : david gilbert

problem : animationFallingBall


*/

#include <iostream>
#include <cmath>
#include <ctime>
#include <unistd.h>

using namespace std;

int main()
{
    int delay = 50;
    int width = 100 ;
    
    while(true)
    {
        //right to left
        for(int j = 0 ; j < width ; j++)
        {

            for(int i = 0 ; i < j; i++ )
            {
                cout << "\\" ;
            }
            
            
            cout << "0";
            
            for(int i = j ; i < width; i++ )
            {
                cout << "/" ;
            }
            
            cout << endl;
            
            usleep(1000*delay);
            
            
        }
        // left to right
        for(int j = width ; j > 0 ; j--)
        {

            for(int i = 0 ; i < j; i++ )
            {
                cout << "/" ;
            }
            
            
            cout << "0";
            
            for(int i = j ; i < width; i++ )
            {
                cout << "\\" ;
            }
            cout << endl;

            usleep(1000*delay);
        }
    }

    return 0;
}
