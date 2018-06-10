#include <bits/stdc++.h>
using namespace std;
map<string,int> map_str;
bool cmp(pair<string,int> &a,pair<string,int> &b)   {
    if (a.second>b.second)    return true;
    else return false;
}
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    for (int i=0;i<n-1;i++)   {
        string stemp;
        stemp=s.substr(i,2);
        map_str[stemp]++;
    }
    map<string,int>::iterator iter;
    for (iter=map_str.begin();iter!=map_str.end();iter++)   {
        cout<<iter->first<<'\t'<<iter->second<<endl;
    }
    sort(map_str.begin(),map_str.end(),cmp);
    return 0;
}
