#include <bits/stdc++.h>
#define N 1005
using namespace std;

int e[N],n,r;

int main()  {
    cin>>n>>r;
    for (int i=0;i<n;i++)   cin>>e[i];
    int i,ans=0,len=0;
    for (i=0;i<n;i++)   {
        for (int j=i==0?i+r-1:i+r+r-1;j>=i;j--)    {
            if (j>=n)   continue;
            if (e[j]==1)    {
                len+=j-i+1;
                ans++;
                i=j;
                break;
            }
        }
    }
    cout<<len<<endl;
    cout<<"ans:"<<ans<<endl;
    return 0;
}
