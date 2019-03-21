#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()  {
    ll ans=0,n;
    cin>>n;
    string s;
    cin>>s;
    for (int i=0;i<n;i++)   {
        int t=s[i]-'0';
        if ((t&1)==0)   ans+=i+1;
    }
    cout<<ans<<endl;
    return 0;
}
