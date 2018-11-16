#include <bits/stdc++.h>
using namespace std;
void solve(int d);
int main()  {
    int n,d;
    scanf("%d",&n);
    for (int i=0;i<n;i++)   {
        scanf("%d",&d);
        solve(d);
    }
    return 0;
}

void solve(int d)   {
    double delta,a,b;
    delta=d*d-4*d;
    if (delta<0)    {cout<<'N'<<endl;return;}
    double sq=sqrt(delta);
    a=(1.0*d+sq)/2;
    b=d-a;
    printf("Y %.9lf %.9lf\n",a,b);
}
