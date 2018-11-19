#include <bits/stdc++.h>
using namespace std;

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    int sz=s.size();
    int ro=sz/20+(sz%20!=0);
    int co=sz/ro+(sz%ro!=0);
    cout<<ro<<' '<<co<<endl;
    int as=ro*co-sz,it=0,ia=0;
    int perow=as/ro+(as%co!=0);
    while (it<sz)   {
        int i=0;
        while (i<perow&&ia<as)  {
            cout<<'*';
            ia++,i++;
        }
        for (int j=i;j<co;j++)
            cout<<s[it++];
        cout<<endl;
    }
    return 0;
}
