#include <bits/stdc++.h>
using namespace std;
map<int,int> mp;
vector<int> v;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,t,des[105];
    char st[105];
    fill(st,st+105,'B');
    fill(des,des+105,-1);
    cin>>n;
    for (int i=0;i<n;i++)   {
        cin>>t;
        mp[t]++;
        des[t]=i;
    }
    map<int,int>::iterator it1=mp.begin();
    for (;it1!=mp.end();it1++)
        if ((*it1).second==1)
            v.push_back((*it1).first);
    if ((int)v.size()&1)    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    if ((int)v.size())  {
        for (int i=0;i<(int)v.size()/2;i++)
            st[des[v[i]]]='A';
        for (int i=0;i<n;i++)   cout<<st[i];
        cout<<endl;
    }
    else {
        for (int i=0;i<n/2;i++)   st[i]='A';
        for (int i=0;i<n;i++)   cout<<st[i];
        cout<<endl;
    }
    return 0;
}
