#include <bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
int k=7;
int n=s.length();
for (int i = 0; i <=n-k; i++)
{
    int count{0};
    for (int j = i; j <= i+k-1; j++)
    {
       if(s[i]==s[j])
       {
        count++;
       }
    }
    if(count==k){
        cout<<"YES";
        return 0;
    }
}

cout<<"NO";


}