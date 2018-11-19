#include <bits/stdc++.h>
#define N 105
using namespace std;
int a[N],cnt[N];
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k,mx=-1,ct=0;
    cin>>n>>k;
    for (int i=0;i<n;i++)   {
        cin>>a[i];
        cnt[a[i]]++;
    }
    for (int i=0;i<N;i++)       {
        if (cnt[i]>mx)  mx=cnt[i];
        if (cnt[i])  ct++;
    }
    int ans=(mx/k+(mx%k!=0))*ct*k-n;
    cout<<ans<<endl;
    return 0;
}
