#include <bits/stdc++.h>
#define N 200005
using namespace std;
int  a[N],ltor[N],rtol[N],n,ans;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for (int i=0;i<n;i++)   cin>>a[i];
    for (int i=0;i<n;i++)
        ltor[i]=a[i]+(i>=2?ltor[i-2]:0);
    for (int i=n-1;i>=0;i--)
        rtol[i]=a[i]+rtol[i+2];
    for (int i=0;i<n;i++)   {
        int a=0,b=0;
        if (i>=2)   {
            a=ltor[i-2];
            b=ltor[i-1];
        }
        else if (i==1)
            b=ltor[0];
        a+=rtol[i+1];
        b+=rtol[i+2];
        ans+=(a==b);
    }
    cout<<ans<<endl;
    return 0;
}
