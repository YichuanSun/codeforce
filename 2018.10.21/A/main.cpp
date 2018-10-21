#include <bits/stdc++.h>
using namespace std;

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int w,h,k,ans=0;
    cin>>w>>h>>k;
    for (int i=0;i<k;i++)   {
        ans+=(w+h-2)*2;
        w-=4,h-=4;
    }
    cout<<ans<<endl;
    return 0;
}
