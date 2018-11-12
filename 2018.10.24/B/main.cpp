#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()  {
    ll b,cnt=0;
    cin>>b;
    for (ll i=1;i<=(ll)sqrt(b);i++)   {
        ll p=b/i;
        if (b%i==0&&b%p==0&&p!=i) cnt+=2;
        else if (b%i==0&&b%p==0&&p==i)  cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
