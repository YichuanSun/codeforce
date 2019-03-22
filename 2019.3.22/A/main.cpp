#include <bits/stdc++.h>
#define N 10005
using namespace std;
int a[N];
int main()  {
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)   cin>>a[i];
    int ii=1,cnt=0;
    while (ii<=n)  {
        int nw=a[ii];
        while (nw>ii&&ii<=n)    {
            ii++;
            nw=max(nw,a[ii]);
        }
        if (a[ii]<=ii)  ii++;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
