#include <bits/stdc++.h>
using namespace std;
const int N = 2010,mx=1000000007;
int n,q,cnt=0,cur=0,ans=0,mn,l[N],r[N];
int main()  {
    scanf("%d%d",&n,&q);
    for (int i=0;i<q;i++)
        scanf("%d%d",&l[i],&r[i]);
    for (int i=0;i<q;i++)   {
        memset(sum,0,sizeof(sum));
        memset(sum2,0,sizeof(sum2));
        for (int j=0;j<q;j++)   {
            if (j==i)   continue;
            sum[l[j]]++;
            sum[r[j]+1]--;
        }
        cur=cnt=0;
        for (int j=1;j<=n;j++)  {
            cnt+=sum[j];
            sum2[j]=(cnt==1)+sum2[j-1];
            cur+=(cnt>0);
        }
        mn=mx;
        for (int j=0;j<q;j++)   {
            if (j==i)   continue;
            mn=min(mn,sum2[r[i]]-sum2[l[j]-1]);
        }
        ans=max(ans,cur-mn);
    }
    cout<<ans<<endl;
    return 0;
}
