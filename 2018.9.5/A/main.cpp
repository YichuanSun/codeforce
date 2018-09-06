#include <bits/stdc++.h>
using namespace std;
int cdt[25];
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,a,b,sum=0;
    bool flag=true;
    cin>>n>>a>>b;
    int mi=min(b,a);
    int mx=max(b,a);
    int prc[2]={a,b};
    for (int i=0;i<n;i++)   cin>>cdt[i];
    for (int i=0;i<=(n-1)/2;i++)    {
        int miw=n-1-i;
        if (cdt[i]!=cdt[miw]&&cdt[i]!=2&&cdt[miw]!=2){
            flag=false;
            break;
        }
    }
    if (!flag)  {
        cout<<-1<<endl;
        return 0;
    }
    for (int i=0;i<=(n-1)/2;i++)    {
        int miw=n-1-i;
        if (cdt[i]==2&&cdt[miw]==2&&i!=miw) sum+=mi*2;
        else if (cdt[i]==2&&cdt[miw]==2&&i==miw) sum+=mi;
        else if (cdt[i]==2&&cdt[miw]!=2)    {
            cdt[i]=cdt[miw];
            sum+=prc[cdt[i]];
        }
        else if (cdt[miw]==2&&cdt[i]!=2)    {
            cdt[miw]=cdt[i];
            sum+=prc[cdt[i]];
        }
    }
    cout<<sum<<endl;
    return 0;
}



