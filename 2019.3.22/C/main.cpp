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
		pq.pop();
	}
}

int main(){
	ll i,j;
	cin>>n>>m;
	for(i=1;i<=n;i++)
		scanf("%lld%lld",&num[i].se,&num[i].fi);
	sort(num+1,num+n+1);
	for(i=n;i>=1;i--){
		add(num[i].se);
		ans=max(ans,sum*num[i].fi);
	}
	cout<<ans;
}


//#include<bits/stdc++.h>
//#define MAXN 300005
//#define INF 1000000000
//#define MOD 1000000007
//#define F first
//#define S second
//using namespace std;
//typedef long long ll;
//typedef pair<int,int> P;
//int n,k;
//priority_queue <int,vector<int>,greater<int> > pque;
//P a[MAXN];
//int main()
//{
//    scanf("%d%d",&n,&k);
//    for(int i=1;i<=n;i++)
//        scanf("%d%d",&a[i].S,&a[i].F);
//    sort(a+1,a+n+1,greater<P>());
//    for (int i=1;i<=n;i++)
//        cout<<a[i].F<<' '<<a[i].S<<endl;
//    ll sum=0,ans=0;
//    for(int i=1;i<=k;i++)
//    {
//        pque.push(a[i].S);
//        sum+=a[i].S;
//        ans=max(ans,sum*a[i].F);
//        cout<<"now round="<<i<<' '<<ans<<endl;
//    }
//    ans=max(ans,sum*a[k].F);
//    for(int i=k+1;i<=n;i++)
//    {
//        int p=pque.top();
//        if(a[i].S<=p) continue;
//        else
//        {
//            pque.pop();
//            pque.push(a[i].S);
//            sum-=p; sum+=a[i].S;
//            ans=max(ans,sum*a[i].F);
//        }
//    }
//    cout<<ans<<endl;
//    return 0;
//}
