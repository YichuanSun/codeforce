#include <bits/stdc++.h>
#define sz(x) ((int)x.size())
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;
typedef long double ld;
int n,m;
bool chk[3010];
vector<pair<int,int> > a, b[3010];
int main() {
	scanf("%d%d",&n,&m);
	int init = 0;
	for(int i=1; i<=n; i++) {
		int p,c;
		scanf("%d%d", &p, &c);
		if(p == 1) {
			init++;
			continue;
		}
		b[p].push_back({c,i});
		a.push_back({c,i});
	}
	sort(all(a));
	for(int i=1; i<=m; i++) sort(all(b[i]));
	ll res = 9e18;
	for(int i=max(init,1); i<=n; i++) {
		memset(chk, 0, sizeof(chk));
		int cnt = 0; ll cost = 0;
		for(int j=1; j<=m; j++) {
			if(sz(b[j]) >= i) {
				for(int k=0; k<sz(b[j])-i+1; k++) {
					cost += b[j][k].first;
					chk[b[j][k].second] = 1;
					cnt++;
				}
			}
		}
		//cout<<"dbg1"<<endl;
		if(cnt > i) continue;
		for(int j=0; j<sz(a) && cnt+init < i; j++)
			if(!chk[a[j].second]) {
				cost += a[j].first;
				cnt++;
			}
		res = min(res, cost);
	}
	printf("%lld", res);
	return 0;
}
