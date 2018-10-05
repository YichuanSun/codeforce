#include <bits/stdc++.h>
using namespace std;

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,L,a,t,l;
    cin>>n>>L>>a;
    int ss=0,ans=0;
    for (int i=0;i<n;i++)   {
        cin>>t>>l;
        ans+=(t-ss)/a;
        ss=t+l;
    }
    ans+=(L-ss)/a;
    cout<<ans<<endl;
    return 0;
}
