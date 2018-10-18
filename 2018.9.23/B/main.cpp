#include <bits/stdc++.h>
using namespace std;

int main()  {
    int n,d,m,xi,yi;
    cin>>n>>d;
    cin>>m;
    for (int i=0;i<m;i++)   {
        cin>>xi>>yi;
        int y[6],pot=0,ngt=0,fg=0;
        fill(y,y+6,0);
        y[1]=xi+d;
        y[2]=xi-d;
        y[3]=-xi+2*n-d;
        y[4]=-xi+d;
        for (int i=1;i<=4;i++)  {
            if (y[i]==yi)   {fg=1;break;}
            if (y[i]<yi)    pot++;
            else ngt++;
        }
        if (fg) {cout<<"YES"<<endl;continue;}
        if (pot==ngt&&pot==2)   cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
