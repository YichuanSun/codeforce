#include <bits/stdc++.h>
#define mp(a,b) make_pair(a,b)
#define N 100005
#define MOD 1000000007
using namespace std;

typedef pair<int,int> pii;
typedef long long ll;
vector<pii> vi[N];
int cnt=0,fst=0;
ll pw1,pw2;

void dfs(int a);
bool visited[N];
ll dbpow(int a,int b,int md)   {
    ll ans=1;
    while (b--) {
        ans*=a;
        ans%=md;
    }
    return ans;
}

int main()  {
    int n,k,v1,v2,j,uncon=0;
    cin>>n>>k;
    ll ans=dbpow(n,k,MOD);
    for (int i=0;i<n-1;i++) {
        cin>>v1>>v2>>j;
        vi[v1].push_back(mp(v2,j));
        vi[v2].push_back(mp(v1,j));
    }
    for (int i=1;i<=n;i++)  {
        cnt=0,fst=0;
        dfs(i);
        if (cnt==0)  continue;
        ans-=dbpow(cnt,k,MOD);
        ans+=MOD;
        ans%=MOD;
//        cot+=dbpow(cnt,k,MOD);
//        cot%=MOD;
//        cout<<"now cnt=\t"<<cnt<<endl;
//        cout<<i<<' '<<cot<<endl;
    }
    for (int i=1;i<=n;i++)  {
        int spot=0;
        for (int j=0;j<(int)vi[i].size();j++)
            if (vi[i][j].second==0) spot=1;
        if (spot==0)    uncon++;
    }
    ll qq=dbpow(n,k,MOD);
//    ll tans=qq-cot-uncon;
//    if (uncon==n)   tans=qq-n;
//    cout<<"uncon=\t"<<uncon<<endl;
//    cout<<"qq=\t"<<qq<<endl;
//    cout<<"qt=\t"<<uncon<<endl;
    cout<<ans-uncon<<endl;
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
