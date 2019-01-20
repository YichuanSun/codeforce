#include <bits/stdc++.h>
#define N 1005
using namespace std;
int a[N],n;
int cal(int i)  {
    int sum=0;
    for (int j=0;j<n;j++)   {
        if (i>a[j]) sum+=i-a[j]-1;
        else if (i<a[j])    sum+=a[j]-i-1;
        else ;
    }
    return sum;
}
int main()  {
    cin>>n;
    for (int i=0;i<n;i++)   cin>>a[i];
    sort(a,a+n);
    int ansi=-1,ans=INT_MAX;
    for (int i=1;i<=100;i++)   {
        int ts=cal(i);
        if (ts<ans) ansi=i,ans=ts;
    }
    cout<<ansi<<' '<<ans<<endl;
    return 0;
}
