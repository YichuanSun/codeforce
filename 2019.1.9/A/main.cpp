#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()  {
    ll n,ans=0;
    cin>>n;
    if ((n&1)==0) {
        if (n%4==0) ans=0;
        else    ans=1;
    }
    else    {
        if (n==1)   ans=1;
        else if (n==3)  ans=0;
        else if (n>3)   ans=(n-3)/2;
    }
    cout<<ans<<endl;
    return 0;
}
