#include<bits/stdc++.h>
#define ll long long
#define db double
#define P pair<ll,ll>
#define mp make_pair
#define fi first
#define se second
#define N 1001000
#define M
using namespace std;

ll n,m,sum,ans;
P num[N];
priority_queue<ll,vector<ll>,greater<ll> >pq;

inline void add(ll u){
	pq.push(u);
	sum+=u;
	if(pq.size()>m){
		sum-=pq.top();
		cout<<"now pop:"<<pq.top()<<endl;
		pq.pop();
	}
}

int main(){
	ll i,j;
	cin>>n>>m;
	for(i=1;i<=n;i++)
		scanf("%lld%lld",&num[i].se,&num[i].fi);
	sort(num+1,num+n+1);
	cout<<"first=beauty second=time"<<endl;
	for (int i=1;i<=n;i++)
        cout<<num[i].fi<<' '<<num[i].se<<endl;
	for(i=n;i>=1;i--){
		add(num[i].se);
		ans=max(ans,sum*num[i].fi);
	}
	cout<<ans;
}
