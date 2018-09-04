#include <bits/stdc++.h>
#define N 120
using namespace std;
char a[N][N];
int main()  {
    int n,m;
    cin>>n>>m;
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            cin>>a[i][j];
    int cnt=0;
    int s1x,s1y,s2x=-1,s2y=-1;
    for (int i=0;i<n;i++)   {
        for (int j=0;j<m;j++)   {
            if (cnt==0&&a[i][j]=='B')   {
                s1x=i,s1y=j;
                cnt++;
            }
            else if (cnt!=0&&a[i][j]=='B')  {
                s2x=max(s1x,i);
                s2y=max(s1y,j);
                cnt++;
            }
        }
    }
    if (s2x==-1)    cout<<s1x+1<<' '<<s1y+1<<endl;
    else    cout<<(s1x+s2x)/2+1<<' '<<(s1y+s2y)/2+1<<endl;
    return 0;
}
