#include <bits/stdc++.h>
#define N 200002
using namespace std;
int a[N];
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,s;
    cin>>n>>s;
    for (int i=0;i<n;i++)   cin>>a[i];
    sort(a,a+n);
    int i;
    for (i=0;i<n;i++)
        if (a[i]==s)    break;
    int sum=0;
    if (i>(n-1)/2)  {
        for (int j=(n-1)/2;j<i;j++)
            sum+=s-a[j];
    }
    else    if (i<(n-1)/2)  {
        for (int j=i;j<=(n-1)/2;j++)
            sum+=a[j]-s;
    }
    cout<<sum<<endl;
    return 0;
}
