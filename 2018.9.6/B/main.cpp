#include <bits/stdc++.h>
using namespace std;

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    if (n%(1+2*k)==0)   {
        cout<<n/(1+2*k)<<endl;
        cout<<k+1;
        for (int i=3*k+2;i<=n;i+=2*k+1)
            cout<<' '<<i;
        cout<<endl;
        return 0;
    }
    int di=n%(1+2*k);
    cout<<n/(1+2*k)+1<<endl;
    if (di>=k+1&&di<=2*k)   {
        cout<<di-k;
        for (int i=di+k+1;i<=n;i+=2*k+1)
            cout<<' '<<i;
        cout<<endl;
    }
    else if (di<k+1)    {
        cout<<1;
        for (int i=2*k+2;i<=n;i+=2*k+1)
            cout<<' '<<i;
        cout<<endl;
    }
    return 0;
}
