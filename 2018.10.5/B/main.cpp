#include <bits/stdc++.h>
#define N 1005
using namespace std;
char s[N][N];
bool can[N][N];
vector<int> ii[N][N];
int n,m;
bool inside(int x,int y);
bool inborden(int x,int y);
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    fill(can[0],can[0]+N*N,true);
    for (int i=0;i<n;i++)   {
        for (int j=0;j<m;j++)   {
            do{s[i][j]=getc(stdin);}
            while (s[i][j]=='\n');
            for (int dx=-1;dx<=1;dx++)  {
                for (int dy=-1;dy<=1;dy++)  {
                    if (!dx&&!dy)   continue;
                    int x=i+dx,y=j+dy;
                    if (!inside(x,y))   continue;
                    if (s[i][j]=='.')   can[x][y]=false;
                    else if (!inborden(x,y))    {
                        ii[i][j].push_back(x*m+y);
                    }
                }
            }
        }
    }
    for (int i=0;i<n;i++)   {
        for (int j=0;j<m;j++)   {
            bool ok=false;
            if (s[i][j]=='.')   continue;
            for (int k=0;k<(int)ii[i][j].size();k++)    {
                int tt=ii[i][j][k];
                int x=tt/m,y=tt%m;
                ok|=can[x][y];
            }
            if (ok==false)  {cout<<"NO"<<endl;return 0;}
        }
    }
    cout<<"YES"<<endl;
    return 0;
}

bool inside(int x,int y)    {
    return x>=0&&x<n&&y>=0&&y<m;
}

bool inborden(int x,int y) {
    return x==0||x==(n-1)||y==0||y==(m-1);
}
