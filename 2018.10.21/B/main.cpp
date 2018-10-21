#include <bits/stdc++.h>
#define N 100005
using namespace std;
int a[N],b[N],t[N],n,fg;
void dfs(int i);
int main()  {
    cin>>n;
    for (int i=0;i<n-1;i++)   cin>>a[i];
    for (int i=0;i<n-1;i++) cin>>b[i];
    for (int i=0;i<=3;i++)  {
        t[0]=i;
        dfs(0);
        int f=1;
        for (int i=0;i<n-1;i++) {
            int ta=t[i]|t[i+1];
            int tb=t[i]&t[i+1];
            if (ta!=a[i]||tb!=b[i]){
                f=0;break;
            }
        }
        if (f)  {
            cout<<"YES"<<endl;
            cout<<t[0];
            for (int i=1;i<n;i++)   cout<<' '<<t[i];
            cout<<endl;
            fg=1;
            break;
        }
    }
    if (!fg)    cout<<"NO"<<endl;
    return 0;
}

void dfs(int i) {
    if (i==n)   return;
    for (int j=0;j<=3;j++)  {
        int ta=t[i]|j;
        int tb=t[i]&j;
        if (ta==a[i]&&tb==b[i])  {
            t[i+1]=j;
            dfs(i+1);
        }
    }
}
