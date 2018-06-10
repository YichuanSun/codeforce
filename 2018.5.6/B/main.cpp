#include <bits/stdc++.h>
using namespace std;
map<string,int> map_str;
bool cmp(pair<string,int> a,pair<string,int> b)   {
    if (a.second>b.second)    return true;
    else return false;
}
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n,mmax=-1;
    cin>>n;
    string s;
    cin>>s;
    for (int i=0;i<n-1;i++)   {
        string stemp;
        stemp=s.substr(i,2);        //666
        map_str[stemp]++;
    }
    vector<pair<string,int>> vmap;
    map<string,int>::iterator iter;     //666
    for (iter=map_str.begin();iter!=map_str.end();iter++)   {   //666
        //cout<<iter->first<<'\t'<<iter->second<<endl;
        vmap.push_back(make_pair(iter->first,iter->second));
    }
    sort(vmap.begin(),vmap.end(),cmp);
    string ans;
    for (auto x:vmap)   {
        if (x.second>mmax)  {
                ans=x.first;
                mmax=x.second;
        }
    }
    cout<<ans<<endl;
    return 0;
}
