#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
int main()  {
    cin>>n>>m;
    ll mmx=n-(m+1);
    ll mmn;
    if (m==0)   {
        cout<<n<<' '<<n<<endl;
        return 0;
    }
    if (m>=n-1) {
        cout<<0<<' '<<0<<endl;
        return 0;
    }
    if (m>n/2)  mmn=0;
    else mmn=n-m*2;
    cout<<mmn<<' '<<mmx<<endl;
    return 0;
}
