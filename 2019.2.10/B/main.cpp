#include <bits/stdc++.h>
#define N 200005
using namespace std;
typedef pair<int,int> pii;
vector<pii> a(N);
bool cmp(pii a,pii b)   {
    return a.first>b.first;
}
int des[N],mx;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m,k;
    cin>>n>>m>>k;
    for (int i=0;i<n;i++)   {
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(a.begin(),a.end(),cmp);
    for (int i=0;i<m*k;i++){
        mx+=a[i].first;
        des[i]=a[i].second;
    }
    return 0;
}
