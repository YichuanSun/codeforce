#include <bits/stdc++.h>
#define N 200005
using namespace std;
int ta,n,a[N],b[N];
stack<int> sti;
bool isin[N];
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for (int i=0;i<n;i++)   cin>>a[i];
    for (int i=n-1;i>=0;i--)    sti.push(a[i]);
    for (int i=0;i<n;i++)   cin>>b[i];
    for (int i=0;i<n;i++)   {
        if (isin[b[i]]) cout<<0;
        else    {
            int cnt=0;
            while (sti.top()!=b[i]) {
                isin[sti.top()]=1;
                sti.pop();
                cnt++;
            }
            if (sti.top()==b[i])    {
                isin[sti.top()]=1;
                sti.pop();
                cnt++;
            }
            cout<<cnt;
        }
        if (i!=n-1) cout<<' ';
        else    cout<<endl;
    }
    return 0;
}
