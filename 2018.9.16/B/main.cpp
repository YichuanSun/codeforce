#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b);
int main()  {
    ll a,b,x,y;
    cin>>a>>b>>x>>y;
    ll dd=gcd(x,y);
    x/=dd,y/=dd;
    cout<<min(a/x,b/y)<<endl;
    return 0;
}

ll gcd(ll a,ll b)   {
    if (b==0)   return a;
    return gcd(b,a%b);
}
