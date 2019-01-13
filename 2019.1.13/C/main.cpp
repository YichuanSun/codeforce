#include <bits/stdc++.h>
#define M_PI 3.14159265358979323846
using namespace std;

int main()  {
    int n,r;
    cin>>n>>r;
    double theta=M_PI*(n-2)/(2*n);
    double cs=cos(theta);
    double ans=1.0*r*cs/(1-cs);
    printf("%.7lf\n",ans);
    return 0;
}
