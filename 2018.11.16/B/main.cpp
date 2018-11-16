#include <bits/stdc++.h>
#define N 103
using namespace std;
int a[N];
int main()  {
    int n,nw=0,cnt=0;
    cin>>n;
    for (int i=0;i<n;i++)   cin>>a[i];
    while (nw<n)   {
        if (nw+2<=n-1&&a[nw]==1&&a[nw+1]==0&&a[nw+2]==1)    {
            cnt++;
            nw+=3;
        }
        else    nw++;
    }
    cout<<cnt<<endl;
    return 0;
}
