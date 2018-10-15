#include <bits/stdc++.h>
#define N 2005
using namespace std;
char g[N][N];
bool visit[N][N];
struct node{
    int r,c,x,y;
    node(int rr,int cc,int xx,int yy)
        {x=xx,y=yy,r=rr,c=cc;}
};
deque<node> dq;
int main()  {
    int n,m,r,c,x,y,ans=0;
    cin>>n>>m>>r>>c>>x>>y;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin>>g[i][j];
    dq.push_back(node(r,c,x,y));
    while (!dq.empty()) {
        node tn=dq.front();dq.pop_front();
        int nx=tn.r,ny=tn.c;
        if (visit[nx][ny])  continue;
        visit[nx][ny]=true;ans++;
//        if (ny-1>0&&g[nx][ny-1]=='.'&&tn.x)    dq.push_front(node(nx,ny-1,tn.x-1,tn.y));
//        if (ny+1<=m&&g[nx][ny+1]=='.'&&tn.y)   dq.push_front(node(nx,ny+1,tn.x,tn.y-1));
//        if (nx-1>0&&g[nx-1][ny]=='.')   dq.push_front(node(nx-1,ny,tn.x,tn.y));
//        if (nx+1<=n&&g[nx+1][ny]=='.')   dq.push_front(node(nx+1,ny,tn.x,tn.y));
        if (nx-1>0&&g[nx-1][ny]=='.')   dq.push_front(node(nx-1,ny,tn.x,tn.y));
        if (nx+1<=n&&g[nx+1][ny]=='.')   dq.push_front(node(nx+1,ny,tn.x,tn.y));
        if (ny-1>0&&g[nx][ny-1]=='.'&&tn.x)    dq.push_back(node(nx,ny-1,tn.x-1,tn.y));
        if (ny+1<=m&&g[nx][ny+1]=='.'&&tn.y)   dq.push_back(node(nx,ny+1,tn.x,tn.y-1));
    }
    cout<<ans<<endl;
    return 0;
}
