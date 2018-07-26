#include <bits/stdc++.h>
using namespace std;

int main()  {
    ios::sync_with_stdio(false);
    cout.tie(0),cin.tie(0);
    int n,temp;
    cin>>n;
    while (n--) {
        cin>>temp;
        if (temp&1) cout<<temp;
        else cout<<temp-1;
        cout<<(n==0?'\n':' ' );
    }
    return 0;
}
