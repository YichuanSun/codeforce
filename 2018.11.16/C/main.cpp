#include <bits/stdc++.h>
#define N 200005
using namespace std;
typedef long long ll;
ll a[N];
vector<int> vi;
int main()  {
    ll n,sum=0;
    cin>>n;
    for (int i=0;i<n;i++)   {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    cout<<sum<<endl;
    for (int i=0;i<n;i++)   {
        ll nw=sum-a[i];
        ll* lb=lower_bound(a,a+n,nw);
        cout<<i<<' '<<*(lb)<<endl;
        if (*(lb)==nw)
            vi.push_back(i+1);
    }
    if (vi.size())  cout<<vi[0];
    for (int i=1;i<(int)vi.size();i++)
        cout<<' '<<vi[i];
    cout<<endl;
    return 0;
}
