#include <bits/stdc++.h>
#define N 105
using namespace std;
int s[N],des[N];
char ans[N];
map<int,int> mp;
vector<int> three,one;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    fill(ans,ans+N,'B');
    int n;
    cin>>n;
    for (int i=0;i<n;i++)   {
        cin>>s[i];
        mp[s[i]]++;
        des[s[i]]=i;
    }
    map<int,int>::iterator it1=mp.begin();
    for (;it1!=mp.end();it1++)  {
        if ((*it1).second==1)
            one.push_back((*it1).first);
        else if ((*it1).second>=3)
            three.push_back((*it1).first);
    }
    if (((int)one.size()&1)&&three.empty())
        cout<<"NO"<<endl;
    else {
        cout<<"YES"<<endl;
        if (!((int)one.size()&1))    {
            for (int i=0;i<(int)one.size()/2;i++) ans[des[one[i]]]='A';
            for (int i=0;i<n;i++)   cout<<ans[i];
            cout<<endl;
        }
        else if (((int)one.size()&1)&&!three.empty())  {
            for (int i=0;i<(int)one.size()/2;i++) ans[des[one[i]]]='A';
            ans[des[three[0]]]='A';
            for (int i=0;i<n;i++)   cout<<ans[i];
            cout<<endl;
        }
    }
    return 0;
}
