#include <bits/stdc++.h>
using namespace std;
struct node{
    int val;
    string s;
    int f[4]={0,0,0,0};
};
string ts;
node nt;
vector<node> sa,sb,sc;
vector<int> anslist;
bool ii(int f[]);
int fdmin(vector<int> a);
bool cmp(node a,node b) {
    if (a.val<b.val)    return true;
    else    return false;
}
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,v;
    cin>>n;
    for (int i=0;i<n;i++)   {
        cin>>v;
        cin>>ts;
        nt.val=v,nt.s=ts;
        for (int j=0;j<(int)ts.size();j++)  {
            if (nt.f[0]&&nt.f[1]&&nt.f[2])  break;
            nt.f[ts[j]-'A']=1;
        }
        if (nt.f[0])    sa.push_back(nt);
        if (nt.f[1])    sb.push_back(nt);
        if (nt.f[2])    sc.push_back(nt);
        fill(nt.f,nt.f+4,0);
    }
    sort(sa.begin(),sa.end(),cmp);
    sort(sb.begin(),sb.end(),cmp);
    sort(sc.begin(),sc.end(),cmp);
    int dd[4]={0,0,0,0};
    if (sa.empty()||sb.empty()||sc.empty()){
        cout<<-1<<endl;
        return 0;
    }
    if (ii(sa[0].f))   anslist.push_back(sa[0].val);
    if (ii(sb[0].f))   anslist.push_back(sb[0].val);
    if (ii(sc[0].f))   anslist.push_back(sc[0].val);
    for (int i=0;i<3;i++)   dd[i]=sa[0].f[i]+sb[0].f[i];
    if (ii(dd)) anslist.push_back(sa[0].val+sb[0].val);
    fill(dd,dd+4,0);
    for (int i=0;i<3;i++)   dd[i]=sa[0].f[i]+sc[0].f[i];
    if (ii(dd)) anslist.push_back(sa[0].val+sc[0].val);
    fill(dd,dd+4,0);
    for (int i=0;i<3;i++)   dd[i]=sb[0].f[i]+sc[0].f[i];
    if (ii(dd)) anslist.push_back(sb[0].val+sc[0].val);
    fill(dd,dd+4,0);
    anslist.push_back(sa[0].val+sb[0].val+sc[0].val);
    cout<<fdmin(anslist)<<endl;
    return 0;
}

bool ii(int f[])    {
    if (f[0]&&f[1]&&f[2])   return true;
    else    return false;
}

int fdmin(vector<int> a)    {
    int mi=1000000;
    for (int i=0;i<(int)a.size();i++)
        if (a[i]<mi)    mi=a[i];
    return mi;
}
