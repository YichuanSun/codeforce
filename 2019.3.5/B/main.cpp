#include <bits/stdc++.h>
#define N 300005
using namespace std;
typedef long long ll;
ll sm=0;
ll psm[N];
int a[N];
bool cmp(int a,int b)   {return a>b;}
int main()  {
    ios::sync_with_stdio(false);
    int n,m,q;
    cin>>n;
    for (int i=0;i<n;i++)   cin>>a[i];
    sort(a,a+n,cmp);
    for (int i=0;i<=n;i++)
        psm[i]=a[i]+(i?psm[i-1]:0);
    cin>>m;
    while (m--) {
        cin>>q;
        cout<<psm[n]-a[q-1]<<endl;
    }
    return 0;
}
