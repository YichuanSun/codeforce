#include <bits/stdc++.h>
using namespace std;

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,x,y;
    int emm=-1;
    cin>>n;
    for (int i=0;i<n;i++)   {
        cin>>x>>y;
        int di=x+y;
        if (emm<di) emm=di;
    }
    cout<<emm<<endl;
    return 0;
}
