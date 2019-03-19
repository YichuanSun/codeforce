#include <bits/stdc++.h>
#define N 200010
using namespace std;
typedef long long ll;
ll a[N],b[N],ans[N];
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for (int i=0;i<n-1;i++)   cin>>a[i];
    for (int i=0;i<n-1;i++) {
        b[i]=a[i]+((i==0)?0:b[i-1]);
    }
    b[n-1]=0;
    sort(b,b+n);
    int sk=1;
    for (int i=0;i<n;i++)
        if (b[i]!=b[0]+i)    sk=0;
    if (sk) {
        if (b[0]<0) ans[0]=-b[0]+1;
        else ans[0]=1;
        for (int i=1;i<n;i++) ans[i]=ans[i-1]+a[i-1];
        cout<<ans[0];
        for (int i=1;i<n;i++)   cout<<' '<<ans[i];
        cout<<endl;
    }
    else cout<<-1<<endl;
    return 0;
}
