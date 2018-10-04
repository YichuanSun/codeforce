#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int dig(ll a);
ll cal9(ll a);
int main()  {
    ll n;
    cin>>n;
    ll dd=cal9(n);
//    for (int i=0;i<=n/2;i++)
//        cout<<i<<'\t'<<n-i<<'\t'<<dig(i)+dig(n-i)<<endl;
    cout<<dig(dd)+dig(n-dd)<<endl;
    return 0;
}
int dig(ll a)   {
    int sum=0;
    while (a)   {
        sum+=a%10;
        a/=10;
    }
    return sum;
}
ll cal9(ll a)   {
    ll t=1;
    while (t<=a)    {
        t*=10;
    }
    if (t-1==a) return t-1;
    t/=10;
    return t-1;
}
