#include <bits/stdc++.h>
using namespace std;

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,t=1,ans=0;
    cin>>n;
    while (n>0)   {
        ans++;
        if (n<=t)   break;
        n-=t;
        t<<=1;
    }
    cout<<ans<<endl;
    return 0;
}





















//我没搞明白为什么2^n是最好结果
//但是试验之后确实是。而且我实验的序列
//不合理性现在看来很明显
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const int N=35;
//ll a[N];
//int main()  {
//    a[0]=0,a[1]=1,a[2]=2,a[3]=3;
//    for (int i=4;i<N;i++)
//        a[i]=2*a[i-1];
//    int n,l=0;
//    cout<<a[31]<<'\t'<<a[32]<<endl;
//    cin>>n;
//    if (n==1)   {
//        cout<<1<<endl;
//        return 0;
//    }
//    if (n==2)   {
//        cout<<2<<endl;
//        return 0;
//    }
//    if (n==3)   {
//        cout<<2<<endl;
//        return 0;
//    }
//    for (int i=1;i<N-1;i++)   {
//        if (a[i]>=n)    {
//            l=i-1;
//            break;
//        }
//    }
//    cout<<l<<endl;
//    return 0;
//}
