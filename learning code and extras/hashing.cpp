#include <bits/stdc++.h>
using namespace std;

int main(){
int n,q;
cin>>n;
int arr[n];

for (int i = 0; i <n; i++)
{
    cin>>arr[i];
}
int max = *max_element(arr,arr+n);
int hash_arr[max]{0};

for (int i = 0; i < n; i++)
{
    hash_arr[arr[i]] ++;
}

cin>>q;
while(q--){
 int p;
 cin>>p;
 cout<<hash_arr[p];
}

}