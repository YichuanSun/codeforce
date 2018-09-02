#include <bits/stdc++.h>
using namespace std;
vector<int> a;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,t,ans=1,tans=1;
    cin>>n;
    for (int i=0;i<n;i++)   {
        cin>>t;
        a.push_back(t);
    }
    if (n==1)   {
        cout<<1<<endl;
        return 0;
    }
    for (int i=0;i<n-1;i++) {
        while (i<n-1&&a[i+1]<=a[i]*2)  {
            tans++;
            i++;
        }
        ans=max(ans,tans);
        tans=1;
    }
    cout<<ans<<endl;
    return 0;
}
