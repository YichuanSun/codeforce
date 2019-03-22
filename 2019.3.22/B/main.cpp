#include <bits/stdc++.h>
using namespace std;

int main()  {
    int n,m;
    cin>>n;
    while (n--) {
        string s;
        cin>>m;
        cin>>s;
        int a1=100000,a2=100000;
        for (int i=0;i<m;i++)
            if (s[i]=='>')  {
                a1=i;
                break;
            }
        for (int i=m-1;i>=0;i--)    {
            if (s[i]=='<')  {
                a2=m-1-i;
                break;
            }
        }
        int ans=min(a1,a2);
        cout<<ans<<endl;
    }
    return 0;
}
