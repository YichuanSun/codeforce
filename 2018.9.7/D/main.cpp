#include <bits/stdc++.h>
#define N 100005
using namespace std;
typedef long long ll;
int a[N],b[N];
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    ll suma=0,sumb=0;
    cin>>n;
    for (int i=0;i<n;i++)   {
        cin>>a[i];
        suma+=a[i];
    }
    cin>>m;
    for (int j=0;j<m;j++)   {
        cin>>b[j];
        sumb+=b[j];
    }
    if (suma!=sumb) {
        cout<<-1<<endl;
        return 0;
    }
    int posa=0,posb=0,ans=0;
    while (posa<n&&posb<m)  {
        ans++;
        ll sa=a[posa++],sb=b[posb++];
        while (sa!=sb)  {
            if (sa<sb)  sa+=a[posa++];
            else    sb+=b[posb++];
        }
    }
    cout<<ans<<endl;
    return 0;
}
