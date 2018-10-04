#include <bits/stdc++.h>
#define N 2005
#define INF 2000000005
using namespace std;
int n,m,a[N],b[N],x;
int main()  {
    ios::sync_with_stdio(false);
    cin,tie(0);
    cin>>n>>m;
    for (int i=0;i<n;i++)   cin>>a[i];
    for (int i=0;i<m;i++)   cin>>b[i];
    cin>>x;
    for (int i=0;i<n;i++)   {
        ll tp=a[i];
        for (int j=0;j<m;j++)   {
            if (tp>INF) break;
            tp*=b[j];
            if ()
        }
    }
    return 0;
}
