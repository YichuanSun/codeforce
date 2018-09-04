#include <bits/stdc++.h>
using namespace std;
int calrt(int n)    {
    int dr=0;
    while (n)   {
        dr+=n%10;
        n/=10;
    }
    return dr;
}
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for (int i=n;;i++)  {
        if (calrt(i)<n) continue;
        for (int j=n;;j++)  {
            if (calrt(j)<n) continue;
            int sum=i+j;
            if (calrt(sum)<=m)  {
                cout<<i<<endl;
                cout<<j<<endl;
                return 0;
            }
        }
    }
    return 0;
}
