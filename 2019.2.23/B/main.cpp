#include <bits/stdc++.h>
using namespace std;
//太花时间了
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,a0=0,b0=0,ans=1,a,b;
//    ans=0;
    cin>>n;
    for (int i=1;i<=n;i++)   {
        cin>>a>>b;
        ans+=max(0,min(a,b)-max(a0,b0)+1);
        if (a0==b0) ans--;
//        if (a==b)   ans--;
//        if (i==n&&a==b)   ans++;
        a0=a,b0=b;
    }
    cout<<ans<<endl;
    return 0;
}
