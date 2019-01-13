#include <bits/stdc++.h>
#define N 105
using namespace std;
int a[N];
bool used[N];
int cnt(int a[],int n,int t)  {
    int ct=0;
    if (t==-1)  {
        for (int i=0;i<n;i++)
            if (!used[i]&&a[i]==-1)   ct++;
        return ct;
    }
    else    {
        for (int i=0;i<n;i++)
            if (!used[i]&&a[i]==1)    ct++;
        return ct;
    }
}
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k,mx=-1;
    cin>>n>>k;
    for (int i=0;i<n;i++)   cin>>a[i];
    for (int b=0;b<k;b++)   {
        for (int i=0;b+i*k<=n;i++)  used[b+i*k]=1;
        mx=max(mx,abs(cnt(a,n,1)-cnt(a,n,-1)));
        for (int i=0;i<N;i++)   used[i]=0;
    }
    cout<<mx<<endl;
    return 0;
}
