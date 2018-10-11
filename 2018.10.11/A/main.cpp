#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int s,a,b,c,t;
    cin>>t;
    for (int i=0;i<t;i++)   {
        cin>>s>>a>>b>>c;
        ll t1=s/c;
        ll t2=t1/a*b;
        cout<<t1+t2<<endl;
    }
    return 0;
}
