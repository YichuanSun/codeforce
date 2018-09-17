#include <bits/stdc++.h>
using namespace std;

int main()  {
    int n,m,t,sum=0,mx=-1,ansmi=0,ansmx=0;
    scanf("%d%d",&n,&m);
    for (int i=0;i<n;i++) {
        scanf("%d",&t);
        sum+=t;
        if (t>mx)   mx=t;
    }
    int tot=m+sum;
    int thd=mx*n;
    if (m<=thd-sum)  ansmi=mx;
    else if (tot%n==0)   ansmi=tot/n;
    else    ansmi=tot/n+1;
    ansmx=mx+m;
    printf("%d %d\n",ansmi,ansmx);
    return 0;
}
