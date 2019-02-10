#include <bits/stdc++.h>
using namespace std;

int main()  {
    int x,y,z,a,b,c;
    cin>>x>>y>>z>>a>>b>>c;
    if (a>=x)   {
        if (a+b-x>=y)   {
            if (a+b+c-x-y>=z)   {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
