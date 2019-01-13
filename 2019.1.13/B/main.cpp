#include <bits/stdc++.h>
#define N 100005
using namespace std;
bool ans[N];
int spt[N];
int main()  {
    int n,m,t,cnt=0;
    cin>>n>>m;
    for (int i=0;i<m;i++)   {
        cin>>t;
        if (spt[t]++==0)    cnt++;
        if (cnt==n) {
            cnt=0;
            ans[i]=1;
            for (int j=1;j<=n;j++)  {
                if (spt[j]>0)   spt[j]--;
                if (spt[j]>0)   cnt++;
            }
        }
        else    ans[i]=0;
    }
    for (int i=0;i<m;i++)   cout<<ans[i];
    cout<<endl;
    return 0;
}
