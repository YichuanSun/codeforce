#include <bits/stdc++.h>
#define N 200005
using namespace std;
typedef long long ll;
int a[N];
ll s;
map<ll,int> mi;
vector<int> ans;
int main()  {
    int n;
    cin>>n;
    for (int i=0;i<n;i++)   {cin>>a[i];s+=a[i];mi[a[i]]++;}
    for (int i=0;i<n;i++)   {
        ll ts=s-a[i];
        mi[a[i]]--;
        if ((ts&1)==0&&mi[ts/2])    ans.push_back(i+1);
        mi[a[i]]++;
    }
    cout<<ans.size()<<'\n';
    if (!ans.empty())   cout<<ans[0];
    for (int i=1;i<(int)ans.size();i++)
        cout<<' '<<ans[i];
    cout<<endl;
    return 0;
}
