#include <bits/stdc++.h>
using namespace std;
typedef pair<char,int> p;
map<char,int> mp;
vector<p> v;
bool cmp(p a,p b)   {
    return a.second>b.second;
}
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k,cnt=0;
    string s;
    cin>>n>>k;
    cin>>s;
    for (int i=0;i<s.size();i++)    {
        if (mp[s[i]]==0)   cnt++;
        mp[s[i]]++;
    }
    if (cnt<k)  cout<<0<<endl;
    else    {
        for (map<char,int>::iterator j=mp.begin();j!=mp.end();j++)
            v.push_back(*j);
        sort(v.begin(),v.end(),cmp);
        int sum=0,mi=1000000;
        for (int i=0;i<k;i++)   {
            sum+=v[i].second;
            if (v[i].second<mi) mi=v[i].second;
        }
        cout<<mi*k+s.size()-sum<<endl;
    }
    return 0;
}
