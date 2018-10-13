#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#define LL long long
using namespace std;
LL n,k;
int a[200050];
bool cmp(int x,int y){
    return x>y;
}
int minn=2147483647,maxn=0;
int b[200050];
int main(){
    cin>>n>>k;
    for(int i(1);i<=n;i++)scanf("%d",&a[i]),minn=min(minn,a[i]),maxn=max(maxn,a[i]);
    if(n==1){
        cout<<0;
        return 0;
    }
    for(int i(1);i<=n;i++){
        a[i]-=minn;
        b[1]++;
        b[a[i]+1]--;
    }
    for (int i=1;i<=maxn;i++)   cout<<b[i]<<' ';
    cout<<endl;
    for(int i(2);i<=n;i++){
        if(a[i]!=a[1])break;
        if(i==n){
            cout<<0;
            return 0;
        }
    }
    for(int i(2);i<=maxn;i++)b[i]+=b[i-1];
    int tmp=0,ans=1;
    for (int i=1;i<=maxn;i++)   cout<<b[i]<<' ';
    cout<<endl;
    for(int i(1);i<=maxn;i++){
        if(tmp+b[i]<=k)tmp+=b[i];
        else ans++,tmp=b[i];
    }
    printf("%d",ans);
    return 0;
}
