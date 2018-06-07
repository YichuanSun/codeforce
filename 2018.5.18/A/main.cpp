#include <bits/stdc++.h>
using namespace std;

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n,a[1005];
    string s;
    cin>>n;
    cin>>s;
    for (int i=0;i<n;i++)   a[i]=s[i]-'0';
    for (int i=0;i<n-2;i++)     //三连0
    {
        if (a[i]+a[i+1]+a[i+2]==0)  {
            cout<<"No\n";
            return 0;
        }
    }
    for (int i=0;i<n-1;i++)     //二连1
        if (a[i]+a[i+1]==2) {
            cout<<"No\n";
            return 0;
        }
    if (a[0]+a[1]==0||a[n-2]+a[n-1]==0) {
        cout<<"No\n";
        return 0;
    }
    cout<<"Yes\n";
    return 0;
}
