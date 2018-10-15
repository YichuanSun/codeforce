#include <bits/stdc++.h>
#define N 10005
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++)   {
        int bi[N];
        ll a,cnt=0,ct=0;
        cin>>a;
        ll ta=a;
        while (ta)  {
            bi[cnt++]=(ta&1);
            ta>>=1;
        }
        reverse(bi,bi+cnt);
        for (int i=0;i<cnt;i++) cout<<bi[i];
        cout<<'\t';
        for (int j=0;j<=a;j++)
            if (a-(a^j)==j) ct++;
        cout<<ct<<endl;
    }
    return 0;
}
