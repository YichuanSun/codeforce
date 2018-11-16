#include <bits/stdc++.h>
#define N 1005
using namespace std;
int a[N],note[N];
//set<int> sti;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,ct=0;
    cin>>n;
    for (int i=0;i<n;i++)   cin>>a[i];
    while (ct<n)    {
        int nxt=ct+1,nw=ct;
        while (a[nxt]-a[ct]==1) {
            ct=nxt,nxt=ct+1;
        }
        ct++;
        note[a[nw]]=nxt-nw;
//        cout<<nw<<endl;
//        sti.insert(nw);
    }
//    set<int>::iterator it1=sti.begin();
//    for (;it1!=sti.end();it1++)
//        cout<<*it1<<' '<<a[*it1]<<' '<<note[a[*it1]]<<endl;
    int mx=-1;
    for (int i=2;i<1000;i++)    {
        if (note[i]+i>1000)  mx=max(mx,note[i]-1);
        else if (mx<note[i]-2)    mx=note[i]-2;
    }
    int ans=max(mx,note[1]-1);
    cout<<max(ans,0)<<endl;
    return 0;
}
