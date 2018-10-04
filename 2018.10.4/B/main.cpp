#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int dig(ll a);
int main()  {
    ll n;
    cin>>n;
    if (n&1)    cout<<dig(n/2)+dig(n/2+1)<<endl;
    else cout<<dig(n/2-1)+dig(n/2+1)<<endl;
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
