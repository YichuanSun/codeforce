#include <bits/stdc++.h>
#define N 200005
using namespace std;
typedef long long ll;
ll ans,sum,tt;
int a[N];
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k,mn=1000000;
    cin>>n>>k;
    for (int i=0;i<n;i++)   {
        cin>>a[i];
        mn=min(mn,a[i]);
        sum+=a[i];
    }
    tt=sum-mn*n;
    if (tt%k==0)    ans=tt/k;
    else ans=tt/k+1;
    cout<<ans<<endl;
    return 0;
}
