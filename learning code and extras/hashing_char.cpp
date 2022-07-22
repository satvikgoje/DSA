#include <bits/stdc++.h>
using namespace std;
int arr[26];

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 'a']++;
    }

    // int count{0};
    // int temp {0};
    for (int i = 0; i < 26; i++)
    {

        if (arr[i] == 1)
        {
            cout<<(char)(i+'a');
            return 0;
        }
        
    }
    cout<<-1;

    
}