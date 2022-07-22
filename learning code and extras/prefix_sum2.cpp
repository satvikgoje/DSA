#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 +10;
long long int arr[N];
long long int pf_arr[N];

int main(){
 int m,n;
 cin>>n>>m;
 while(m--){
    int a,b,k;
    cin>>a>>b>>k;

    arr[a]+=k;
    arr[b+1]-=k;
 }
 //pf_arr[0]=0;
 int max=INT16_MIN;
 for (int i = 1; i <= n; i++)
 {
    pf_arr[i]=pf_arr[i-1]+arr[i];
 }
 cout<<*max_element(pf_arr+1,pf_arr+(n+1))<<endl;

}