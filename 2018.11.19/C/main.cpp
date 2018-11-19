#include <bits/stdc++.h>
#define N 100005
using namespace std;
int a[N],b[N];
int main()  {
    int n;
    cin>>n;
    for (int i=0;i<n;i++)   cin>>a[i];
    if (n==1)   {cout<<1<<endl;return 0;}
    if (a[0]>a[1])  b[0]=5;
    else    b[0]=1;
    for (int i=1;i<n;i++)   {
        if (a[i]<a[i-1])    b[i]=b[i-1]-1;
        else if (a[i]>a[i-1])   b[i]=b[i-1]+1;
        else {}
    }
    for (int i=0;i<n;i++)
        cout<<b[i]<<(i==n-1?'\n':' ');
    return 0;
}
