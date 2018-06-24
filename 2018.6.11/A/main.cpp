#include <bits/stdc++.h>
using namespace std;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    string s;
    cin>>s;
    if (s.size()<3)   {
        cout<<"No\n";
        return 0;
    }
    for (int i=0;i<s.size()-2;i++)   {
        if (s[i]+s[i+1]+s[i+2]=='A'+'B'+'C'&&s[i]!=s[i+2])    {
            cout<<"Yes\n";
            return 0;
        }
    }
    cout<<"No\n";
    return 0;
}
