#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,q,a,b;
    cin>>q;
    for (ll i=0;i<q;i++)    {
        cin>>n>>a>>b;
        ll cost=0;
        double avga=1.0*a,avgb=1.0*b/2;
        if (avga<=avgb)  cost=n*a;
        else {
            cost=n/2*b;
            cost+=(n%2)*a;
        }
        cout<<cost<<endl;
    }
    return 0;
}
