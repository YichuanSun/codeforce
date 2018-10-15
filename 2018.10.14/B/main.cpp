#include <bits/stdc++.h>
using namespace std;

int main()  {
    int n,a;
    cin>>n;
    for (int i=0;i<n;i++)   {
        int ans=1;
        cin>>a;
        if (!a) {cout<<1<<endl;continue;}
        while (a)   {
            if (a&1)    ans<<=1;
            a>>=1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
