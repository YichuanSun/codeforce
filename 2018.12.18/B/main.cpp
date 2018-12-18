#include <bits/stdc++.h>
#define N 105
using namespace std;
int a[N];
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,sum=0;
    cin>>n;
    for (int i=0;i<n;i++)   cin>>a[i];
    sort(a,a+n);
    for (int i=0;i<n;i+=2)
        sum+=a[i+1]-a[i];
    cout<<sum<<endl;
    return 0;
}
