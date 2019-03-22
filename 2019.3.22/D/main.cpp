#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()  {
    ll n,ans=0;
    cin>>n;
    for (ll i=3;i<=n;i++)
        ans+=i*(i-1);
    cout<<ans<<endl;
    return 0;
}
