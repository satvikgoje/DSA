#include <bits/stdc++.h>
using namespace std;
//2D array
const int N = 1e3 + 10;
int arr[N][N];
long long pf2[N][N];//zero initialized array

int main(){
 int n;
 cin>>n;
 for (int i = 1; i <= n; i++)
 {
    for (int j = 0; j <=n; j++)
    {
        cin>>arr[i][j];
        pf2[i][j]=arr[i][j]+pf2[i-1][j]+pf2[i][j-1]-pf2[i-1][j-1];
    }
}
int t;
cin>>t;
while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int sum = pf2[c][d]-pf2[a-1][d]-pf2[c][b-1]+pf2[a-1][b-1];
    cout<<sum<<endl;
}
//O(N^2)+O(T)
}