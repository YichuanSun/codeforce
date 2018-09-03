//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 223456;
//
//int n, m, a[N], b[N], c[N], vis[N];
//vector<int> e[N];
//
//int main()
//{
//    scanf("%d", &n);
//    for (int i = 1; i < n; i++)
//    {
//        int x, y;
//        scanf("%d%d", &x, &y);
//        e[x].push_back(y);
//        e[y].push_back(x);
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%d", a + i);
//        b[a[i]] = i;
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        sort(e[i].begin(), e[i].end(), [&](int x, int y)
//        {
//            return b[x] < b[y];
//        });
//    }
//    queue<int> q;
//    q.push(1);
//    vis[1] = 1;
//    while (!q.empty())
//    {
//        int u = q.front();
//        q.pop();
//        c[++m] = u;
//        for (auto v : e[u])
//            if (!vis[v])
//            {
//                vis[v] = 1;
//                q.push(v);
//            }
//    }
//    for (int i = 1; i <= n; i++)
//        if (a[i] != c[i])
//        {
//            puts("No");
//            return 0;
//        }
//    puts("Yes");
//}

#include <bits/stdc++.h>
#define N 200005
using namespace std;
vector<int> v[N];
queue<int> que;
//int tl[N],level[N];
//level是每层的节点数，rk是对应点的层数
//int rk[N];
int b[N],w[N],q[N];
bool used[N];
void bfs();
bool cmp(int x,int y)  {
    return b[x]<b[y];
}
int main()  {
    int n,f,c;
    //bool flag=true;
    cin>>n;
    for (int i=0;i<n-1;i++)   {
        cin>>f>>c;
        v[f].push_back(c);
        v[c].push_back(f);
    }
    for (int i=1;i<=n;i++)   {
        cin>>q[i];
        b[q[i]]=i;
    }
    for (int i=1;i<=n;i++)              //最后wa的原因就在这里，我写了i=0;i<n;这样名字为n的节点的子节点就不能被排序了
        sort(v[i].begin(),v[i].end(),cmp);
    bfs();
    for (int i=1;i<=n;i++)   {
        if (q[i]!=w[i]) {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
//    for (int i=0;i<n;i++)   {
//        if (cnt!=rk[q[i]])  {
//            flag=false;
//            break;
//        }
//        level[rk[q[i]]]--;
//        if (level[rk[q[i]]]==0) {
//            cnt++;
//        }
//    }
//    if (flag)   cout<<"Yes"<<endl;
//    else    cout<<"No"<<endl;
    return 0;
}

void bfs()  {
    que.push(1);
    used[1]=true;
    //level[0]=tl[0]=1;
    //rk[1]=0;
    //int cc=0;
    int cnt=0;
    while (!que.empty())    {
        int tt=que.front();
        w[++cnt]=tt;
        que.pop();
        //tl[cc]--;
        for (unsigned i=0;i<v[tt].size();i++)    {
            if (!used[v[tt][i]])   {
                used[v[tt][i]]=true;
                que.push(v[tt][i]);
            }
            //tl[cc+1]++;
            //rk[v[tt][i]]=cc+1;
        }
        //level[cc+1]=tl[cc+1];
        //if (tl[cc]==0)   cc++;
    }
}
