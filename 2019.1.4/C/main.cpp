#include <bits/stdc++.h>
#define N 100005
using namespace std;
vector<int> vp,po,ne,ze;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,ans=0;
    string s;
    cin>>n;
    for (int i=0;i<n;i++)   {
        cin>>s;
        vp.push_back(0);
        for (int j=0;j<(int)s.size();j++)   {
            if (s[j]==')')  vp[i]++;
            else if (s[j]=='(') vp[i]--;
        }
        if (vp[i]>0)  po.push_back(vp[i]);
        else if (vp[i]<0) ne.push_back(-vp[i]);
        else ze.push_back(vp[i]);
    }
    sort(po.begin(),po.end());
    sort(ne.begin(),ne.end());
    int pi=0,ni=0;
    while (pi<(int)po.size()&&ni<(int)ne.size())  {
        if (po[pi]==ne[ni]) pi++,ni++,ans++;
        else if (po[pi]<ne[ni]) pi++;
        else ni++;
    }
    if (ans==0) ans=ze.size()/2;
    cout<<ans<<endl;
    return 0;
}
