/*

author : David Gilbert 
problem : https://open.kattis.com/problems/alicedigital
*/




#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num;
    cin >> num;
    while (num) {
        int n;
        int m;
        int max = -1; // set at invalid vlue
        vector<int> array;
        cin >> n ;
        cin >> m;
        
        for (int i=0; i<n; ++i) 
        {
            int tmp;
            cin >> tmp;
            array.push_back(tmp);
        }
        
        for (int i=0; i<n; ++i) 
        {
            if (array[i] == m) // find a m in array
            {
                int sum = m;
                
                for (int j=i-1; (j>=0) && (array[j]>m); --j)
                {
                    sum += array[j];
                }
                    
                for (int j=i+1; (j<array.size()) && (array[j]>m); ++j)
                {
                    sum += array[j];
                }
                         
                if (sum > max)
                {
                    max = sum;
                }
            }
        }

        cout << max << endl;

        --num;
    }
    return 0;
}







/*

int main()
{
    int num ;
    cin >> num ; //number of test case
    
    
    for(int i =0 ; i< num ; i++ )
    {
        int n ; 
        int m ;
        cin >> n; // size of array
        cin >> m; // value tht needs to be in exactly once
        int array[n];
        
        int sum1 = 0 ;
        int sum2 = 0 ;
        int max = 0 ;
        int mCounter = 0 ;
    
        //get last line of input
        for(int j = 0 ; j< n ; j++ )
        {
            
            cin >> array[j] ;
            
            if(array[j] < m)
            {
                mCounter = 0 ;
                
                if(sum1 > max)
                {
                    max = sum1 ;
                }
            
                
                int sum1 = 0 ;
                int sum2 = 0 ;
            }
            else
            {
                if(array[j] == m)
                {
                    mCounter ++ ; 
                    
                    if(mCounter == 2)
                    {
                        mCounter = 1 ;
                        
                        if(sum1  > max)
                        {
                            
                            max = sum1 ;
                        }
                    
                        sum1 = sum2 -m;
                        sum2 = -m ;
                    }
                    
                }
                
                
                if(mCounter == 0 )
                {
                    
                    sum1 += array[j] ;
                    
                }
                else if(mCounter == 1) 
                {
                    sum1 += array[j] ;
                    sum2 += array[j] ;
                }
                
                if(j == n-1 )
                {
                 
                    if(sum1 > max)
                    {
                        max = sum1 ;
                        
                    }
                }
            }
            

        }
        
        cout << max << endl;
    }
    
    
    return 0 ; 
}




*/











/*
int main()
{
   int num ;
   cin >> num ; //number of test case

    for(int i =0 ; i< num ; i++ )
    {
        int n ; 
        int m ;
        cin >> n; // size of array
        cin >> m; // value tht needs to be in exactly once
        int array[n];
        int counter = 1 ;
        int locationM[n+1];
           //add start of array
        locationM[0] = 0;
        
        
        
        for(int j = 0 ; j< n ; j++ )
        {
            
            cin >> array[j] ; 
            if(array[j] == m)
            {
                locationM[counter] = j; 
                counter ++;
            }
        }
        
        //add end of array
        locationM[counter+1] = n;
        
        //find max sub array
        
        int max = 0 ;
       
        
        for(int j =0 ; j < counter-1 ; j++) // for each location of m in array there is one sub array
        {
             int sum = 0 ;
             for(int k = locationM[j] ; k < locationM[j+2] ; k++)
             {
                 
                 sum += array[k] ;
                 
             }
         
             if(sum  > max)
             {
                 max = sum ;
             }
            
        }
        
        cout << max ;
        
    }
   
   

    return 0;
}
*/