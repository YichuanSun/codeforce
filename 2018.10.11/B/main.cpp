#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
int main()  {
    cin>>n>>m;
    ll mmn,mmx;
    if (m==0)   {
        cout<<n<<' '<<n<<endl;
        return 0;
    }
    if (m>n/2)  mmn=0;
    else mmn=n-m*2;
    for (ll k=0;;k++)  {
        if ((k-1)*k/2>=m)    {
            mmx=n-k;
            break;
        }
    }
    cout<<mmn<<' '<<mmx<<endl;
    return 0;
}
