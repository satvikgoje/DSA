#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    int arr[n][m];
    int max_global{0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            for(int k=0;k<n;k++)
            {
                for (int l = 0;  l< m; l++)
                {
                   int sum{0};
                  for (int x= i; x < k ; x++)
                  {
                    for (int y = j; y<l ; y++)
                    {
                        sum += arr[x][y];
                    }
                    
                  }
                  max_global=max(sum,max_global);
                }
                
                
            }
        }
        
    }
    
}