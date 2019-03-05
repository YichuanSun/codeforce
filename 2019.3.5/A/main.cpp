#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b,c,d;
bool ok=0;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>a>>b>>c>>d;
    if (c>0)    {
        if (a>=1&&d>=1&&a==d)   ok=1;
    }
    else    {
        if (a==d)   ok=1;
    }
    cout<<ok<<endl;
    return 0;
}
