#include <bits/stdc++.h>
using namespace std;

int main()  {
    int n,v,ans=0,pos=0;
    cin>>n>>v;
    if (n-1<=v) {
        cout<<v<<endl;
        return 0;
    }
    else    {
        ans=v;
        for (int i=2;i<n;i++)   {
            ans+=i;
            pos++;
            if (pos+v>=n-1)   {
                cout<<ans<<endl;
                return 0;
            }
        }
    }
    return 0;
}
