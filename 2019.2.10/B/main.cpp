#include <bits/stdc++.h>
#define N 200005
using namespace std;
typedef pair<int,int> pii;

bool cmp(const pii a,const pii b)   {
    return a.first>b.first;
}
int des[N],ans[N];
long long mx;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m,k;
    cin>>n>>m>>k;
    vector<pii> a(n);
    for (int i=0;i<n;i++)   {
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(a.begin(),a.end(),cmp);
    for (int i=0;i<m*k;i++){
        mx+=a[i].first;
        des[i]=a[i].second;
    }
    sort(des,des+m*k);
    for (int i=0;i<k-1;i++)
        ans[i]=des[(i+1)*m-1];      //key
    cout<<mx<<endl;
    for (int i=0;i<k-1;i++)
        cout<<ans[i]+1<<' ';
    cout<<endl;
    return 0;
}
