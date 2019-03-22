#include <bits/stdc++.h>
#define mp(a,b) make_pair(a,b)
#define N 100005
using namespace std;

typedef pair<int,int> pii;
typedef long long ll;
vector<pii> vi[N];
int cnt=0,fst=0;
ll pw1,pw2;

void dfs(int a);
bool visited[N];
ll db(int a,int b)   {
    ll ans=1;
    while (b--) {
        ans*=a;
    }
    return ans;
}

int main()  {
    int n,k,v1,v2,j,uncon=0;
    ll cot=0;
    cin>>n>>k;
    for (int i=0;i<n-1;i++) {
        cin>>v1>>v2>>j;
        vi[v1].push_back(mp(v2,j));
        vi[v2].push_back(mp(v1,j));
    }
    for (int i=1;i<=n;i++)  {
        cnt=0,fst=0;
        dfs(i);
        if (cnt==0)  continue;
        cot+=db(cnt,k);
        cout<<"now cnt=\t"<<cnt<<endl;
        cout<<i<<' '<<cot<<endl;
    }
    for (int i=1;i<=n;i++)  {
        int spot=0;
        for (int j=0;j<(int)vi[i].size();j++)
            if (vi[i][j].second==0) spot=1;
        if (spot==0)    uncon++;
    }
    ll qq=db(n,k),qt=uncon;
    ll tans=qq-cot-qt;
    if (uncon==n)   tans=qq-n;
    cout<<"uncon=\t"<<uncon<<endl;
    cout<<"qq=\t"<<qq<<endl;
    cout<<"cot=\t"<<cot<<endl;
    cout<<"qt=\t"<<qt<<endl;
    cout<<tans<<endl;
    return 0;
}

void dfs(int a)    {
    if (visited[a]) return;
    visited[a]=1;
//    cout<<"OK1"<<endl;
    for (int i=0;i<(int)vi[a].size();i++)   {
        if ((!visited[vi[a][i].first])&&vi[a][i].second==0) {
            if (fst==0) {cnt++;fst=1;}
            cnt++;
//            cout<<"OK2"<<endl;
            dfs(vi[a][i].first);
        }
    }
}
