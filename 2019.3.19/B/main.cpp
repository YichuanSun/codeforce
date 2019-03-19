#include <bits/stdc++.h>
#define N 1000000
using namespace std;

int a[N];
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,ans=0;
    cin>>n;
    for (int i=0;i<n;i++)   cin>>a[i];
    for (int i=n;i<2*n;i++) a[i]=a[i-n];
    for (int i=0;i<2*n;i++) {
        int cnt=0;
        while (a[i]==1&&i<2*n)  {
            cnt++;
            i++;
        }
        ans=max(cnt,ans);
    }
    cout<<ans<<endl;
    return 0;
}
