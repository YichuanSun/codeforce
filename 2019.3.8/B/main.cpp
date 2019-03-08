#include <bits/stdc++.h>
#define N 5005
using namespace std;
string sv1,sv2;
int spt[N];
vector<int> a,b,c,d;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
//    for (int i=0;i<n;i++)   cin>>sv[0][i];
//    for (int i=0;i<n;i++)   cin>>sv[1][i];
    cin>>sv1;
    cin>>sv2;
    for (int i=0;i<n;i++)   {
        if (sv1[i]=='0'&&sv2[i]=='0')       {spt[i]=0;a.push_back(i+1);}
        else if (sv1[i]=='0'&&sv2[i]=='1')  {spt[i]=1;b.push_back(i+1);}
        else if (sv1[i]=='1'&&sv2[i]=='0')  {spt[i]=2;c.push_back(i+1);}
        else if (sv1[i]=='1'&&sv2[i]=='1')  {spt[i]=3;d.push_back(i+1);}
    }
    int az=a.size(),bz=b.size(),cz=c.size(),dz=d.size();
    int k=dz-abs(bz-cz),ms=abs(bz-cz);
    cout<<az<<' '<<bz<<' '<<cz<<' '<<dz<<endl;
    cout<<k<<' '<<ms<<endl;
    if (k>=0)   {
        if (bz<=cz) {
            if (cz>0)   {
                cout<<c[0];
                for (int i=1;i<cz;i++)
                    cout<<' '<<c[i];
                for (int i=0;i<=(dz-ms)/2;i++)    cout<<' '<<d[i];
                cout<<endl;
            }
            else    {
                if (dz>0)   {
                    cout<<d[0];
                    for (int i=1;i<dz/2;i++)
                        cout<<' '<<d[i];
                    cout<<endl;
                }
                else {
                    cout<<1;
                    for (int i=1;i<=n/2;i++)
                        cout<<' '<<i;
                    cout<<endl;
                }
            }
        }
        else {
            if (cz>0)   {
                cout<<c[0];
                for (int i=1;i<cz;i++)
                    cout<<' '<<c[i];
                for (int i=0;i<=(dz+ms)/2;i++)
                    cout<<' '<<d[i];
                cout<<endl;
            }
            else {
                cout<<d[0];
                for (int i=1;i<=(dz+ms)/2;i++)
                    cout<<' '<<d[i];
                cout<<endl;
            }
        }
    }
    else cout<<-1<<endl;
    return 0;
}
