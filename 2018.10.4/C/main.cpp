#include <bits/stdc++.h>
#define N 2005
#define INF 0x7fffffff
using namespace std;
typedef long long ll;
int a[N],b[N];
ll ma[N],x;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m,ans=0;
    fill(ma,ma+N,INF);
    cin>>n>>m;
    for (int i=1;i<=n;i++)  {cin>>a[i];a[i]=a[i-1]+a[i];}
    for (int i=1;i<=m;i++)  {cin>>b[i];b[i]=b[i-1]+b[i];}
    cin>>x;
    for (int i=1;i<=n;i++)  {
        for (int j=i;j<=n;j++)  {
            ll tsm=a[j]-a[i-1];
            int len=j-i+1;
            ma[len]=min(ma[len],tsm);
        }
    }
//    for (int i=1;i<=m;i++)  { //此法错误
//        ll c=x/ma[i];
//        int p1=1,p2=n,f=0;
//        while (p1<p2)   {       //用双指针法，则无法遍历所有的可能的区间值，就是说b[p2]-b[p1]不会包括所有的部分和值，也就错了
//            if (c<b[p2]-b[p1])  p1++;
//            else if (c>b[p2]-b[p1]) p2--;
//            else {f=1;break;}
//        }
//        if (f==0)   continue;
//        int len=p2-p1+1;
//        cout<<"len: "<<len<<" i:"<<i<<endl;
//        ans=max(ans,len*i);
//    }
    for (int i=1;i<=m;i++)  {
        for (int j=i;j<=m;j++)  {
            ll sc=x/(b[j]-b[i-1]);
            int len=j-i+1;
            int mxa=upper_bound(ma+1,ma+n+1,sc)-ma-1;
            ans=max(ans,len*mxa);
        }
    }
    cout<<ans<<endl;
    return 0;
}
