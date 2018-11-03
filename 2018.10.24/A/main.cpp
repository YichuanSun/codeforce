#include <bits/stdc++.h>
using namespace std;

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m,k,l,x;
    cin>>n>>m>>k>>l;
    int a=l/m,b=(n-k)/m;
    for (x=a;x<=b;x++)  {
        if (x*m>=l&&x*m<n-k)    {
            break;
        }
    }
    if (x==b+1) cout<<-1<<endl;
    else    cout<<x<<endl;
    return 0;
}
