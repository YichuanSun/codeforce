#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++)   {
        ll a;
        cin>>a;
        for (int j=0;j<=a;j++)
            cout<<((a-j)^a)<<'\t'<<j<<endl;
    }
    return 0;
}
