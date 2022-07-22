#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int a, b, c;
        cin >> a >> b >> c;
        int arr[3] = {a, b, c};



        if (arr[x-1] == 0)
        {
            cout << "NO" << endl;
        }
        else if (arr[arr[x-1]-1] == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}