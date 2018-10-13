#include <bits/stdc++.h>
#define N 1000000005
using namespace std;
int main()  {
    int t,L,v,l,r;
    cin>>t;
    while (t--) {
        cin>>L>>v>>l>>r;
        int tot=L/v;
        int fst=l/v,lst=r/v;
        //cout<<tot<<' '<<fst<<' '<<lst<<endl;
        int ans=tot-(lst-fst+!(l%v));
        cout<<ans<<endl;
    }
    return 0;
}
