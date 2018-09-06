#include <bits/stdc++.h>
#define N 100005
using namespace std;
typedef long long ll;
ll a[N],b[N];
queue<ll> aq,bq;
bool cmp(ll a,ll b)   {
    return a>b;
}
int main()  {
    int n;
    cin>>n;
    int asum=0,bsum=0,cnt=0;
    for (int i=0;i<n;i++)   cin>>a[i];
    for (int i=0;i<n;i++)   cin>>b[i];
    sort(a,a+n,cmp);
    sort(b,b+n,cmp);
    for (int i=0;i<n;i++)   aq.push(a[i]);
    for (int i=0;i<n;i++)   bq.push(b[i]);
    while (!(aq.empty()&&bq.empty()))  {
        cnt++;
        if (cnt&1)  {
            if (aq.empty()&&!bq.empty()) {
                bq.pop();
                continue;
            }
            else if (!aq.empty()&&bq.empty())  {
                asum+=aq.front();
                aq.pop();
                continue;
            }
            if (aq.front()<bq.front())  bq.pop();
            else {
                asum+=aq.front();
                aq.pop();
            }
        }
        else    {
            if (aq.empty()&&!bq.empty()){
                bsum+=bq.front();
                bq.pop();
                continue;
            }
            else if (!aq.empty()&&bq.empty())   {
                aq.pop();
                continue;
            }
            if (bq.front()<aq.front())  aq.pop();
            else    {
                bsum+=bq.front();
                bq.pop();
            }
        }
    }
    cout<<asum-bsum<<endl;
    return 0;
}
