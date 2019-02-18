#include <bits/stdc++.h>
#define N 200005
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
map<ll,ll> mll;
vector<pll> vp;
bool cmp(pll a,pll b)   {
    return a.first>b.first;
}
int main()  {
    ll n,k,m,ans=0,a;
    cin>>n>>m>>k;
    for (int i=0;i<n;i++)   {
        cin>>a;
        mll[a]++;
    }
    map<ll,ll>::iterator it0=mll.begin();
    for (;it0!=mll.end();it0++)
        vp.push_back(*it0);
    sort(vp.begin(),vp.end(),cmp);
//    for (int i=0;i<(int)vp.size();i++)
//        cout<<i<<' '<<vp[i].first<<' '<<vp[i].second<<endl;
    if (vp[0].second>1)  ans=(vp[0].first)*m;
    else    ans=m/(k+1)*(k*vp[0].first+vp[1].first)+m%(k+1)*vp[0].first;
    cout<<ans<<endl;
    return 0;
}



