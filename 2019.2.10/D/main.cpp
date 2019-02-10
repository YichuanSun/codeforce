#include <bits/stdc++.h>
#define N 5005
using namespace std;
int a[N];
vector<set<int> > vsi;
vector<int> vi;
set<int> si;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,ta=-1,spot=-1;
    cin>>n;
    for (int i=0;i<n;i++)   cin>>a[i];
    for (int i=1;i<=n;i++)  vector.push_back(si);
    for (int i=0;i<n;i++)   {
        if (i!=0&&i!=n-1)   {
            vsi[a[i]].insert(a[i-1]);
            vsi[a[i]].insert(a[i+1]);
        }
        else if (i==0)   vsi[a[0]].insert(a[i+1]);
        else if (i==n-1) vsi[a[n-1]].insert(a[i-1]);
    }
    for (int i=1;i<=n;i++)
        if ((int)vsi[i].size()>ta)  {
            ta=(int)vsi[i].size();
            spot=i;
        }
    int now=0,cnt=0;
    for (int i=0;i<n;i++)
        if (a[i]!=spot) vi.push_back(a[i]);
    return 0;
}



