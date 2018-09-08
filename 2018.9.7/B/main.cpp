#include <bits/stdc++.h>
using namespace std;

int main()  {
    long long n,x,y,k;
    cin>>n;
    for (long long i=0;i<n;i++)   {
        cin>>x>>y>>k;
        if (x>k||y>k)   {
            cout<<-1<<endl;
            continue;
        }
        if (abs(x-y)&1) k--;
        else    {
            long long mi=min(x,y);
            if ((k-mi)&1)   k-=2;
        }
        cout<<k<<endl;
    }
    return 0;
}
