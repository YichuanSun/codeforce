#include <bits/stdc++.h>
using namespace std;

int main()  {
    int n,h,a,b,k,st,sf,et,ef;
    scanf("%d %d %d %d %d",&n,&h,&a,&b,&k);
    for (int i=0;i<k;i++)   {
        scanf("%d %d %d %d",&st,&sf,&et,&ef);
        if (st==et) {
            printf("%d\n",abs(sf-ef));
            continue;
        }
        int mmin=100000,mi;
        for (int i=a;i<=b;i++)  {
            mi=abs(sf-i)+abs(ef-i);
            if (mi<mmin)    mmin=mi;
        }
        printf("%d\n",mmin+abs(et-st));
    }
    return 0;
}
