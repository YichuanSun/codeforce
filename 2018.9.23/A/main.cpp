#include <bits/stdc++.h>
using namespace std;

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,fg=0,t;
    cin>>n;
    for (int i=0;i<n;i++)   {
        cin>>t;
        if (t==1)   fg=1;
    }
    if (fg) cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;
    return 0;
}
