#include <bits/stdc++.h>
#define N 300010
using namespace std;
typedef pair<int,int> p;
typedef long long ll;
p song[N];
ll n,k,sum,ans;
void attemptAdd(int c);
priority_queue<int,vector<int>,greater<int> > q;
int main()  {
    cin>>n>>k;
    for (int i=0;i<n;i++)
        cin>>song[i].second>>song[i].first;
    sort(song,song+n);
    for (int i=n-1;i>=0;i--)    {
        attemptAdd(song[i].second);
        ans=max(ans,sum*song[i].first);
    }
    cout<<ans<<endl;
    return 0;
}

void attemptAdd(int c)   {
    q.push(c);
    sum+=c;
    if ((int)q.size()>k)    {
        sum-=q.top();
        q.pop();
    }
}






//#include<bits/stdc++.h>
//#define ll long long
//#define db double
//#define P pair<ll,ll>
//#define mp make_pair
//#define fi first
//#define se second
//#define N 1001000
//#define M
//using namespace std;
//
//ll n,m,sum,ans;
//P num[N];
//priority_queue<ll,vector<ll>,greater<ll> >pq;
//
//inline void add(ll u){
//	pq.push(u);
//	sum+=u;
//	if(pq.size()>m){
//		sum-=pq.top();
//		cout<<"now pop:"<<pq.top()<<endl;
//		pq.pop();
//	}
//}
//
//int main(){
//	ll i,j;
//	cin>>n>>m;
//	for(i=1;i<=n;i++)
//		scanf("%lld%lld",&num[i].se,&num[i].fi);
//	sort(num+1,num+n+1);
//	cout<<"first=beauty second=time"<<endl;
//	for (int i=1;i<=n;i++)
//        cout<<num[i].fi<<' '<<num[i].se<<endl;
//	for(i=n;i>=1;i--){
//		add(num[i].se);
//		ans=max(ans,sum*num[i].fi);
//	}
//	cout<<ans;
//}
