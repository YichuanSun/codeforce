#include <bits/stdc++.h>
#define N 20
using namespace std;
int a[N],spot,n;

void dfs(int lv);
int smm(int t[]);
void dfs(int lv);
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for (int i=0;i<n;i++)   cin>>a[i];
    dfs(0);
    if (spot)   cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
    return 0;
}

void dfs(int lv)  {
    if (spot||lv>=n)   return;
    for (int i=lv;i<n;i++)   {
        a[i]=-a[i];
        if (smm(a)%360==0)  {spot=1;return;}
        dfs(lv+1);
        a[i]=-a[i];
    }
}

int smm(int t[])    {
    int s=0;
    for (int i=0;i<n;i++)   s+=t[i];
    return s;
}
