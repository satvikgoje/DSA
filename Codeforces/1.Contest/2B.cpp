#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;

while(t--){
    int n;
    cin>>n;
    int arr[n];
    long long int sum{0};
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    sum = sum - arr[n-1];
    int count1{0};
    int count2{0};

    if(arr[0]==0){
        int j=0;
        while(arr[j]==0){
            count1++;
            j++;
        }
    }

    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]==0){
            count2++;
        }
    }

    sum += count2-count1;

    if(count1 >= n-1){
        cout<<0<<endl;
    }
    else{
        cout<<sum<<endl;
    }
 
}

}