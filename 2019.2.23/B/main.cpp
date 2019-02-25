#include <bits/stdc++.h>
using namespace std;

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,a0=0,b0=0,ans=1,a,b;
    cin>>n;
    for (int i=1;i<=n;i++)   {
        cin>>a>>b;
        ans+=max(0,min(a,b)-max(a0,b0)+1);
        if (a0==b0) ans--;
        a0=a,b0=b;
    }
    cout<<ans<<endl;
    return 0;
}
