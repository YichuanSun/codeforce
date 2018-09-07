#include <bits/stdc++.h>
using namespace std;

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n,k;
    cin>>n>>k;
    if (k%n==0) cout<<k/n<<endl;
    else{
        if (n>k)    cout<<1<<endl;
        else    cout<<k/n+1<<endl;
    }
    return 0;
}
