#include <bits/stdc++.h>
#define N 1000005
using namespace std;
bool a[N],b[N];
int main()  {
    int n,ans=0;
    cin>>n;
    string t;
    cin>>t;
    for (int i=0;i<t.size();i++)
        if (t[i]=='0')  a[i]=false;
        else    a[i]=true;
    cin>>t;
    for (int i=0;i<t.size();i++)
        if (t[i]=='0')  b[i]=false;
        else    b[i]=true;
    for (int i=0;i<n-1;i++)   {
        if (a[i]==b[i]) continue;
        if (a[i+1]!=a[i]&&a[i+1]!=b[i+1])   {
            swap(a[i+1],a[i]);
            ans++,i++;
        }
        else    {
            a[i]=~a[i];
            ans++;
        }
    }
    if (a[n-1]!=b[n-1]) ans++;
    cout<<ans<<endl;
    return 0;
}
