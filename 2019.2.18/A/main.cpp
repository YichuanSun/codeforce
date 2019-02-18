#include <bits/stdc++.h>
#define N 100005
using namespace std;
int a[N];
int main()  {
    int n,mx=-1,ans=-1;
    cin>>n;
    for (int i=0;i<n;i++)   {
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    for (int i=0;i<n;i++)   {
        if (a[i]==mx)   {
            int oi=i;
            while (i+1<n&&a[i]==a[i+1])   i++;
            ans=max(ans,i-oi+1);
        }
    }
    cout<<ans<<endl;
    return 0;
}
