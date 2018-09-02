#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=35;
ll a[N];
int main()  {
    a[0]=0,a[1]=1,a[2]=2,a[3]=3;
    for (int i=4;i<N;i++)
        a[i]=2*a[i-1];
    int n,l=0;
    cin>>n;
    if (n==1)   {
        cout<<1<<endl;
        return 0;
    }
    if (n==2)   {
        cout<<2<<endl;
        return 0;
    }
    if (n==3)   {
        cout<<2<<endl;
        return 0;
    }
    for (int i=1;i<N-1;i++)   {
        if (a[i]>=n)    {
            l=i-1;
            break;
        }
    }
    cout<<l<<endl;
    return 0;
}
