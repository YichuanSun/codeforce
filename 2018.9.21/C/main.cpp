#include <bits/stdc++.h>
#define N 100005
using namespace std;
vector<int> s;
map<int,int> mp;
int tdiv[N/5],ttd[N/5];
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for (int i=0;i<n;i++)   {
        cin>>t;
        if (!mp[t]) {mp[t]=1;s.push_back(t)};
    }
    if ((int)s.size()==1)   {cout<<-1<<endl;return 0;}
    sort(s.begin(),s.end());
    int cnt=0;
    for (int r=0;r<s[0];r++)
        if (s[0]%r==0)  tdiv[cnt++]=r;
    for (int i=0;i<cnt;i++)
        if (s[1])
    for (int i=0;i<(int)s.size();i++)   {

    }
    return 0;
}
