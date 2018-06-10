#include <bits/stdc++.h>
using namespace std;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    long long n,m;
    int a,b;
    cin>>n>>m>>a>>b;
    long long di=n%m;
    long long antidi=m-di;
    if (di*b>antidi*a)  cout<<antidi*a<<endl;
    else cout<<di*b<<endl;
    return 0;
}
