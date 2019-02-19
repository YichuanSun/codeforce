#include <bits/stdc++.h>
#define N 200005
using namespace std;
typedef long long ll;
ll nowoddsum,nowevensum,sum[2][N];
int a[N];
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,ans=0;
    cin>>n;
    for (int i=1;i<=n;i++)   {
        cin>>a[i];
        if ((i&1)==0) {
            if (i>2)
                sum[0][i]+=sum[0][i-2]+a[i];
            else
                sum[0][i]+=a[i];
            sum[1][i]=sum[0][i];
        }
        else {
            if (i>1)
                sum[1][i]+=sum[1][i-2]+a[i];
            else
                sum[1][i]+=a[i];
            sum[0][i]=sum[1][i];
        }
    }
    for (int i=1;i<=n;i++)
        cout<<i<<' '<<sum[0][i]<<' '<<sum[1][i]<<endl;
    for (int i=1;i<=n;i++)  {
        nowoddsum=sum[1][i]+sum[n&1][n]-sum[i&1][i];
        nowevensum=sum[0][i]+sum[n&1][n]-sum[i&1][i];
        cout<<i<<" nowoddsum: "<<nowoddsum<<" nowevensum: "<<nowevensum<<endl;
        if (nowoddsum==nowevensum)  ans++;
    }
    cout<<ans<<endl;
    return 0;
}
