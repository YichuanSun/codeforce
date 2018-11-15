#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()  {
    ll n;
    cin>>n;
    if (n%2==0) {cout<<n/2<<endl;return 0;}
    for (ll i=2;i*i<=n;i++) {
        if (n%i==0) {
            n-=i;
            cout<<1+n/2<<endl;
            return 0;
        }
    }
    cout<<1<<endl;
    return 0;
}
