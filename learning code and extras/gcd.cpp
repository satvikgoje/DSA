#include <bits/stdc++.h>
using namespace std;

int main(){
 int a,b;
 cin>>a>>b;

 int hcf;
 hcf=min(a,b);

while (hcf>0) //O(min(a,b)) //optimised algo is euclid with O(log(max(a,b)))
{
    if (a%hcf==0 && b%hcf==0)
    {
        break;
    }
    hcf--;
}
cout<<hcf<<endl;
cout<<__gcd(a,b);


}