#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll l,r;
    cin>>l>>r;
    ll tl=l,tr=l+1;
    cout<<"YES"<<endl;
    while (tr!=r+2)   {
        cout<<tl<<' '<<tr<<endl;
        tl+=2,tr+=2;
    }
    return 0;
}
