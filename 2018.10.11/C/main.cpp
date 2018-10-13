#include <bits/stdc++.h>
#define N 200005
using namespace std;
int a[N],b[N];
int main()  {
    int n,k,mx=0,mn=1000000,fg=0;
    cin>>n>>k;
    for (int i=1;i<=n;i++)  {
        cin>>a[i];
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
    }
    if (n==1)   {cout<<0<<endl;return 0;}
    for (int i=1;i<=n;i++)  {
        a[i]-=mn;
        b[1]++;
        b[a[i]+1]--;
    }
    for (int i=2;a[1]==a[i]&&i<=n;i++)    {
        if (i==n)   fg=1;
    }
    if (fg) {cout<<0<<endl;return 0;}
    for (int i=2;i<=mx;i++) b[i]=b[i-1]+b[i];
//    for (int i=1;i<=n;i++)  cout<<b[i]<<' ';
//    cout<<endl;
    int tmp=0,ans=0;
    for (int i=1;i<=mx;i++)   {
        if (tmp>k)  ans++,tmp=b[i];
        else tmp+=b[i];
    }
    cout<<ans+1<<endl;
    return 0;
}
