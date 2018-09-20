#include <bits/stdc++.h>
#define INF 10000000
using namespace std;
struct info{
    int val;
    int f[4]={0,0,0,0};
};
string ts;
vector<info> ao,bo,co,abc,two;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,res1=INF,res2=INF,res3=INF;
    cin>>n;
    for (int i=0;i<n;i++)   {
        info ti;
        cin>>ti.val>>ts;
        for (int i=0;i<(int)ts.size();i++)  {
            if (ti.f[0]&&ti.f[1]&&ti.f[2])  break;
            ti.f[ts[i]-'A']=1;
        }
        if (ti.f[0]&&!ti.f[1]&&!ti.f[2])    ao.push_back(ti);
        else if (!ti.f[0]&&ti.f[1]&&!ti.f[2])   bo.push_back(ti);
        else if (!ti.f[0]&&!ti.f[1]&&ti.f[2])    co.push_back(ti);
        else if (ti.f[0]&&ti.f[1]&&ti.f[2]) abc.push_back(ti);
        two.push_back(ti);
    }
    int amin=INF,bmin=INF,cmin=INF;
    if (!ao.empty()&&!bo.empty()&&!co.empty())  {
        for (int i=0;i<(int)ao.size();i++)  if (ao[i].val<amin) amin=ao[i].val;
        for (int i=0;i<(int)bo.size();i++)  if (bo[i].val<bmin) bmin=bo[i].val;
        for (int i=0;i<(int)co.size();i++)  if (co[i].val<cmin) cmin=co[i].val;
        res1=amin+bmin+cmin;
    }
    for (int i=0;i<(int)abc.size();i++) if (res2>abc[i].val)    res2=abc[i].val;
    for (int i=0;i<(int)two.size();i++) {
        for (int j=i+1;j<(int)two.size();j++)   {
            int fp[4]={0,0,0,0};
            for (int k=0;k<3;k++)   fp[k]=two[i].f[k]+two[j].f[k];
            if (fp[0]&&fp[1]&&fp[2])
                if (res3>two[i].val+two[j].val) res3=two[i].val+two[j].val;
        }
    }
    int ans=min(res1,min(res2,res3));
    if (ans==INF)   cout<<-1<<endl;
    else    cout<<ans<<endl;
    return 0;
}






















//下面的算法存在问题，这种局部最优不等于总体最优
//4
//1 A
//1 B
//1 C
//2 ABC
//#include <bits/stdc++.h>
//using namespace std;
//struct node{
//    int val;
//    string s;
//    int f[4]={0,0,0,0};
//};
//string ts;
//node nt;
//vector<node> sa,sb,sc;
//vector<int> anslist;
//bool ii(int f[]);
//int fdmin(vector<int> a);
//bool cmp(node a,node b) {
//    if (a.val<b.val)    return true;
//    else    return false;
//}
//int main()  {
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    int n,v;
//    cin>>n;
//    for (int i=0;i<n;i++)   {
//        cin>>v;
//        cin>>ts;
//        nt.val=v,nt.s=ts;
//        for (int j=0;j<(int)ts.size();j++)  {
//            if (nt.f[0]&&nt.f[1]&&nt.f[2])  break;
//            nt.f[ts[j]-'A']=1;
//        }
//        if (nt.f[0])    sa.push_back(nt);
//        if (nt.f[1])    sb.push_back(nt);
//        if (nt.f[2])    sc.push_back(nt);
//        fill(nt.f,nt.f+4,0);
//    }
//    sort(sa.begin(),sa.end(),cmp);
//    sort(sb.begin(),sb.end(),cmp);
//    sort(sc.begin(),sc.end(),cmp);
//    int dd[4]={0,0,0,0};
//    if (sa.empty()||sb.empty()||sc.empty()){
//        cout<<-1<<endl;
//        return 0;
//    }
//    if (ii(sa[0].f))   anslist.push_back(sa[0].val);
//    if (ii(sb[0].f))   anslist.push_back(sb[0].val);
//    if (ii(sc[0].f))   anslist.push_back(sc[0].val);
//    for (int i=0;i<3;i++)   dd[i]=sa[0].f[i]+sb[0].f[i];
//    if (ii(dd)) anslist.push_back(sa[0].val+sb[0].val);
//    fill(dd,dd+4,0);
//    for (int i=0;i<3;i++)   dd[i]=sa[0].f[i]+sc[0].f[i];
//    if (ii(dd)) anslist.push_back(sa[0].val+sc[0].val);
//    fill(dd,dd+4,0);
//    for (int i=0;i<3;i++)   dd[i]=sb[0].f[i]+sc[0].f[i];
//    if (ii(dd)) anslist.push_back(sb[0].val+sc[0].val);
//    fill(dd,dd+4,0);
//    anslist.push_back(sa[0].val+sb[0].val+sc[0].val);
//    cout<<fdmin(anslist)<<endl;
//    return 0;
//}
//
//bool ii(int f[])    {
//    if (f[0]&&f[1]&&f[2])   return true;
//    else    return false;
//}
//
//int fdmin(vector<int> a)    {
//    int mi=1000000;
//    for (int i=0;i<(int)a.size();i++)
//        if (a[i]<mi)    mi=a[i];
//    return mi;
//}
