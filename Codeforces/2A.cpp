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
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        string s;
        for (int i = 0; i < m; i++)
        {
            s.push_back('B');
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] < (1 + m - arr[i]))
            {
                if (arr[i] < (1 + m - arr[i]) && s[arr[i] - 1] == 'B')
                {
                    s[arr[i] - 1] = 'A';
                }
                else
                {
                    s[(1 + m - arr[i]) - 1] = 'A';
                }
            }
            else
            {
                if (arr[i] > (1 + m - arr[i]) && s[(1 + m - arr[i]) - 1] == 'B')
                {
                    s[(1 + m - arr[i]) - 1] = 'A';
                }
                else
                {
                    s[arr[i] - 1] = 'A';
                }
            }

            // if (arr[i] > (1 + m - arr[i]) && s[(1 + m - arr[i]) - 1] == 'B')
            // {
            //     s[(1 + m - arr[i]) - 1] = 'A';
            // }
            // else
            // {
            //     s[arr[i] - 1] = 'A';
            // }
        }

        cout << s << endl;
    }
}