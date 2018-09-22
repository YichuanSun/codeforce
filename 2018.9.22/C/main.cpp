#include <bits/stdc++.h>
#define N 200005
using namespace std;
int a[N],b[N],rk[N],rk0[N],aa[N],bb[N];
bool cmp(int a,int b)   {return a>b;}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,d,spot=0,ans1,ans2;
    cin>>n>>d;
    int c=n-1;
    for (int i=0;i<n;i++)   cin>>a[i];
    for (int i=0;i<n;i++)   cin>>b[i];
    spot=a[d-1]+=b[0];
    if (d>=2)   {
        for (int i=0;i<n;i++)   aa[i]=a[i];
        for (int i=0;i<d-1;i++)
            aa[i]+=b[c--];
        sort(aa,aa+n,cmp);
        for (int i=0;i<n;i++)
            cout<<' '<<aa[i];
        cout<<endl;
        rk[0]=1,rk0[0]=1;
        if (spot==aa[0]) ans1=1;
        else
            for (int i=1;i<n;i++)   {
                if (aa[i]==aa[i-1])   rk[i]=rk[i-1];
                else rk[i]=i+1;
                if (aa[i]==spot) {
                    ans1=rk[i];
                    break;
                }
            }
        for (int i=0;i<n;i++)
            cout<<rk[i]<<' ';
        cout<<endl;
        for (int i=0;i<n;i++)   bb[i]=a[i];
        for (int i=0;i<d-1;i++)
            bb[i]+=b[i+1];
        sort(bb,bb+n,cmp);
        if (spot==bb[0])    ans2=1;
        else
            for (int i=1;i<n;i++)   {
                if (bb[i]==bb[i-1])   rk0[i]=rk0[i-1];
                else rk0[i]=i+1;
                if (bb[i]==spot) {
                    ans2=rk0[i];
                    break;
                }
            }
        cout<<min(ans1,ans2)<<endl;
    }
    else cout<<1<<endl;
    return 0;
}
