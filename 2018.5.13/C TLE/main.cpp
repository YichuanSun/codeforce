#include <bits/stdc++.h>
#define SIZE 200010
using namespace std;
typedef long long ll;
int sear(ll env,vector<ll> group);
ll temp,env;
vector<ll> group;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n,m;
    cin >> n >> m;
    for (int i=1;i<=n;i++)   {
        cin>>temp;
        group.push_back(group[i-1]+temp);
    }
    //for (int i=0;i<=n;i++)  cout << i << " " << group[i] << endl;
    for (int i=0;i<m;i++)   {
        cin>>env;
        int num=sear(env,group);
        cout<<num<<" "<<env-group[num-1]<<endl;
    }
    return 0;
}

int sear(ll env,vector<ll> group)  {
    int i;
    for (i=1;env>group[i];i++);
    return i;
}
