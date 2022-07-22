#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
int hash_arr[N][26];

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 26; i++)
            {
                hash_arr[i][j]=0;
            }

        }

        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            hash_arr[i][s[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < n; j++)
            {
                hash_arr[j][i] = hash_arr[j - 1][i] + hash_arr[j][i];
            }
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            int odd_count, char_count{0};
            for (int i = 0; i < 26; i++)
            {
                char_count = hash_arr[r][i] - hash_arr[l - 1][i];
                if (char_count % 2 == 1)
                {
                    odd_count++;
                }
            }

            if (odd_count == 0 || odd_count == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }//O(t*(n+n*26+26+q(26))=O(t*n)

        // while (q--)
        // {
        //     int l, r;
        //     cin >> l >> r;
        //     int hash_arr[26];
        //     for (int i = 0; i < 26; i++)//initilizing zero
        //     {
        //         hash_arr[i] = 0;
        //     }
        //     l--;
        //     r--;

        //     for (int i = l; i <= r; i++)
        //     {
        //         hash_arr[s[i] - 'a']++;
        //     }

        //     int count{0};
        //     for (int i = 0; i < 26; i++)
        //     {
        //         if (hash_arr[i] % 2 == 1)
        //         {
        //             count++;
        //         }
        //     }

        //     if (count == 0 || count == 1)
        //     {
        //         cout << "YES" << endl;
        //     }
        //     else
        //     {
        //         cout << "NO" << endl;
        //     }
        // }
    } // O(t*q*n +t*n)
// }


// #include <bits/stdc++.h>
// using namespace std;
// // int arr[3];

// int main()
// {
//     // ios_base::sync_with_stdio(false);
//     // cin.tie(NULL);
//     // int t;
//     // cin >> t;

//     //  while (t--)
//     //  {
//     int x;
//     cin >> x;
//     int input;
//     vector <int> v1;
//     cout << x << endl;
//     for (int i = 1; i <= 3; i++)
//     {
//         cin>>input;
//         v1.push_back(input);
//     }

//     cout << x << endl;

//     //  }
}