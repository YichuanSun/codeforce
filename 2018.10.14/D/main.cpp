#include <bits/stdc++.h>
#define N 2005
using namespace std;
char graph[N][N];
bool visit[N][N];
int n,m,r,c,x,y,ans,cnt=0;
void dfs(int x,int y,int rt,int lt);
int main()  {
    cin>>n>>m>>r>>c>>x>>y;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin>>graph[i][j];       //此处图没问题
    dfs(r,c,x,y);
    cout<<endl;
    for (int i=1;i<=n;i++)  {
        for (int j=1;j<=m;j++)  {
            if (visit[i][j])    cout<<'+';
            else cout<<graph[i][j];
        }
        cout<<endl;
    }
    cout<<ans<<endl;
    return 0;
}

void dfs(int x,int y,int lt,int rt)  {
    if (x<=0||x>n||y<=0||y>n)   return;
    if (visit[x][y]||graph[x][y]=='*')    return;
    //if (x!=r&&y!=c)
    cout<<"Case:"<<cnt++<<endl;
    cout<<endl;
    for (int i=1;i<=n;i++)  {
        for (int j=1;j<=m;j++)  {
            if (visit[i][j])    cout<<'+';
            else cout<<graph[i][j];
        }
        cout<<endl;
    }
        visit[x][y]=true;
    ans++;
    for (int dx=-1;dx<=1;dx++)  {
        if (lt) {
            dfs(x+dx,y-1,lt-1,rt);
//            if (!(x+dx<=0||x+dx>n||y-1<=0||y-1>n))
//                visit[x+dx][y-1]=false;
        }
        dfs(x+dx,y,lt,rt);
//        if (!(x+dx<=0||x+dx>n||y<=0||y>n))
//            visit[x+dx][y]=false;
        if (rt) {
            dfs(x+dx,y+1,lt,rt-1);
//            if (!(x+dx<=0||x+dx>n||y+1<=0||y+1>n))
//                visit[x+dx][y+1]=false;
        }
    }
}
