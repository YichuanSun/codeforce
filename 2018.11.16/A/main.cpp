#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,a,b,k;
    cin>>n;
    for (int i=0;i<n;i++)   {
        cin>>a>>b>>k;
        ll ans=k/2*(a-b)+k%2*a;
        cout<<ans<<endl;
    }
    return 0;
}
