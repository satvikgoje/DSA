#include <bits/stdc++.h>
using namespace std;

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    //gcd(0,n)=n
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;

        int arr[n];
        int f_arr[n+10];
        f_arr[0]=0;//bound check
        for (int i = 1; i <= n; i++)
        {
            cin>>arr[i];
            if(i==1){
                f_arr[1]=arr[1];
            }
            else{
                f_arr[i]=__gcd(f_arr[i-1],arr[i]);
            }
            //f_arr[i]=__gcd(f_arr[i-1],arr[i]);
        }

        int b_arr[n+10];
        b_arr[n+1]=0;//bound check
        for (int i = n; i >= 1; i--)
        {
            if(i==n){
                b_arr[n]=arr[n];
            }
            else{
                b_arr[i]=__gcd(b_arr[i+1],arr[i]);
            }
            //b_arr[i]=__gcd(b_arr[i+1],arr[i]);
        }

        while(q--){
            int l,r;
            cin>>l>>r;
            int res;
            res=__gcd(f_arr[l-1],b_arr[r+1]);
            cout<<res<<endl;

        }
        
        
    }
 

}