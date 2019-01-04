#include <bits/stdc++.h>
using namespace std;
set<char> ci;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s1,s2;
    cin>>s1;
    for (int i=0;i<5;i++)   {
        cin>>s2;
        ci.insert(s2[0]);
        ci.insert(s2[1]);
    }
    if (ci.count(s1[0])||ci.count(s1[1]))
        cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
    return 0;
}
