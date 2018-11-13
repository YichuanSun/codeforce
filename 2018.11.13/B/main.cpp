#include <bits/stdc++.h>
#define N 10000000005
using namespace std;
typedef long long ll;
ll st[N];
ll fd_spd(ll n);
int main()  {
    ll n,cnt=0;
    cin>>n;

    while (n)   {
        ll t=fd_spd(n);
        n-=d;
        cnt++;
    }

    return 0;
}

ll fd_spd(ll n) {

}
