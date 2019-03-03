#include <bits/stdc++.h>
#define N 105
using namespace std;
int a[N],b[N],c;
bool pot[N],spt[N];
int main()  {
    int n,m,k,t,ans=0;
    cin>>n>>m>>k;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    for (int i=1;i<=n;i++)   {
        cin>>t;
        b[a[i]]=t;
    }
    for (int i=1;i<=k;i++)  {
        cin>>c;
        spt[c]=1;
    }
    for (int i=n;i>=1;i--)  {
        if (pot[b[i]]==0)   {
            pot[b[i]]=1;
        }
        else if (pot[b[i]]==1&&spt[i])  ans++;
    }
    cout<<ans<<endl;
    return 0;
}
