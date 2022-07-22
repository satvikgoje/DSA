#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int max_global = {1};
    int n = s.length();
    int count{1};

    for (int i = 0; i <= n - 2; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
            max_global = max(max_global, count);
        }
        else
        {
            count = 1;
        }
    }
    cout << max_global;

    //  for (int i = 0; i < n; i++)//time limit exceeded
    //  {
    //     int count={0};
    //     for (int j = i; j < n; j++)
    //     {
    //         if(s[i]==s[j]){
    //             count++;
    //             max_global=max(max_global,count);
    //         }
    //         else{
    //             break;
    //         }
    //     }

    //  }
    // cout << max_global;
}