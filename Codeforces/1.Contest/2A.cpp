#include <bits/stdc++.h>
using namespace std;

int main(){
 int t;
 cin>>t;

 while(t--){
    int n,x;
    cin>>n>>x;
    int m=2*n;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);

    vector<int> v1;
    for (int j = 0; j < n; j++)
    {
        v1.push_back(arr[j+n]-arr[j]);
    }
    int min_global=*min_element(v1.begin(),v1.end());
    if(min_global>=x){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

 }

}