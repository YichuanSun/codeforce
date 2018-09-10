#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> v;
void brute(int lev,ll cu,int cnt)    {
    if (lev==18)    {
        v.push_back(cu);
        return;
    }
    brute(lev+1,cu*10,cnt);
    if (cnt<3)  {
        for (int i=1;i<=9;i++)
            brute(lev+1,cu*10+i,cnt+1);
    }
}

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    brute(0,0,0);
    v.push_back(1e18);
    ll l,r;
    int n;
    cin>>n;
    for (int i=0;i<n;i++)   {
        cin>>l>>r;
        int ans=upper_bound(v.begin(),v.end(),r)-lower_bound(v.begin(),v.end(),l);
        cout<<ans<<endl;
    }
    return 0;
}
