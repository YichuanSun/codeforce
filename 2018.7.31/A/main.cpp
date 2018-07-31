#include <bits/stdc++.h>
using namespace std;
bool line[106];
int s[106];
int main()  {
    int n,m,b,e,cnt=0;
    scanf("%d %d",&n,&m);
    for (int i=0;i<n;i++)   {
        scanf("%d %d",&b,&e);
        for (int j=b;j<=e;j++)  line[j]=true;
    }
    for (int i=1;i<=m;i++)  if (!line[i])   s[cnt++]=i;
    cout<<cnt<<'\n';
    if (cnt==0) {
        cout<<endl;
        return 0;
    }
    cout<<s[0];
    for (int i=1;i<cnt;i++) cout<<' '<<s[i];
    cout<<endl;
    return 0;
}
