#include <bits/stdc++.h>
using namespace std;

const int maxn = (int)3e5 + 3;
const int maxa = (1 << 20 ) +3;

int n,a[maxn],cnt[2][maxa];

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    int x=0;
    for (int i=0;i<n;i++)   cin>>a[i];
    cnt[1][0]=1;        //这个初始化我是真没看明白
    int res=0;
    for (int i=0;i<n;i++)   {
        x^=a[i];
        res+=cnt[i%2][x];
        ++cnt[i%2][x];
    }
    cout<<res<<endl;
    return 0;
}
