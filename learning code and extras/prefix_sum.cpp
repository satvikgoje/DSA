#include <bits/stdc++.h>
using namespace std;
/*
Constraints
1<=N<=10^5
1<=arr[i]<=10^9
1<=T<=10^5
1<=l,r<=N
*/
const int N = 1e5 + 10;
int arr[N];
long long prefix_sum[N];//pre-computation technique

int main()
{
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        prefix_sum[i] = prefix_sum[i-1]+ arr[i];
    }

    int t;
    cin >> t;// O(N) + O(Q)
    while(t--){
        int l,r;
        cin>>l>>r;
        long long sum = prefix_sum[r]-prefix_sum[l-1];
        cout<<sum<<endl;
    }




    //(O(N^2)=10^10)
    // while (t--)
    // {
    //     int l, r;
    //     cin >> l >> r;
    //     long long sum{0};
    //     for (int i = l; i <= r; i++)
    //     {
    //         sum += arr[i];
    //     }
    //     cout << sum;
    // }
}