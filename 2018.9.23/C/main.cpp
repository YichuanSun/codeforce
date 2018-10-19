//15
//333703919182090
#include <bits/stdc++.h>
#define N 205
using namespace std;
char a[N];
int b[N],c[N];
int main()  {
    int n,ok=0,cnt=1;
    cin>>n;
    for (int i=0;i<n;i++)   {
        cin>>a[i];
        b[i+1]=a[i]-'0'+b[i];
    }
    if (b[n]==0)    {cout<<"YES"<<endl;return 0;}
    for (;a[n-1]=='0';n--);
//    for (int i=0;i<=n;i++)  cout<<b[i]<<' ';
//    cout<<endl;
    for (int i=1;i<=1000;i++)  {
        if (b[n]<=i)    continue;
        for (int k=1;k<=n;k++)  {
            if (b[k]%i==0)  c[k]=b[k]/i;
            else    c[k]=0;
        }
        for (int j=1;j<=n;j++)  {
            if (j!=n&&c[j]==cnt)  cnt++;
            if (j==n&&c[j]==cnt)    ok=1;
        }
        if (ok) break;
        cnt=1;
    }
    if (ok) cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
    return 0;
}
