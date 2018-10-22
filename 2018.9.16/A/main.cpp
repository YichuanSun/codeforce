#include <bits/stdc++.h>
#define N 1005
#define INF 1000000005
using namespace std;
int a[N];
int main()  {
    int n,t,mx=-1,mi=INF;
    cin>>n;
    for (int i=0;i<n;i++)   {
        cin>>t;
        mx=max(t,mx);
        mi=min(t,mi);
    }
    cout<<mx-mi+1-n<<endl;
    return 0;
}
