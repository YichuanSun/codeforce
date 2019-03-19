#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll a,b,cnt2=0,cnt3=0;
    cin>>a>>b;
    ll c=b/a,d=b%a;
    if (d)  {cout<<-1<<endl;return 0;}
    while ((c&1)==0)  {
        c/=2;
        cnt2++;
    }
    while (c!=1)    {
        if (c%3)    {cout<<-1<<endl;return 0;}
        c/=3;
        cnt3++;
    }
    cout<<cnt2+cnt3<<endl;
    return 0;
}
