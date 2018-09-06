#include <bits/stdc++.h>
using namespace std;
int cnt[1005],claim[1005];
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)  cin>>claim[i];
    for (int i=1;i<=n;i++)  {
        int t=claim[i];
        cnt[i]++;
        while (true)    {
            cnt[t]++;
            t=claim[t];
            if (cnt[t]>1) break;
        }
        cout<<t<<(i==n?'\n':' ');
        fill(cnt,cnt+1005,0);
    }
    return 0;
}
