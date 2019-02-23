#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll w1,h1,w2,h2;
    cin>>w1>>h1>>w2>>h2;
    ll ans=2*(w1+h1+h2)+4;
    cout<<ans<<endl;
    return 0;
}
