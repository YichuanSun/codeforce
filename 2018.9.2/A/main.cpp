#include <bits/stdc++.h>
#define N 36
using namespace std;
typedef long long ll;
ll a[N];
int main()  {
    int n;
    ll c=2;
    cin>>n;
    for (int i=1;i<N;i++)   {
        a[i]=c-1;
        c*=2;
    }
    //for (int i=0;i<N;i++)   cout<<a[i]<<endl;
    int ans=0;
    for (int i=1;i<N;i++)   {
        if (a[i]>=n) {
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}



















//
//
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()  {
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    int n,t=1,ans=0;
//    cin>>n;
//    while (n>0)   {
//        ans++;
//        if (n<=t)   break;
//        n-=t;
//        t<<=1;
//    }
//    cout<<ans<<endl;
//    return 0;
//}
